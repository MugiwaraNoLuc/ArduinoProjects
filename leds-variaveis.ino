#define LED_AZUL_VERMELHO 3;
#define LED_VERDE_AMARELO 4;

void setup() {
  int tempo = 1000;
  int i;
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
}

void piscar(int led, int tempo){
digitalWrite(led, HIGH);
delay(tempo);
digitalWrite(led, LOW);
}

void loop() {
for ( int i=0; i<10; i++){
  if (i %2 == 0){
    piscar(4,1000);
    delay(500);
    continue;
  }
  else{
    piscar(3,1000);
    delay(500);
    continue;
  } 
 }   
}
