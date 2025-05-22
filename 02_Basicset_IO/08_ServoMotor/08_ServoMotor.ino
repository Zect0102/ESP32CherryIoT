#include <ESP32Servo.h> //ESP32Servo by Kevin Harrington

const int motorPin = 3; //3:ConnectorA 4:ConnectorB

Servo myservo;

void setup() {
  myservo.attach(motorPin);
}

void loop() {
  // 0-45 right
  for(int angle = 0; angle <= 45; angle++) {                        
    myservo.write(angle);
    delay(15);
  }
  // 45-0  left 
  for(int angle = 45; angle >= 0; angle--) {                 
    myservo.write(angle);  
    delay(15);      
  }
  // 0-90 right
  for(int angle = 0; angle <= 90; angle++) {                        
    myservo.write(angle);
    delay(15);
  }
  // 90-0  left 
  for(int angle = 90; angle >= 0; angle--) {                 
    myservo.write(angle);  
    delay(15);      
  }
  // 0-180 right
  for(int angle = 0; angle <= 180; angle++) {                        
    myservo.write(angle);
    delay(15);
  }
  // 180-0  left 
  for(int angle = 180; angle >= 0; angle--) {                 
    myservo.write(angle);  
    delay(15);      
  }
}
