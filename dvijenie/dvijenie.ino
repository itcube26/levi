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
vpravo();

}

void vpered(){
   digitalWrite(M1_dir, 1);
  analogWrite(M1_Speed, 60);
  digitalWrite(M2_dir, 1);
  analogWrite(M2_Speed, 60);

}

void nazad(){

digitalWrite(M1_dir, 0);
analogWrite(M1_Speed, 60);
digitalWrite(M2_dir, 0);
analogWrite(M2_Speed, 60);
}

void vpravo(){

digitalWrite(M1_dir, 0);
analogWrite(M1_Speed, 60);
digitalWrite(M2_dir, 1);
analogWrite(M2_Speed, 60);

}

void vlevo(){

digitalWrite(M1_dir, 1);
analogWrite(M1_Speed, 60);
digitalWrite(M2_dir, 0);
analogWrite(M2_Speed, 60);
}
  
