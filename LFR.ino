
//left sensor
int s1 = 0;
int s2 = 0;
int s3 = 0;
// midile sensor
int s4 = 0;
int s5 = 0;
//right sensors
int s6 = 0;
int s7 = 0;
int s8 = 0;
int spd = 75;
//motor pins
const int lmf = A5;
const int lmb = A4;
const int rmf = A3;
const int rmb = A2;
//speed
#define lpwm 10
#define rpwm 11

void setup() {
  // put your setup code here, to run once:
for(int i = 2;i<=9;i++){
pinMode(i, INPUT);
}
pinMode(A5, OUTPUT);
pinMode(A4, OUTPUT);
pinMode(A3, OUTPUT);
pinMode(A2, OUTPUT);
pinMode(lpwm, OUTPUT);
pinMode(rpwm, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
s1 = digitalRead(2);
s2 = digitalRead(3);
s3 = digitalRead(4);
s4 = digitalRead(5);
s5 = digitalRead(6);
s6 = digitalRead(7);
s7 = digitalRead(8);
s8 = digitalRead(9);
//Forward
if((s5 == 0 && s6 == 0 && s7 == 0 && s8 == 0 && s1 == 1 && s2 == 1 && s3 == 1 && s4 == 1) || (s5 == 0 && s6 == 0 && s7 == 0 && s8 == 0 && s1 == 1 && s2 == 1 && s3 == 1 && s4 == 0) || (s5 == 0 && s6 == 0 && s7 == 0 && s8 == 0 && s1 == 1 && s2 == 1 && s3 == 0 && s4 == 0) ){
  BR();
  delay(115);
  RC(); 
}
else if((s1 == 0 && s2 == 0 && s3 == 0 && s4 == 0 && s5 == 1 && s6 == 1 && s7 == 1 && s8 == 1) || (s1 == 0 && s2 == 0 && s3 == 0 && s4 == 0 && s5 == 0 && s6 == 1 && s7 == 1 && s8 == 1) || (s1 == 0 && s2 == 0 && s3 == 0 && s4 == 0 && s5 == 0 && s6 == 0 && s7 == 1 && s8 == 1)){
  BL();
  delay(115);
  LC();
}
else if( s4 == 0 || s5 == 0 && (s1 == 1 && s2 == 1 && s3 ==1 && s6 == 1 && s7 == 1 && s8 == 1)){
  Forward();
}

else if(s6 == 0 || s7 == 0 || s8 == 0 && (s5 == 1 && s1 == 1 && s2 == 1 && s3 == 1 && s4 == 1 )){
  Right();  
}
//Left
else if(s1 == 0 || s2 == 0 || s3 == 0 && (s4 == 1 && s6 == 1 && s7 == 1 && s8 == 1 && s5 == 1)){
  Left();
}
// if(s3 == 0 || s4 == 0 || s5 == 0 || s6 == 0 && (s1 == 1 && s8 == 1)){
//   Forward();
// }
else if(s1 == 0 && s2 == 0 && s3 == 0 && s4 == 0 && s5 == 0 && s6 == 0 && s7 == 0 && s8 == 0){
  Right();
}
else
{
analogWrite(lpwm, spd);
analogWrite(rpwm, spd);  
}
// if((s1 == 0 && s4 == 0 && s8 == 0) || (s1 == 0 && s5 == 0 && s8 == 0) || (s1 == 0 && s5 == 0 && s4 == 0 && s8 == 0)){
// delay(5);
// }
}

void Forward()
{
analogWrite(lpwm, spd);
analogWrite(rpwm, spd);
digitalWrite(rmf, HIGH);
digitalWrite(rmb, LOW);
digitalWrite(lmf, HIGH);
digitalWrite(lmb, LOW);
// delay(100);
}

void Right()
{
analogWrite(lpwm, spd + 50);
analogWrite(rpwm, spd + 50);
digitalWrite(rmf, LOW);
digitalWrite(rmb, LOW);
digitalWrite(lmf, HIGH);
digitalWrite(lmb, LOW);
// delay(100);
}
void RC()
{
analogWrite(lpwm, spd + 75);
analogWrite(rpwm, spd + 75);
digitalWrite(rmf, LOW);
digitalWrite(rmb, HIGH);
digitalWrite(lmf, HIGH);
digitalWrite(lmb, LOW);
// delay(100);
}

void Left()
{
analogWrite(lpwm, spd + 50);
analogWrite(rpwm, spd + 50);
digitalWrite(rmf, HIGH);
digitalWrite(rmb, LOW);
digitalWrite(lmf, LOW);
digitalWrite(lmb, LOW);
// delay(100);
}

void LC()
{
analogWrite(lpwm, spd + 75);
analogWrite(rpwm, spd + 75);
digitalWrite(rmf, HIGH);
digitalWrite(rmb, LOW);
digitalWrite(lmf, LOW);
digitalWrite(lmb, HIGH);
// delay(100);
}
void Stop()
{
analogWrite(lpwm, spd);
analogWrite(rpwm, spd);
digitalWrite(rmf, LOW);
digitalWrite(rmb, LOW);
digitalWrite(lmf, LOW);
digitalWrite(lmb, LOW);
// delay(20);
}
void BR()
{
analogWrite(lpwm, 100);
analogWrite(rpwm, 100);
digitalWrite(rmf, LOW);
digitalWrite(rmb, HIGH);
digitalWrite(lmf, HIGH);
digitalWrite(lmb, LOW);
// delay(20);
}
void BL()
{
analogWrite(lpwm, 100);
analogWrite(rpwm, 100);
digitalWrite(rmf, HIGH);
digitalWrite(rmb, LOW);
digitalWrite(lmf, LOW);
digitalWrite(lmb, HIGH);
// delay(20);
}
