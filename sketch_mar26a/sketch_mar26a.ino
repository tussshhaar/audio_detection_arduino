const int ledpinr=13;
const int ledpinw=12;
const int ledping=11;
const int ledpinb=10;
const int soundpin=A0;

void setup() {
Serial.begin(9600);
pinMode(ledpinr,OUTPUT);
pinMode(ledpinw,OUTPUT);
pinMode(ledping,OUTPUT);
pinMode(ledpinb,OUTPUT);
pinMode(soundpin,INPUT);
}

void loop() {
Serial.println(analogRead(soundpin));
delay(10);
int soundsens=analogRead(soundpin);

if (soundsens>=150 or soundsens<=130 ) {
digitalWrite(ledpinb,HIGH);
delay(100);
}

if (soundsens>=155 or soundsens<=125 ) {
digitalWrite(ledping,HIGH);
delay(100);
}

if (soundsens>=160 or soundsens<=120 ) {
digitalWrite(ledpinw,HIGH);
delay(100);
}

if (soundsens>=165 or soundsens<=115 ) {
digitalWrite(ledpinr,HIGH);
delay(100);
}

else{
digitalWrite(ledpinb,LOW);
digitalWrite(ledping,LOW);
digitalWrite(ledpinw,LOW);
digitalWrite(ledpinr,LOW);
}

}
