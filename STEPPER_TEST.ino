#include <Stepper.h>
const int stepsPerRevolution = 4096;  // change this to fit the number of steps per revolution

Stepper myStepper(stepsPerRevolution,4,5,6,7);
// create servo object to control a servo
// twelve servo objects can be created on most boards

int inputbyte = 0;    // variable to store the servo position

void setup() {
  myStepper.setSpeed(5);
  Serial.begin(9600);// attaches the servo on pin 9 to the servo object
}

void loop() {
 if (Serial.available()>0) 
           {
              inputbyte = Serial.parseInt();
              for(int i =1;i<=inputbyte;i++){
              myStepper.step(1);
              }
  inputbyte=0;
           }
  
                   // waits 15ms for the servo to reach the position
  }

