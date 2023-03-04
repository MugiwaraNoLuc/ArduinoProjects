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


/*
"""
Atualização do código, fazendo o incremento do botão por meio de função
"""
#define botao 2
#define botao2 4

int ValorBotao;
int ValorBotao2;

int incremento = 0;
int incremento2 = 0;

void botao_leitura(){
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
 
void setup(){
    Serial.begin(9600);
    pinMode(botao, INPUT);
}

void loop(){
    ValorBotao = digitalRead(botao);
    ValorBotao2 = digitalRead(botao2);
  botao_leitura();
}
*/