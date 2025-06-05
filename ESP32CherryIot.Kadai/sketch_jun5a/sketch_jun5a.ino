#include <ESP32Servo.h> //ESP32Servo by Kevin Harrington

const int trigPin = 3; //3:ConnectorA 4:ConnectorB
const int echoPin = 1; //1:ConnectorA 5:ConnectorB
const int ledPin = 4; //3:ConnectorA 4:ConnectorB 10:Builtin

float Duration = 0; //Received Interval Time
float Distance = 0; //Calculation results from Duration


void setup() {
  Serial.begin(115200);
  pinMode(echoPin,INPUT);
  pinMode(trigPin,OUTPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH); //Ultrasonic output
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  Duration = pulseIn(echoPin, HIGH); //Input from sensor
  Duration = Duration/2; //Half the round trip time
  Distance = Duration*340*100/1000000; //Set sonic speed to 340 m/s
  Serial.println(Distance);

  if (Distance < 20) { 
    digitalWrite(ledPin, HIGH); //ON
  
  } else {
                   
    digitalWrite(ledPin, LOW); //OFF
  }
    delay(200);
}
