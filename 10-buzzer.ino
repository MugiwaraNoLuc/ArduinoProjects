#define buzzer 2

void setup()
{
  pinMode(buzzer, OUTPUT);
}

void loop()
{
  bool tipoBuzzer = 0;
  
  if(tipoBuzzer == 1){
    digitalWrite(buzzer, HIGH);
     delay(500);
    digitalWrite(buzzer, LOW);
    delay(500);
}
  else {
    tone(buzzer, 100);
    delay(1000);
    noTone(buzzer);
    delay(500);
 }
}