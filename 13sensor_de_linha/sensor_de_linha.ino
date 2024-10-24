//Sensor LED

void setup() {
  // put your setup code here, to run once:
pinMode (2, INPUT);
pinMode (3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

int luz=digitalRead(2);

if(luz==1){
 digitalWrite(3,1);
}
else{
   digitalWrite(3,0);
}
}
