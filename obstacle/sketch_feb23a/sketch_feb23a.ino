const int trigPin = 13;
const int echoPin = 12;
const int rightf = 5;
const int rightb = 6;
const int leftf = 8;
const int leftb = 7;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode (rightf, OUTPUT);
  pinMode (rightb, OUTPUT);
  pinMode (leftf, OUTPUT);
  pinMode (leftb, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
 digitalWrite(trigPin,LOW);
 delay(2);
 digitalWrite(trigPin,HIGH);
 delay(10);
 digitalWrite(trigPin,LOW);
 double duration = pulseIn(echoPin,HIGH);
 double distance = duration/2 * 0.0135039 ;

 if(distance < 10) {
  digitalWrite(rightf,LOW);
  digitalWrite(rightb,LOW);
  digitalWrite(leftf,HIGH);
  digitalWrite(leftb,LOW);
 }

 else {
  digitalWrite(rightf,HIGH);
  digitalWrite(rightb,LOW);
  digitalWrite(leftf,HIGH);
  digitalWrite(leftb,LOW);
 }

}
