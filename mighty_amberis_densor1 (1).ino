



void setup()
{pinMode(3, INPUT); 
  pinMode(8, OUTPUT);
    pinMode(2, OUTPUT);
 pinMode(4, INPUT); 
 }

void loop()
{
boolean r1=digitalRead(3);
 if (r1==HIGH)
 {
  digitalWrite(8, HIGH);
  delay(20); 
  digitalWrite(8, LOW);
  
 }
 else
 {
     digitalWrite(8, LOW);
 }
boolean r2=digitalRead(4);
 if (r2==HIGH)
 {
  digitalWrite(2, HIGH);
  delay(40);
  digitalWrite(2, LOW);
  
 }
  else
  {
     digitalWrite(2, LOW);
  }
}