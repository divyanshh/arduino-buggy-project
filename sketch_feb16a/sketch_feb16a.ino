  int time = 0;
void setup() {
  // put your setup code here, to run once:
 
pinMode(A1,INPUT);
pinMode(A2,INPUT);
pinMode(5,OUTPUT); //left wheel
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);  //right wheel
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int left = analogRead(A1);
int right = analogRead(A2);


if(left<127  && right>127 ) {
   digitalWrite(5,LOW);
   digitalWrite(6,LOW);
   digitalWrite(7,LOW);
   digitalWrite(8,HIGH);
}

else if(left>127  && right<127 ) {
   digitalWrite(5,HIGH);
   digitalWrite(6,LOW);
   digitalWrite(7,LOW);
   digitalWrite(8,LOW);
}

else if (left>127  && right>127) {
 delay(100);

   if(t<10000)    // tiome calxculation for the 1 and 1
   {

if(left<127  && right>127 ) {
   digitalWrite(5,LOW);
   digitalWrite(6,LOW);
   digitalWrite(7,LOW);
   digitalWrite(8,HIGH);
}

else if(left>127  && right<127 ) {
   digitalWrite(5,HIGH);
   digitalWrite(6,LOW);
   digitalWrite(7,LOW);
   digitalWrite(8,LOW);
}



    
    
    }

}

else if(left<127  && right<127) {
  forwardMove();
}
int val = analogRead(A0);
Serial.println(val);
}

void leftTurn() {
  digitalWrite(5,LOW);
   digitalWrite(6,LOW);
   digitalWrite(7,LOW);
   digitalWrite(8,HIGH);
   delay(400);
}

void rightTurn() {
  digitalWrite(5,HIGH);
   digitalWrite(6,LOW);
   digitalWrite(7,LOW);
   digitalWrite(8,LOW);
   delay(400);
}

void forwardMove() {
  digitalWrite(5,HIGH);
   digitalWrite(6,LOW);
   digitalWrite(7,LOW);
   digitalWrite(8,HIGH);
}
