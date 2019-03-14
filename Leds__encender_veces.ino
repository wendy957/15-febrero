int ledR = 13;
int ledG = 12;
int t1;
int t2;
void setup() {
Serial.begin(9600);
Serial.println("¿Cuántas veces el encendido del led rojo?");
while(Serial.available()==0){
  }
t1 = Serial.parseInt();
Serial.end();

Serial.begin(9600);
Serial.println("¿Cuántas veces el encendido del led verde?");
while(Serial.available()==0){
  }
t2 = Serial.parseInt();
Serial.end();

pinMode(ledR,OUTPUT);
pinMode(ledG,OUTPUT);
}

void loop() {
for (int i = 0; i <t1; i++){

digitalWrite(ledR,HIGH);
delay(500);
digitalWrite(ledR,LOW);
delay(500);
}
for (int i = 0; i <t2; i++){
digitalWrite(ledG,HIGH);
delay(500);
digitalWrite(ledG,LOW);
delay(500);
}
}
