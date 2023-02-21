int LED_green = 5;
int LED_yellow = 3;
int LED_red = 1;
int segundos = 1000;
//também pode utilizar com #define

void setup() {
 pinMode(LED_green, OUTPUT);
 pinMode(LED_yellow, OUTPUT);
 pinMode(LED_red, OUTPUT);

}

void loop() {

digitalWrite(LED_green, HIGH);
delay(segundos);
digitalWrite(LED_green, LOW);

digitalWrite(LED_yellow, HIGH);
delay(segundos);
digitalWrite(LED_yellow, LOW);

digitalWrite(LED_red, HIGH);
delay(segundos);
digitalWrite(LED_red, LOW);

}
