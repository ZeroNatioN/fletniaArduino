#include <Arduino.h>

#define rurka1 13
#define rurka2 8
#define rurka3z 9
#define rurka3c 10
#define rurka4 7
#define rurka5 6
#define rurka6 5
#define rurka7 4
#define rurka8 3
#define przycisk 12

void setup() {
  // put your setup code here, to run once:
  pinMode(12,INPUT_PULLUP);
  pinMode(rurka1, OUTPUT);
  pinMode(rurka2,OUTPUT);
  pinMode(rurka3z,OUTPUT);
  pinMode(rurka3c,OUTPUT);
  pinMode(rurka4,OUTPUT);
  pinMode(rurka5,OUTPUT);
  pinMode(rurka6,OUTPUT);
  pinMode(rurka7,OUTPUT);
  pinMode(rurka8,OUTPUT);

  digitalWrite(rurka1, HIGH);
  digitalWrite(rurka2,HIGH);
  digitalWrite(rurka3z,HIGH);
  digitalWrite(rurka3c,HIGH);
  digitalWrite(rurka4,HIGH);
  digitalWrite(rurka5,HIGH);
  digitalWrite(rurka6,HIGH);
  digitalWrite(rurka7,HIGH);
  digitalWrite(rurka8,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  while(digitalRead(przycisk) == HIGH){}

  sekwencja2();

  while(digitalRead(przycisk) == HIGH){}

  for (int i=0; i <= 22; i++){
      zapalRurka8(130);
      zapalRurka7(130);
      zapalRurka6(130);
      zapalRurka5(130);
      zapalRurka4(130);
      zapalRurka3(130);
      zapalRurka2(130);
      zapalRurka1(130);
      zapalRurka2(130);
      zapalRurka3(130);
      zapalRurka4(130);
      zapalRurka5(130);
      zapalRurka6(130);
      zapalRurka7(130);
   }

  
}


void zapalRurka1(int czasSwiecenia){
  digitalWrite(rurka1,LOW);
  delay(czasSwiecenia);
  digitalWrite(rurka1,HIGH);
  //safhas

}

void zapalRurka2(int czasSwiecenia){
  digitalWrite(rurka2,LOW);
  delay(czasSwiecenia);
  digitalWrite(rurka2,HIGH);
}

void zapalRurka3(int czasSwiecenia){
  analogWrite(rurka3z,100);
  analogWrite(rurka3c,0);
  delay(czasSwiecenia);
  digitalWrite(rurka3z,HIGH);
  digitalWrite(rurka3c,HIGH);
}

void zapalRurka4(int czasSwiecenia){
  digitalWrite(rurka4,LOW);
  delay(czasSwiecenia);
  digitalWrite(rurka4,HIGH);
}

void zapalRurka5(int czasSwiecenia){
  digitalWrite(rurka5,LOW);
  delay(czasSwiecenia);
  digitalWrite(rurka5,HIGH);
}

void zapalRurka6(int czasSwiecenia){
  digitalWrite(rurka6,LOW);
  delay(czasSwiecenia);
  digitalWrite(rurka6,HIGH);
}

void zapalRurka7(int czasSwiecenia){
  digitalWrite(rurka7,LOW);  
  delay(czasSwiecenia);
  digitalWrite(rurka7,HIGH);  
}

void zapalRurka8(int czasSwiecenia){
  digitalWrite(rurka8,LOW);
  delay(czasSwiecenia);
  digitalWrite(rurka8,HIGH);
}

void zapalRurka7i8(int czasSwiecenia){
  digitalWrite(rurka7,LOW);  
  digitalWrite(rurka8,LOW);
  delay(czasSwiecenia);
  digitalWrite(rurka7,HIGH);  
  digitalWrite(rurka8,HIGH);
}

void test(){
  zapalRurka1(480);
  zapalRurka2(480);
  zapalRurka3(480);
  zapalRurka4(480);
  zapalRurka5(480);
  zapalRurka6(480);
  zapalRurka7(480);
  zapalRurka8(480); 
}

void sekwencja(){
  delay(640);//opóźnienie po wciśnięciu przycisku
  zapalRurka2(130);
  zapalRurka2(130);
  zapalRurka2(260);
  zapalRurka3(520);
  zapalRurka2(1040);
  zapalRurka7(130);
  zapalRurka7(130);
  zapalRurka7(260);
  zapalRurka5(520);
  zapalRurka1(1040);
  zapalRurka7(130);
  zapalRurka7(130);
  zapalRurka7(260);
  zapalRurka5(520);
  zapalRurka2(1300);
  delay(260);
  zapalRurka5(260);
  zapalRurka5(260);
  zapalRurka5(520);
  zapalRurka4(520);
  zapalRurka7(130);
  zapalRurka7(130);
  zapalRurka7(260);
  zapalRurka5(520);
  zapalRurka5(1040);
  zapalRurka7(130);
  zapalRurka7(130);
  zapalRurka7(260);
  zapalRurka5(520);
  zapalRurka5(1040);
  zapalRurka5(260);
  zapalRurka5(260);
  zapalRurka6(520);
  zapalRurka7(260);
  zapalRurka6(260);
  zapalRurka7(780);
  
  // drugi raz
  
  zapalRurka2(130);
  zapalRurka2(130);
  zapalRurka2(260);
  zapalRurka3(520);
  zapalRurka2(1040);
  zapalRurka7(130);
  zapalRurka7(130);
  zapalRurka7(260);
  zapalRurka5(520);
  zapalRurka1(1040);
  zapalRurka7(130);
  zapalRurka7(130);
  zapalRurka7(260);
  zapalRurka5(520);
  zapalRurka2(1300);
  delay(260);
  zapalRurka5(260);
  zapalRurka5(260);
  zapalRurka5(520);
  zapalRurka4(520);
  zapalRurka7(130);
  zapalRurka7(130);
  zapalRurka7(260);
  zapalRurka5(520);
  zapalRurka5(1040);
  zapalRurka7(130);
  zapalRurka7(130);
  zapalRurka7(260);
  zapalRurka5(520);
  zapalRurka5(1040);
  zapalRurka5(260);
  zapalRurka5(260);
  zapalRurka6(520);
  zapalRurka7(260);
  zapalRurka6(260);
  zapalRurka7(780);

  delay(520);
  zapalRurka8(65);
  zapalRurka7(65);
  zapalRurka6(65);
  zapalRurka5(65);
  zapalRurka4(65);
  zapalRurka3(65);
  zapalRurka2(65);
  zapalRurka1(65);
}

void sekwencja2(){
  delay(640);//opóźnienie po wciśnięciu przycisku
  zapalRurka2(120);
  delay(20);
  zapalRurka2(120);
  zapalRurka2(260);
  zapalRurka3(520);
  zapalRurka2(1040);
  zapalRurka7(120);
  delay(20);
  zapalRurka7(120);
  zapalRurka7(260);
  zapalRurka5(520);
  zapalRurka1(1040);
  zapalRurka7(120);
  delay(20);
  zapalRurka7(120);
  zapalRurka7(260);
  zapalRurka5(520);
  zapalRurka2(1300);
  delay(260);
  zapalRurka5(240);
  delay(40);
  zapalRurka5(240);
  zapalRurka5(520);
  zapalRurka4(520);
  zapalRurka7(120);
  delay(20);
  zapalRurka7(120);
  zapalRurka7(260);
  zapalRurka5(500);
  delay(20);
  zapalRurka5(1040);
  zapalRurka7(120);
  delay(20);
  zapalRurka7(120);
  zapalRurka7(260);
  zapalRurka5(500);
  delay(20);
  zapalRurka5(1000);
  delay(40);
  zapalRurka5(240);
  delay(40);
  zapalRurka5(240);
  zapalRurka6(520);
  zapalRurka7(260);
  zapalRurka6(260);
  zapalRurka7(780);
  
  // drugi raz
  
  zapalRurka2(120);
  delay(20);
  zapalRurka2(120);
  zapalRurka2(260);
  zapalRurka3(520);
  zapalRurka2(1040);
  zapalRurka7(120);
  delay(20);
  zapalRurka7(120);
  zapalRurka7(260);
  zapalRurka5(520);
  zapalRurka1(1040);
  zapalRurka7(120);
  delay(20);
  zapalRurka7(120);
  zapalRurka7(260);
  zapalRurka5(520);
  zapalRurka2(1300);
  delay(260);
  zapalRurka5(240);
  delay(40);
  zapalRurka5(240);
  zapalRurka5(520);
  zapalRurka4(520);
  zapalRurka7(120);
  delay(20);
  zapalRurka7(120);
  zapalRurka7(260);
  zapalRurka5(500);
  delay(20);
  zapalRurka5(1040);
  zapalRurka7(120);
  delay(20);
  zapalRurka7(120);
  zapalRurka7(260);
  zapalRurka5(500);
  delay(20);
  zapalRurka5(1000);
  delay(40);
  zapalRurka5(240);
  delay(40);
  zapalRurka5(240);
  zapalRurka6(520);
  zapalRurka7(260);
  zapalRurka6(260);
  zapalRurka7(780);

  delay(520);
  zapalRurka8(65);
  zapalRurka7(65);
  zapalRurka6(65);
  zapalRurka5(65);
  zapalRurka4(65);
  zapalRurka3(65);
  zapalRurka2(65);
  zapalRurka1(65);
}

void sekwencja3(){
  delay(640);//opóźnienie po wciśnięciu przycisku
  zapalRurka2(120);
  delay(20);
  zapalRurka2(120);
  zapalRurka2(260);
  zapalRurka3(520);
  zapalRurka2(1040);
  zapalRurka7(120);
  delay(20);
  zapalRurka7(120);
  zapalRurka7(260);
  zapalRurka5(520);
  zapalRurka1(1040);
  zapalRurka7(120);
  delay(20);
  zapalRurka7(120);
  zapalRurka7(260);
  zapalRurka5(520);
  zapalRurka2(1300);
  delay(260);
  zapalRurka5(240);
  delay(40);
  zapalRurka5(240);
  zapalRurka5(520);
  zapalRurka4(520);
  zapalRurka7(120);
  delay(20);
  zapalRurka7(120);
  zapalRurka7(260);
  zapalRurka5(500);
  delay(20);
  zapalRurka5(1040);
  zapalRurka7(120);
  delay(20);
  zapalRurka7(120);
  zapalRurka7(260);
  zapalRurka5(500);
  delay(20);
  zapalRurka5(1000);
  delay(40);
  zapalRurka5(240);
  delay(40);
  zapalRurka5(240);
  zapalRurka6(520);
  zapalRurka7(260);
  zapalRurka6(260);
  zapalRurka7(780);
  
  // drugi raz
  
  zapalRurka2(120);
  delay(20);
  zapalRurka2(120);
  zapalRurka2(260);
  zapalRurka3(520);
  zapalRurka2(1040);
  zapalRurka7(120);
  delay(20);
  zapalRurka7(120);
  zapalRurka7(260);
  zapalRurka5(520);
  zapalRurka1(1040);
  zapalRurka7(120);
  delay(20);
  zapalRurka7(120);
  zapalRurka7(260);
  zapalRurka5(520);
  zapalRurka2(1300);
  delay(260);
  zapalRurka5(240);
  delay(40);
  zapalRurka5(240);
  zapalRurka5(520);
  zapalRurka4(520);
  zapalRurka7(120);
  delay(20);
  zapalRurka7(120);
  zapalRurka7(260);
  zapalRurka5(500);
  delay(20);
  zapalRurka5(1040);
  zapalRurka7(120);
  delay(20);
  zapalRurka7(120);
  zapalRurka7(260);
  zapalRurka5(500);
  delay(20);
  zapalRurka5(1000);
  delay(40);
  zapalRurka5(240);
  delay(40);
  zapalRurka5(240);
  zapalRurka6(520);
  zapalRurka7(260);
  zapalRurka6(260);
  zapalRurka7(780);

  delay(520);
  zapalRurka8(65);
  zapalRurka7(65);
  zapalRurka6(65);
  zapalRurka5(65);
  zapalRurka4(65);
  zapalRurka3(65);
  zapalRurka2(65);
  zapalRurka1(65);
  //niepotrzebny komentarz
}

