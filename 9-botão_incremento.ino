#define botao 2

int ValorBotao;

int incremento = 0;

 
void setup(){
    Serial.begin(9600);
    pinMode(botao, INPUT);
}

void loop(){
    ValorBotao = digitalRead(botao);
    ValorBotao2 = digitalRead(botao2);
  
  if(ValorBotao == HIGH){
    delay(200);
    
    if(0<=incremento){
    Serial.print("Leitura: ");
    Serial.println(incremento);
    delay(300);
    incremento++;
      
      if(incremento>9){
        incremento = 0;
      }
    }
  }
}
