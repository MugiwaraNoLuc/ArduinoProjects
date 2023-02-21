const byte LED_azul = 13;
const byte LED_verde= 11;
const byte LED_amarelo = 9;
const byte BOTAO = 12;

byte valorBotao;
byte valorBotaoAnt;
boolean ledON = true; //false inicia com leds ligados, true inicia desligados

void setup(){
  pinMode(LED_azul, OUTPUT);
  pinMode(LED_verde, OUTPUT);
  pinMode(LED_amarelo, OUTPUT);
  pinMode(BOTAO, INPUT_PULLUP);
}

void loop(){
  valorBotao = digitalRead(BOTAO);
  if(valorBotao != valorBotaoAnt){
    if(valorBotao == 1){
      ledON = !ledON;
      digitalWrite(LED_azul, ledON);
      digitalWrite(LED_verde, ledON);
      digitalWrite(LED_amarelo, ledON);
    }
  }
valorBotaoAnt = valorBotao;
delay(10);
}