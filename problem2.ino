/*

*/
int redPin=11;
int bluePin=10;
int greenPin=9;
int poto=A0;
int val=0;

void setup() {
    Serial.begin(9600);
    pinMode(redPin,OUTPUT);
    pinMode(bluePin,OUTPUT);
    pinMode(greenPin,OUTPUT);
}

void loop() {
    analogWrite(redPin,128);
    analogWrite(greenPin,2);
    analogWrite(bluePin, 16);
}
