 int potpin=A0;
  int ledpin=6;
  int val=0;
int o=0;
void setup() {
  // put your setup code here, to run once:
 pinMode(ledpin,OUTPUT);
 Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
val=analogRead(potpin);
o=map(val,1023,0,255,0);
analogWrite(ledpin,o);
delay(500);

Serial.println(val);
Serial.println(o);


}
