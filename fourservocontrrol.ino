#include <Servo.h>

Servo Servo1;
Servo Servo2;
Servo Servo3;
Servo Servo4;
//declare it first, so say "hey, this exists as this enumerated data type, lets label it this"
//
int servoPin1 = 9;
int servoPin2 = 8;
int servoPin3 = 7;
int servoPin4 = 6;
//were labeling a value of a place to pull/push the data to

int potPin1 = A0;
int potPin2 = A1;
int potPin3 = A2;
int potPin4 = A3;
//were allocating an analog data location as x.


void setup() {
  // put your setup code here, to run once:
    Servo1.attach(servoPin1);
    Servo2.attach(servoPin2);
    Servo3.attach(servoPin3);
    Servo4.attach(servoPin4);
    //were actualling attatching servo1 to its servo pin value
    
}

void loop() {
  // put your main code here, to run repeatedly:
    int reading = analogRead(potPin1);
    int reading2 = analogRead(potPin2);
    int reading3 = analogRead(potPin3);
    int reading4 = analogRead(potPin4);
    //read the pot value from the set pot location
    //Serial.print("pot value %i\n", reading);
    //Serial.println("Hello, World!");
    int angle = map(reading, 0, 1023, 0, 270);
    int angle2 = map(reading2, 0, 1023, 0, 270);
    int angle3 = map(reading3, 0, 1023, 0, 270);
    int angle4 = map(reading4, 0, 1023, 0, 270);
    Servo1.write(angle);
    Servo2.write(angle2);
    Servo3.write(angle3);
    Servo4.write(angle4);
}
