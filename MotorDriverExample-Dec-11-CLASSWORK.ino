int driverForward = 9; //This is the 2nd pin on the L293D driver module, TX instruments label this as 'in1' which i've put as the 'forward direction'. This should turn the motor one way.
int driverBackward = 3; //This is the 7th pin on the L293D driver module, TX instruments labels this as 'in2' which i've put as the 'backward direction' This should turn the motor the other way.
int driverEnaPin = 5; //This is the 'ENA1' pin on the L293D driver module (first pin), used to enable the driver and allow the motor to move.



void setup() {
  // put your setup code here, to run once:
  pinMode(driverForward, OUTPUT); //sets all of these digital pins to output
  pinMode(driverBackward, OUTPUT);
  pinMode(driverEnaPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(driverEnaPin, HIGH); //enables the motor
  analogWrite(driverForward, 255); //can set this to go forward or backward by labelling either as high or low or both the same (motor off)
  digitalWrite(driverBackward, LOW);
  delay(2000);
  analogWrite(driverForward, 0);
  delay(2000);
  analogWrite(driverForward, 255); //255 is highest pwm
  delay(2000);
  digitalWrite(driverForward, LOW);
  digitalWrite(driverBackward, LOW); //direction switch
  delay(200);
  analogWrite(driverBackward, 255);
  delay(2000);
  analogWrite(driverBackward, 0);
  delay(2000);
  analogWrite(driverBackward, 255);
  delay(2000);
}
