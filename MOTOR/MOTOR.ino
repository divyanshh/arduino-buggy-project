
int l=A0;
int p;
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(13, OUTPUT);
    pinMode(12, OUTPUT);
    pinMode(l,INPUT);
Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
  p=analogRead(l);
  int x= map(p, 0,1023,0,255);
  Serial.println(x);
 
  if(x<500)
  {analogWrite(13,x);
  digitalWrite(12,LOW);}
  else
  {analogWrite(12,x);
  digitalWrite(13,LOW);}

}
