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

//led vermelho 5S
digitalWrite(13, 1);
digitalWrite(12, 0);
digitalWrite(11, 0);
delay(5000);

//LED AMARELO 4S PISCA 3X 
digitalWrite(13, 0);
digitalWrite(12, 1);
digitalWrite(11, 0);
delay(4000);
digitalWrite(12, 0);
delay(500);
digitalWrite(12, 1);
delay(500);
digitalWrite(12, 0);
delay(500);
digitalWrite(12, 1);
delay(500);
digitalWrite(12, 0);
delay(500);
digitalWrite(12, 1);
delay(500);
digitalWrite(12, 0);
delay(500);




digitalWrite(13, 0);
digitalWrite(12, 0);
digitalWrite(11, 1);
delay(5000);
digitalWrite(11, 0);


}
