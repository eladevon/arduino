//RESISTOR NA PROPRIA PLACA com LED e CONTADOR
int estado;
int contador = 0;
void setup() {
  // put your setup code here, to run once:
pinMode (2, INPUT_PULLUP);
pinMode (3, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:



if(!digitalRead(2)){
  estado++;
  Serial.print("Quantidade de vezes pressionado: ");
  Serial.println(estado);
  delay(400);
}
//
if(estado%3==0){
  digitalWrite(3,1);
}
digitalWrite(3,LOW);
}
