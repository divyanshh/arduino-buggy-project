int rightf=5;
int rightb=6;
int leftb=7;
int leftf=8;
int timeElapsed = 0;

void setup() {
for(int i=5;i<9;i++)
  pinMode(i,OUTPUT); 
}

void loop() {
  // put your main code here, to run repeatedly:
  
  if(timeElapsed < 16000)
  {digitalWrite(rightf,HIGH);
  digitalWrite(rightb,LOW);
  digitalWrite(leftb,LOW);
  digitalWrite(leftf,LOW);
  delay(40);
  digitalWrite(leftf,HIGH);
  delay(40);
  timeElapsed = timeElapsed + 80;
  Serial.println(timeElapsed);}
    else if(timeElapsed >= 16000 && timeElapsed <= 32000 )
    {digitalWrite(rightf,HIGH);
  digitalWrite(rightb,LOW);
  digitalWrite(leftb,LOW);
  digitalWrite(rightf,LOW);
  delay(40);
  digitalWrite(rightf,HIGH);
  delay(40);
  timeElapsed = timeElapsed + 80;
  Serial.println(timeElapsed);}

else if(timeElapsed > 32000) {
  digitalWrite(rightf,LOW);
  digitalWrite(rightb,LOW);
  digitalWrite(leftb,LOW);
  digitalWrite(leftf,LOW);
  delay(10000);
}




      
      
   
}
