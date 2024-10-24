//RESISTOR NA PROPRIA PLACA com LED
//CTRL + U envia para a placa
void setup() {
  // put your setup code here, to run once:
pinMode (2, INPUT_PULLUP);
pinMode (3, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int estado = digitalRead(2);
Serial.println(estado);

if(estado==0){
  digitalWrite(3,1);
}
else{
  digitalWrite(3,0);
}
}
