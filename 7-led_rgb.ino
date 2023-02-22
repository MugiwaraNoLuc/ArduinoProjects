#define vermelhoLED 7
#define azulLED 6
#define verdeLED 5

#define tempo 1500
#define tempo2 400

int i = 0;

void setup(){
  pinMode(vermelhoLED, OUTPUT);
  pinMode(azulLED, OUTPUT);
  pinMode(verdeLED, OUTPUT);

  digitalWrite(vermelhoLED, LOW);
  digitalWrite(azulLED, LOW);
  digitalWrite(verdeLED, LOW);
}

void loop(){
  digitalWrite(verdeLED, LOW);
  digitalWrite(vermelhoLED, HIGH);
  delay(tempo);

  digitalWrite(verdeLED, HIGH);
  delay(tempo);

  for (i = 0; i <= 2; i++){
  digitalWrite(vermelhoLED, LOW);
  digitalWrite(verdeLED, LOW);
  delay(tempo2);
  digitalWrite(vermelhoLED, HIGH);
  digitalWrite(verdeLED, HIGH);
  delay(tempo2);
  }

  digitalWrite(vermelhoLED, LOW);
  delay(2000);

  for (i = 0; i <= 2; i++){
  digitalWrite(verdeLED, LOW);
  delay(tempo2);
  digitalWrite(verdeLED, HIGH);
  delay(tempo2);
  }

}