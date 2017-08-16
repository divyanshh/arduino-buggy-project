
int s1 = 0;
int s2 = 0;

void setup() 
{
  

  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT); 
  pinMode(A0,INPUT);
  pinMode(A2,INPUT);
  Serial.begin(9600);
}

void loop() {
  s1 = analogRead(A0);
  s2 = analogRead(A2);
  int x= map(s1,0,600,0,1);
  int y= map(s2,0,600,0,1);
  Serial.println(s1);
  Serial.println(s2);


  if(s1==0 && s2==0)     // Move Forward
  {
    digitalWrite(5, HIGH);
    digitalWrite(6, LOW);
    digitalWrite(8, HIGH);
    digitalWrite(7, LOW);
  }
  
  

else if(s1==0 && s2>0)     // Move r
  {
    digitalWrite(5, HIGH);
    digitalWrite(6, LOW);
    digitalWrite(8, LOW);
    digitalWrite(7, LOW);
  }
  
else if(s1>0 && s2==0)     // Move l
  {
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(8, HIGH);
    digitalWrite(7, LOW);
  }
  
}
