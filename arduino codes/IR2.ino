int analog_ip = A0;   // select the input pin Photo Diode.
int inputVal = 0;     // to store photo diode input
int led_op=12;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);  
  pinMode(analog_ip,INPUT);
  pinMode(led_op,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
    inputVal = analogRead(analog_ip); // Reading and storing analog input value.
    if(inputVal>512)
    {
      digitalWrite(led_op,HIGH);
      Serial.print("Input Value:");
      Serial.print(inputVal);       // Printing Analog input value of Photo Diode.
      Serial.print("\n");           // moving to new line
    }
    else
      digitalWrite(led_op,LOW);
    delay(500);                   // Waiting for a while.
 }
