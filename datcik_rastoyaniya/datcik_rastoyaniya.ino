#include <GyverPing.h>

#define HC_TRIG 8
#define HC_ECHO 9

GPingSync sonar(HC_TRIG, HC_ECHO);

void setup() {
    Serial.begin(115200);
}

void loop() {
    // сделать измерение
    sonar.ping();

    // открой плоттер для вывода графика
    Serial.println(sonar.getRaw());       // "сырое" значение

    if (sonar.getRaw() > 250){
      digitalWrite(13, 1);
    } else {
    digitalWrite(13, 0);
    }

    
    delay(50);
}

