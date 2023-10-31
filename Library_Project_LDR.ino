//LDR TO A0 
//RELAY TO 12
//LCD SCREEN SCL A5
//LCD SCREEN SDA A4
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
int abc;
int bca;
int x;
int y;
int bac;
int f;
int sd;
int ds;
int ldrPin = A0; 
void setup() {
Serial.begin(9600);
Serial.println("Welcome To The ARK");
Serial.println("This Project Is Made By Of BMCMI 'Albert Shijoy , Aswath Aravind'");
Serial.println("In This Project LDR Should be kept on the Screen, Hence It can Count The Entries");
pinMode(13, OUTPUT);
pinMode(8, OUTPUT);
pinMode(4, OUTPUT);
pinMode(7, OUTPUT);
analogWrite(7,LOW);
analogWrite(4,LOW);
lcd.clear();
lcd.setCursor(2,0);
lcd.print("Welcome To ");
lcd.setCursor(0,1);
lcd.print("....The ARK.... ");
delay(799);
lcd.setCursor(0,1);
lcd.print("....The ARK.... ");
delay(800);
lcd.setCursor(0,1);
lcd.print("....The ARK....  ");
delay(800);
lcd.setCursor(0,1);
lcd.print(" ...The ARK...   ");
delay(800);
lcd.setCursor(0,1);
lcd.print("  ..The ARK..   ");
delay(800);
lcd.setCursor(0,1);
lcd.print("   .The ARK.    ");
delay(800);
lcd.setCursor(0,1);
lcd.print("    The ARK     ");
delay(800);
lcd.clear();
bca=0;
y=5;



}

void loop() {
abc = analogRead(ldrPin);
delay(900);
 y=y+1;
Serial.print("Sensor:");
Serial.println(ds);
Serial.print("Today's Number Of Users : ");
Serial.println(f);
delay(900);
int xsx= analogRead(ldrPin);
if(abc==xsx){
digitalWrite(8 ,LOW);
bca=bca+1;
}
else{
  digitalWrite(8 ,HIGH);
  bca=0;
  sd=0;
  delay(100);
ds=0;
  }
if(bca==5){
digitalWrite(8,LOW);
digitalWrite(7,HIGH);
sd=1;
f=f+1;
}

if(sd==1){
ds=ds+1;
}
if(ds==2){
digitalWrite(7,LOW);

}

if(y==60){
x=1;
y=0;
}

if(y==5){
  x=0;
}

if(y==3){
  x=2;
}
if(x==0){
  lcd.clear();
lcd.setCursor(0,0);
lcd.print(" Today's Entry:");
lcd.setCursor(7,1); 
lcd.print(f/1);
lcd.setCursor(16,2);
}
if(x==1){
    lcd.clear();
lcd.setCursor(0,0);
lcd.print("Powered By:");
lcd.setCursor(3,1); 
lcd.print("Albert Shijoy");
lcd.setCursor(16,2);
}
if(x==2){
    lcd.clear();
lcd.setCursor(0,0);
lcd.print("Powered By:");
lcd.setCursor(2,1); 
lcd.print("Aswath Aravind");
lcd.setCursor(16,2);
}





}


