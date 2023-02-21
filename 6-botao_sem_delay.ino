const byte LED = 13;
const byte BOTAO = 12;

byte valorBotao;
byte valorBotaoAnt;
boolean ledON = false;

byte estadoBotao;
unsigned long horaClick;
unsigned long tempoBounce = 10; //10 milissegundos, para comparação ao tempo de click

void setup(){
  pinMode(LED, OUTPUT);
  pinMode(BOTAO, INPUT_PULLUP);
}

void loop(){
  valorBotao = digitalRead(BOTAO);
  if(valorBotao != valorBotaoAnt)
    horaClick = millis(); //hora do sistema
   
    if ((millis() - horaClick) > tempoBounce){
      if (valorBotao != estadoBotao){
        estadoBotao = valorBotao;
    	if(valorBotao){
      		ledON = !ledON;
      		digitalWrite(LED, ledON);
        }
      }
    }
valorBotaoAnt = valorBotao;
}
