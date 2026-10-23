#include <GyverPing.h>

#define HC_TRIG 8
#define HC_ECHO 9

GPingSync sonar(HC_TRIG, HC_ECHO);
#define M1_dir 45
#define M1_Speed 44
#define M2_dir 47
#define M2_Speed 46

void setup() {

// Объявление пинов, работающих на выход.
pinMode(M1_dir, OUTPUT);
pinMode(M1_Speed, OUTPUT);

pinMode(M2_dir, OUTPUT);
pinMode(M2_Speed, OUTPUT);

    Serial.begin(115200);
}

void loop() {
    // сделать измерение
    sonar.ping();

    // открой плоттер для вывода графика
    Serial.println(sonar.getFiltered());       // "сырое" значение

    if (sonar.getFiltered() < 250){
     obezd();
    } else {
      Serial.println("Еду вперед");
    vpered();
    }

    
    delay(50);
}

void obezd(){
  Serial.println("Начал объезд");
  digitalWrite(13, 1);
  vpravo();
  delay(2000);
  vpered();
  delay(2000);
  leva();
  delay(2000);
  vpered();
  delay(3700);
  leva();
  delay(2000);
   vpered();
  delay(2000);
  leva();
  delay(2000);
  digitalWrite(13, 0);
  Serial.println("Закончил объезд");
}

void vpered (){
 digitalWrite(M1_dir, 1);
 
analogWrite(M1_Speed, 25);

digitalWrite(M2_dir, 1);

analogWrite(M2_Speed, 25);




}

void nazad (){
 digitalWrite(M1_dir, 0);
 
analogWrite(M1_Speed, 25);

digitalWrite(M2_dir, 0);

analogWrite(M2_Speed, 25);


}
void leva (){
 digitalWrite(M1_dir, 1);
 
analogWrite(M1_Speed, 25);

digitalWrite(M2_dir, 0);

analogWrite(M2_Speed, 25);


}

void stop (){
digitalWrite(M1_dir, 0);
 
analogWrite(M1_Speed, 0);

digitalWrite(M2_dir, 0);

analogWrite(M2_Speed, 0);


}

void vpravo (){
 digitalWrite(M1_dir, 0);
 
analogWrite(M1_Speed, 25);

digitalWrite(M2_dir, 1);

analogWrite(M2_Speed, 25);


}