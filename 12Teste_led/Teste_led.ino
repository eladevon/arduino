//A lógica proposta, adiciona um a variável “x” e com isso, temos agora um “contador de apertos”.

//Desafio I: Coloque 3 LEDs em seu circuito e faça p seguinte prosseguimento:

//1 - Coloque um LED para acender quando o botão for pressionado 3x;
//2 - Coloque o próximo da sequência para acender quando o botão for pressionado 4x;
//3 - Coloque o último para acender quando o botão for pressionado 5X
//4 - Apague todos os LEDs, quando o botão for pressionado 10X.



int estado = 0;
//int contador = 0;
void setup() {
  // put your setup code here, to run once:
pinMode (5, INPUT_PULLUP);
pinMode (2, OUTPUT);
pinMode (3, OUTPUT);
pinMode (4, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
if(!digitalRead(5)){
  estado++;
  Serial.print("Quantidade de vezes pressionado: ");
  Serial.println(estado);
  delay(400);
}

if(estado==3){
   digitalWrite(2,1);
}

if(estado==4){
   digitalWrite(3,1);
}

if(estado==5){
   digitalWrite(4,1);
}

if(estado==10){
  digitalWrite(2,0);
  digitalWrite(3,0);
  digitalWrite(4,0);
}
//digitalWrite(3,LOW);
}


//if(!digitalRead(2)){
  //estado++;
  //Serial.print("Quantidade de vezes pressionado: ");
  //Serial.println(estado);
  //delay(400);
//}
//
//if(estado%3==0){
//  digitalWrite(3,1);
//}
//digitalWrite(3,LOW);
//}
