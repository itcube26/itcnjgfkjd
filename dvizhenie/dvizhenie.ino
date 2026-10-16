// M1_Speed управляет скоростью вращения первого двигателя.
// M1_dir управляет направлением вращения первого двигателя.
// M2_Speed и M2_dir – скоростью и направлением вращения
// второго двигателя, соответственно.

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

}

void loop() {
 stop ();
} 


void vpered (){
 digitalWrite(M1_dir, 1);
 
analogWrite(M1_Speed, 150);

digitalWrite(M2_dir, 0);

analogWrite(M2_Speed, 150);




}

void nazad (){
 digitalWrite(M1_dir, 0);
 
analogWrite(M1_Speed, 150);

digitalWrite(M2_dir, 1);

analogWrite(M2_Speed, 150);


}
void leva (){
 digitalWrite(M1_dir, 0);
 
analogWrite(M1_Speed, 150);

digitalWrite(M2_dir, 0);

analogWrite(M2_Speed, 150);


}

void stop (){
digitalWrite(M1_dir, 0);
 
analogWrite(M1_Speed, 0);

digitalWrite(M2_dir, 0);

analogWrite(M2_Speed, 0);


}
