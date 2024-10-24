int taxa;


void setup() {
  // put your setup code here, to run once:
pinMode (A0, INPUT);
pinMode (13, OUTPUT);
pinMode (4, OUTPUT);
//pin = pino
// mode = modo 
//A0 eh a porta analogica 
//input eh dizendo que vai entrar
Serial.begin(9600);
//abre janela para acompanhar uma rotina de leitura
}

void loop() {
  // put your main code here, to run repeatedly:
  //variavel recebe o que ta no sensor
taxa = analogRead(A0);
//ler a variavel
Serial.println(taxa);


if (taxa <=940){
  digitalWrite(13,0);
  digitalWrite(4,1);}
else{
 digitalWrite(13,1);
 digitalWrite(4,0);
}


}
