void setup() {
  // put your setup code here, to run once:
pinMode (13, OUTPUT); 
//pin = pino
// mode = modo 
//13 eh a porta que vamos conectar o led e 
//output eh dizendo que vai sair
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(13, 1);
//digital = porta
//write = intrucao
//13 = porta
//1 = ligado
delay(1000);
////delay = intervalode tempo
// 1000 = 1 segundo
digitalWrite(13, 0);
// 0 = desligado
delay(1000);
}
