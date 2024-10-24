//RESISTOR NA PROPRIA PLCA
//CTRL + U envia para a placa
void setup() {
  // put your setup code here, to run once:
pinMode (2, INPUT_PULLUP);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int estado = digitalRead(2);
Serial.println(estado);
}
