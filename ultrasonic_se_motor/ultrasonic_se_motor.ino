const int trig=8;
int echo=9;

void setup()
{
  Serial.begin(9600);
  pinMode(echo,INPUT);
  pinMode(trig,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(6,OUTPUT);
  }

  void loop() {
    long duration,cm;
    digitalWrite(trig,LOW);
    delayMicroseconds(10);
    digitalWrite(trig,HIGH);
    delayMicroseconds(10);
    digitalWrite(trig,LOW);
    
    duration= pulseIn(echo,HIGH);

    cm=(duration/29)/2;
    int out;
    if(cm > 40)
    out=255;
    else
    out = map(cm,0,40,0,255);
    Serial.print(duration);
    Serial.println("    microseconds    ");
    Serial.print(cm);
    Serial.print("    cm    ");
    Serial.println("    motor   ");
    Serial.print(out);
    {
      analogWrite(3,out);
      digitalWrite(6,LOW);
      }
    }
