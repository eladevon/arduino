void setup() {
  // put your setup code here, to run once:
pinMode (13, OUTPUT);
pinMode (12, OUTPUT);
pinMode (11, OUTPUT);
//pin = pino
// mode = modo 
//13 eh a porta que vamos conectar o led e 
//output eh dizendo que vai sair
}

void loop() {
  // put your main code here, to run repeatedly:

//led vermelho PISCA 3X
digitalWrite(13, 1);
delay(500);
digitalWrite(13, 0);
delay(500);
digitalWrite(13, 1);
delay(500);
digitalWrite(13, 0);
delay(500);
digitalWrite(13,1);
delay(500);
digitalWrite(13, 0);

//led AMARELO PISCA 2X
digitalWrite(12, 1);
delay(500);
digitalWrite(12, 0);
delay(500);
digitalWrite(12, 1);
delay(500);
digitalWrite(12, 0);

//led vermelho PISCA 1X
digitalWrite(11, 1);
delay(500);
digitalWrite(11, 0);
delay(500);



}
