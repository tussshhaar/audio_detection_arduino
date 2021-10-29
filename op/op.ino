const int ledpin=13;
const int soundpin=A0;

void setup() {
Serial.begin(9600);
pinMode(ledpin,OUTPUT);
pinMode(soundpin,INPUT);
}

void loop() {
Serial.println(analogRead(soundpin));
delay(10);
  int soundsens=analogRead(soundpin);
  if (soundsens>=150 or soundsens<=120 ) {
  digitalWrite(ledpin,HIGH);
//  delay(1000);
  }
  else{
  digitalWrite(ledpin,LOW);
  }

}
