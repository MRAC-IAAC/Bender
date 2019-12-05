//
//
//
//
//// define a constant value named stepPin and assign the value 9 to it
//// this assumes digital pin 9 of Arduino is attached to the step input of driver
//#define stepPin 9
// 
//// define a constant value named dirPin and assign the value 8
//// this assumes digital pin 8 of Arduino is attached to the step input of your driver
//#define dirPin 8
// 
//// define the pins on N.O. buttons
//#define button1 2
//#define button2 3
// 
//// setup() loop, the Arduino runs through this once
//void setup() {
//  // digital pins on the Arduino can only be either set as an output or input - in our case we want to send data to the driver, so we choose output
//  
//  Serial.begin(9600); // open the serial port at 9600 bps:
//  pinMode(stepPin , OUTPUT);
//  pinMode(dirPin , OUTPUT);
// 
//  // define button pins as input pullup type
//  pinMode(button1, INPUT_PULLUP);
//  pinMode(button2, INPUT_PULLUP);
// 
// 
//}
// 
//// loop() loop, the Arduino continuously cycles through this as fast as it can
//void loop() {
//
//  if (digitalRead(button1) == LOW && digitalRead(button2) == HIGH) { // if button1 is pressed and button2 is not pressed
//    //Serial.println("1");
//    digitalWrite(dirPin, LOW); // move in the LOW direction
//  } else if (digitalRead(button1) == HIGH && digitalRead(button2) == LOW) { // if btton1 is not pressed and button2 is pressed
//    //Serial.println("2");
//    digitalWrite(dirPin, HIGH); // move in HIGH direction
//  }
// 
//  if (digitalRead(button1) == LOW || digitalRead(button2) == LOW) { // if either button is pressed
// 
//    // set a HIGH value to our step pin, this turns the voltage on for that pin
//    digitalWrite(stepPin , HIGH);
// 
//    // let's wait here for 50 milliseconds; note the units, this means 0.05s
//    delay(1);
// 
//    // let's set our step pin to false, this turns the voltage off for that pin and gives us the on/off cycle we need
//    digitalWrite(stepPin , LOW);
// 
//    // wait another 50 milliseconds after which time we loop back to the beginning of the loop() loop
//    delay(1);
// 
//  }
//}

/////////////////////////////////////////////////////////////////////////////////
//
//Void Setup

// setup pins numbers

//X motor pins
const int stepX = 9;
const int dirX  = 8;

const int enPin = 2;


/////////////////////////////

int StateInput = 50;

int CurrentState;
int PreviousState;

/////////////////////////////

void setup() {

  // Sets inputs and outputs
  //X motor pins
  pinMode(stepX, OUTPUT);
  pinMode(dirX, OUTPUT);

  //what is this??
  pinMode(enPin, OUTPUT);
  digitalWrite(enPin, LOW);

pinMode(StateInput, INPUT);

Serial.begin(9600);
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void loop() {

  CurrentState = digitalRead(StateInput);
  
if(CurrentState != PreviousState) {

//get input from PortC and convert binary to integer
 int AmountOfSteps = 200
 

//X positive direction
 if (digitalRead(button1) == LOW {
{  
  // Set the spinning direction clockwise:
  digitalWrite(dirX, HIGH);
  // Spin the stepper motor 1 revolution slowly:
  for (int i = 0; i < AmountOfSteps; i++) {
    // These four lines result in 1 step:
    digitalWrite(stepX, HIGH);
    delayMicroseconds(2000);
    digitalWrite(stepX, LOW);
    delayMicroseconds(2000);
  }
}


//X negative direction
 if (digitalRead(button1) == HIGH {
  // Set the spinning direction counter clockwise:
  digitalWrite(dirX, LOW);
  // Spin the stepper motor 1 revolution slowly:
  for (int i = 0; i < AmountOfSteps; i++) {
    // These four lines result in 1 step:
    digitalWrite(stepX, HIGH);
    delayMicroseconds(2000);
    digitalWrite(stepX, LOW);
    delayMicroseconds(2000);
  }
}
PreviousState = CurrentState;

  
}
