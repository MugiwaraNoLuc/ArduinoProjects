#define botao 2
#define botao2 4
#define botao3 6
#define vermelhoLED 8
#define verdeLED 10
#define buzzer 12


int senha = 30;
/*
2(dígito de segurança) * 6(número certo) incremento 1
6 * 3(número certo) no incremento2 
SENHA = 6 e 3, respectivamente
No monitor serial = 5 e 2
*/

int ValorBotao;
int ValorBotao2;
int Start;

int incremento = 0;
int incremento2 = 0;

void botao_leitura(int button){
  if(button == HIGH){
    delay(200);

  if(0<=incremento){
    Serial.print("Leitura 1: ");
    Serial.println(incremento);
    delay(300);
    incremento++;
      
  if(incremento>9){
     incremento = 0;
      }
    }
  }
}

void botao_leitura2(int button){
  if(button == HIGH){
    delay(200);

  if(0<=incremento2){
    Serial.print("Leitura 2: ");
    Serial.println(incremento2);
    delay(300);
    incremento2++;
      
  if(incremento2>9){
    incremento2 = 0;
      }
    }
  }
}

void setup(){
  Serial.begin(9600);
  pinMode(botao, INPUT);
  digitalWrite(vermelhoLED, OUTPUT);;
  digitalWrite(verdeLED, OUTPUT);
  
  pinMode(buzzer, OUTPUT);
  
  digitalWrite(vermelhoLED, LOW);;
  digitalWrite(verdeLED, LOW);

}

void loop(){
  ValorBotao = digitalRead(botao);
  ValorBotao2 = digitalRead(botao2);
  Start = digitalRead(botao3);
  
  botao_leitura(ValorBotao);
  botao_leitura2(ValorBotao2);
  
  bool tipoBuzzer = 1;

  if(Start == HIGH){
    delay(200);
    Serial.println(" ");
    Serial.print("Testando ...");
      
    if(senha == (2 * incremento + 6 * incremento2)){
      Serial.println("Acertou");
        digitalWrite(verdeLED, HIGH);
        tone(buzzer, 2000, 500);
  		delay(1000);
        digitalWrite(verdeLED, LOW);
    	delay(500);      
    }
	
    else{
      Serial.println("Errou");
        digitalWrite(vermelhoLED, HIGH);
        tone(buzzer, 200, 1000);
  		delay(1000);
        digitalWrite(vermelhoLED, LOW); 
    }
  }
}

