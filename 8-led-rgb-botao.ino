"""

Código em que são definidos 3 botões, um azul, um vermelho e um branco. Caso o botão azul seja pressionado primeiro, este fica travado
Caso o vermelho seja pressionado primeiro, o mesmo acontece
Para destravar os botões é então pressionado o botão branco

"""
#define vermelhoLED 2
#define azulLED 3
#define verdeLED 4

#define botao 7
#define botaoazul 8
#define botaovermelho 9

int valorbotao = 0;
int valorbotaoVER = 0;
int valorbotaoAZUL = 0;

boolean LED_ON = false;
boolean LED_branco = false;

void setup(){
  pinMode(vermelhoLED, OUTPUT);
  pinMode(azulLED, OUTPUT);
  pinMode(verdeLED, OUTPUT);

  digitalWrite(vermelhoLED, LOW);
  digitalWrite(azulLED, LOW);
  digitalWrite(verdeLED, LOW);
}

void loop(){
  valorbotaoVER = digitalRead(botaovermelho);
  valorbotaoAZUL = digitalRead(botaoazul);
  valorbotao = digitalRead(botao);

  if (valorbotaoAZUL == HIGH && LED_ON == false){
    LED_ON = true;
    digitalWrite(azulLED, HIGH);
  }

if (valorbotaoVER == HIGH && LED_ON == false){
    LED_ON = true;
    digitalWrite(vermelhoLED, HIGH);
  }

if (valorbotao == HIGH && LED_branco == false){
    LED_ON = false;
    LED_branco = true;
    digitalWrite(vermelhoLED, HIGH);
    digitalWrite(azulLED, HIGH);
    digitalWrite(verdeLED, HIGH);
    delay(200);
    digitalWrite(vermelhoLED, LOW);
    digitalWrite(azulLED, LOW);
    digitalWrite(verdeLED, LOW);
    delay(200);
  }
  else if(valorbotao == LOW && LED_branco == true){
  LED_branco = false;
  }

}