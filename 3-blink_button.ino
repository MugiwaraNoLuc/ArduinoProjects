const byte LED = 13;
const byte BOTAO = 12;

byte valorBotao;

void setup(){
  pinMode(LED, OUTPUT);
  pinMode(BOTAO, INPUT);
}

void loop(){
  valorBotao = digitalRead(BOTAO);
  digitalWrite(LED, valorBotao);
}
