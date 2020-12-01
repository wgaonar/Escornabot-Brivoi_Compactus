/*
  Calibrtion and test KeyPad 2.12
  Escornabot Brivoi Compactus

  Wilmer Gaona
  01 december 2020
*/

int KeyPadPin = A7;    // select the input pin for the potentiometer
int KeyPadValue = 0;  // variable to store the value coming from the sensor

void setup() {
  // initialize the serial communication:
  Serial.begin(9600);
}

void loop() {
  // read the value from the keypad:
  KeyPadValue = analogRead(KeyPadPin);
  Serial.print("Value read in KeyPadPin: ");
  Serial.println(KeyPadValue);
  delay(250);
}
