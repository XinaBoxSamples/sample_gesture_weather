void main_code(void) {
  tempC = SW01.getTempC();
  humidity = SW01.getHumidity();
  pressure = SW01.getPressure();

  OD01.set2X();
  OD01.println("GESTURE");

  OD01.set1X();
  OD01.println("Swipe left: Temperature");
  OD01.println("Swipe right: Humidity");
  delay(1000);



  if ( apds.isGestureAvailable() ) {
    switch ( apds.readGesture() ) {

      case DIR_LEFT:
        OD01.print("Temperature:");
        OD01.println(tempC);
        break;
        delay(1000);

      case DIR_RIGHT:
        OD01.print("Humidity   :");
        OD01.println(humidity);
        break;
        delay(1000);

        

      //      case DIR_UP:
      //        Serial.print("");
      //        break;
      //      case DIR_DOWN:
      //        Serial.println("DOWN");
      //        break;

      //      case DIR_NEAR:
      //        Serial.println("NEAR");
      //        break;
      //      case DIR_FAR:
      //        Serial.println("FAR");
      //        break;
      default:
        ; //Serial.println("NONE");
    }
  }

}


