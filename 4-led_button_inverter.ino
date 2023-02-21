const byte LED = 13;
const byte BOTAO = 12;
byte valorBotao;
byte valorBotaoAnt;
boolean ledON = false;

void setup(){
  pinMode(LED, OUTPUT);
  pinMode(BOTAO, INPUT);
}

void loop(){
  valorBotao = digitalRead(BOTAO);
  if(valorBotao != valorBotaoAnt){
    if(valorBotao == 1){
      ledON = !ledON;
      digitalWrite(LED, ledON);
    }
  }
valorBotaoAnt = valorBotao;
delay(10);
}