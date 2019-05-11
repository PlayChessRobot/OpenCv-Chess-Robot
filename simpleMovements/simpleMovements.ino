
#include <Braccio.h>
#include <Servo.h>
#include <LiquidCrystal.h>

LiquidCrystal lcd(A5, A4, A3, A2, A1, A0);
int green = 13;
int red = 2;





Servo base;
Servo shoulder;
Servo elbow;
Servo wrist_rot;
Servo wrist_ver;
Servo gripper;

void h8() {

  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           68,  90, 90, 133, 90,  51);
  delay(1000);
  Braccio.ServoMovement(30,           68,  121, 130, 133, 90,  51);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           68,  121, 130, 133, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           68,  121, 90, 133, 90,  73);
  delay(1000);

}

void h8_down() {
  Braccio.ServoMovement(30,           68,  90, 90, 133, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           68,  121, 130, 133, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           68,  121, 130, 133, 90,  51);
  delay(1000);
  Braccio.ServoMovement(30,           69,  121, 90, 133, 90,  51);
  delay(1000);


}

void h7() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,              74,  90, 90, 133, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,               74,  117, 131, 133, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,              74,  117, 131, 133, 90,  70);
  delay(1000);
  Braccio.ServoMovement(30,              74,  117, 90, 133, 90,  70);
  delay(1000);

}

void h7_down() {
  Braccio.ServoMovement(30,                74,  90, 90, 133, 90,  70);
  delay(1000);
  Braccio.ServoMovement(30,               74,  117, 131, 133, 90,  70);
  delay(1000);
  Braccio.ServoMovement(30,              74,  117, 131, 133, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,              74,  117, 90, 133, 90,  54);
  delay(1000);


}

void h6() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,              79,  90, 90, 139, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,              79,  119, 127, 139, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,              79,  119, 127, 139, 90,  73);

  delay(1000);
  Braccio.ServoMovement(30,              79,  119, 90, 139, 90,  73);
  delay(1000);

}

void h6_down() {

  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,              79,  90, 90, 139, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,              79,  119, 127, 139, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,              79,  119, 127, 139, 90,  54);

  delay(1000);
  Braccio.ServoMovement(30,              79,  119, 90, 139, 90,  54);
  delay(1000);


}

void h5() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,              85,  90, 90, 135, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,               85,  115, 134, 135, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,              85,  115, 134, 135, 90,  73);

  delay(1000);
  Braccio.ServoMovement(30,              85,  115, 90, 135, 90,  73);
  delay(1000);

}

void h5_down() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,              85,  90, 90, 135, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,               85,  115, 134, 135, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,              85,  115, 134, 135, 90,  54);

  delay(1000);
  Braccio.ServoMovement(30,              85,  115, 90, 135, 90,  54);
  delay(1000);

}

void h4() {
  Braccio.ServoMovement(30,              93.5,  90, 90, 136, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,               93.5,  116, 133, 136, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,              93.5,  116, 133, 136, 90,  73);

  delay(1000);
  Braccio.ServoMovement(30,              93.5,  116, 90, 136, 90,  73);
  delay(1000);

}
void h4_down() {
  Braccio.ServoMovement(30,               93.5,  90, 90, 136, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,               93.5,  116, 133, 136, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,              93.5,  116, 133, 136, 90,  54);

  delay(1000);
  Braccio.ServoMovement(30,              93.5,  116, 90, 136, 90,  54);
  delay(1000);

}

void h3() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,              98,  90, 90, 140, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,               98,  118, 127, 140, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,              98,  118, 127, 140, 90,  73);

  delay(1000);
  Braccio.ServoMovement(30,              98,  118, 90, 140, 90,  73);
  delay(1000);

}
void h3_down() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,              98,  90, 90, 140, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,               98,  118, 127, 140, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,              98,  118, 127, 140, 90,  54);

  delay(1000);
  Braccio.ServoMovement(30,              98,  118, 90, 140, 90,  54);
  delay(1000);

}



void h2() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,               104,  90, 90, 135, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,                104,  118, 130, 135, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,               104,  118, 130, 135, 90,  73);

  delay(1000);
  Braccio.ServoMovement(30,               104,  118, 90, 135, 90,  73);
  delay(1000);

}


void h2_down() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,              104,  90, 90, 135, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,                104,  118, 130, 135, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,               104,  118, 130, 135, 90,  54);

  delay(1000);
  Braccio.ServoMovement(30,               104,  118, 90, 135, 90,  54);
  delay(1000);

}



void h1() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           108,  90, 90, 136, 90,  52);
  delay(1000);
  Braccio.ServoMovement(30,           108,  122, 123, 136, 90,  52);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           108,  122, 123, 136, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           108,  122, 90, 135, 90,  73);
  delay(1000);


}
void h1_down() {

  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           108,  90, 90, 136, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           108,  122, 123, 136, 90,  73);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           108,  122, 123, 136, 90,  52);
  delay(1000);
  Braccio.ServoMovement(30,           108,  122, 90, 136, 90,  52);
  delay(1000);


}

void g8() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           66,  90, 90, 137, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           66,  110, 140, 137, 90,  54);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           66,  110, 140, 137, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           66,  110, 90, 137, 90,  73);
  delay(1000);

}

void g8_down() {
  Braccio.ServoMovement(30,           66,  90, 90, 137, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,          66,  110, 140, 137, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           66,  110, 140, 137, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,          66,  110, 140, 137, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           66,  110, 90, 137, 90,  54);
  delay(1000);

}
void g7() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           72,  90, 90, 135, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           72,  105, 145, 135, 90,  54);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           72,  105, 145, 135, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           72,  105, 90, 135, 90,  73);
  delay(1000);

}
void g7_down() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           72,  90, 90, 135, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           72,  105, 145, 135, 90,  73);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           72,  105, 145, 135, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           72,  105, 90, 135, 90,  54);
  delay(1000);

}


void g6() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           79,  90, 90, 127, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           79,  98, 157, 127, 90,  54);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           79,  98, 157, 127, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           79,  98, 90, 127, 90,  73);
  delay(1000);

}
void g6_down() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           79,  90, 90, 127, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           79,  98, 157, 127, 90,  73);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           79,  98, 157, 127, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           79,  98, 90, 127, 90,  54);
  delay(1000);

}

void g5() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           85.5,  90, 90, 127, 90,  55);
  delay(1000);
  Braccio.ServoMovement(30,           85.5,  97, 158, 127, 90,  55);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           85.5,  97, 158, 127, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           85.5,  97, 90, 127, 90,  73);
  delay(1000);

}
void g5_down() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           85.5,  90, 90, 127, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           85.5,  97, 158, 127, 90,  73);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           85.5,  97, 158, 127, 90,  55);
  delay(1000);
  Braccio.ServoMovement(30,           85.5,  97, 90, 127, 90,  55);
  delay(1000);

}


void g4() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           93,  90, 90, 127, 90,  55);
  delay(1000);
  Braccio.ServoMovement(30,           93,  97, 158, 127, 90,  55);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           93,  97, 158, 127, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           93,  97, 90, 127, 90,  73);
  delay(1000);

}

void g4_down() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           93,  90, 90, 127, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           93,  97, 158, 127, 90,  73);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           93,  97, 158, 127, 90,  55);
  delay(1000);
  Braccio.ServoMovement(30,           93,  97, 90, 127, 90,  55);
  delay(1000);

}



void g3() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,            99,  90, 90, 125, 90,  55);
  delay(1000);
  Braccio.ServoMovement(30,           99,  98, 158, 125, 90,  55);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           99,  98, 158, 125, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           99,  98, 90, 125, 90,  73);
  delay(1000);

}

void g3_down() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,            99,  90, 90, 125, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           99,  98, 158, 125, 90,  73);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           99,  98, 158, 125, 90,  55);
  delay(1000);
  Braccio.ServoMovement(30,           99,  98, 90, 125, 90,  55);
  delay(1000);

}

void g2() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           104.9,  90, 90, 129, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           104.9,  102, 153, 129, 90,  54);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           104.9,  102, 153, 129, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           104.9,  102, 90, 129, 90,  73);
  delay(1000);

}

void g2_down() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           104.9,  102, 90, 129, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           104.9,  102, 153, 129, 90,  73);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           104.9,  102, 153, 129, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           104.9,  102, 90, 130, 90,  54);
  delay(1000);

}


void g1() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           110,  90, 90, 139, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           110,  110, 138, 139, 90,  54);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           110,  110, 138, 139, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           110,  110, 90, 139, 90,  73);
  delay(1000);

}



void g1_down() {
  Braccio.ServoMovement(30,           110,  90, 90, 139, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,          110,  110, 138, 139, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,          110,  110, 138, 139, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           110,  110, 90, 139, 90,  54);
  delay(1000);


}

void f8() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           65,  90, 90, 111, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           65,  83, 178, 111, 90,  54);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           65,  83, 178, 111, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           65,  83, 90, 111, 90,  73);
  delay(1000);

}


void f8_down() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           65,  90, 90, 111, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           65,  83, 178, 111, 90,  73);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           65,  83, 178, 111, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           65,  83, 90, 111, 90,  54);
  delay(1000);

}


void f7() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           71,  90, 90, 112, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           71,  81, 180, 112, 90,  54);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           71,  81, 180, 112, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           71,  81, 90, 112, 90,  73);
  delay(1000);

}

void f7_down() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           71,  90, 90, 114, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           71,  81, 180, 114, 90,  73);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           71,  81, 180, 114, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           71,  81, 90, 114, 90,  54);
  delay(1000);

}

void f6() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           78,  90, 90, 116, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           78,  78, 180, 116, 90,  54);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           78,  78, 180, 116, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           78,  78, 90, 116, 90,  73);
  delay(1000);

}

void f6_down() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           78,  90, 90, 116, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           78,  78, 180, 116, 90,  73);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           78,  78, 180, 116, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           78,  78, 90, 116, 90,  54);
  delay(1000);

}

void f5() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           84,  90, 90, 118, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           84,  77, 180, 118, 90,  54);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           84,  77, 180, 118, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           84,  77, 90, 118, 90,  73);
  delay(1000);

}

void f5_down() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           84,  90, 90, 118, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           84,  77, 180, 118, 90,  73);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           84,  77, 180, 118, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           84,  77, 90, 118, 90,  54);
  delay(1000);

}

void f4() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           93.5,  90, 90, 118, 90,  52);
  delay(1000);
  Braccio.ServoMovement(30,           93.5,  77, 180, 118, 90,  52);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           93.5,  77, 180, 118, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           93.5,  77, 90, 118, 90,  73);
  delay(1000);

}

void f4_down() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           93.5,  90, 90, 118, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           93.5,  77, 180, 118, 90,  73);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           93.5,  77, 180, 118, 90,  52);
  delay(1000);
  Braccio.ServoMovement(30,           93.5,  77, 90, 118, 90,  52);
  delay(1000);

}
void f3() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           100,  90, 90, 117, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           100,  78, 180, 117, 90,  54);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           100,  78, 180, 117, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           100,  78, 90, 117, 90,  73);
  delay(1000);

}
void f3_down() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           100,  90, 90, 117, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           100,  78, 180, 117, 90,  73);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           100,  78, 180, 117, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           100,  78, 90, 117, 90,  54);
  delay(1000);

}
void f2() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           106.9,  90, 90, 116, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           106.9,  81, 178, 116, 90,  54);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           106.9,  81, 178, 116, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           106.9,  81, 90, 116, 90,  73);
  delay(1000);

}

void f2_down() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           106.9,  90, 90, 116, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           106.9,  81, 178, 116, 90,  73);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           106.9,  81, 178, 116, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           106.9,  81, 90, 116, 90,  54);
  delay(1000);

}

void f1() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           112,  90, 90, 120, 90,  53);
  delay(1000);
  Braccio.ServoMovement(30,           112,  87, 175, 120, 90,  53);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           112,  87, 175, 120, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           112,  87, 90, 120, 90,  73);
  delay(1000);

}

void f1_down() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           112,  90, 90, 120, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           112,  87, 175, 120, 90,  73);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           112,  87, 175, 120, 90,  53);
  delay(1000);
  Braccio.ServoMovement(30,           112,  87, 90, 120, 90,  53);
  delay(1000);

}

void e8() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           63,  90, 90, 122, 90,  53);
  delay(1000);
  Braccio.ServoMovement(30,           63,  75, 180, 122, 90,  53);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           63,  75, 180, 122, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           63,  75, 90, 122, 90,  73);
  delay(1000);


}

void e8_down() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           63,  90, 90, 122, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           63,  75, 180, 122, 90,  73);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           63,  75, 180, 122, 90,  53);
  delay(1000);
  Braccio.ServoMovement(30,           63,  75, 90, 122, 90,  53);
  delay(1000);

}
void e7() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           69,  90, 90, 128, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           69,  72, 179, 128, 90,  54);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           69,  72, 179, 128, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           69,  72, 90, 128, 90,  73);
  delay(1000);

}

void e7_down() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           69,  90, 90, 128, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           69,  72, 179, 128, 90,  73);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           69,  72, 179, 128, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           69,  72, 90, 128, 90,  54);
  delay(1000);
}

void e6() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           77,  90, 90, 131, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           77,  71, 178, 131, 90,  54);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           77,  71, 178, 131, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           77,  71, 90, 131, 90,  73);
  delay(1000);

}
void e6_down() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           77,  90, 90, 131, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           77,  71, 178, 131, 90,  73);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           77,  71, 178, 131, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           77,  71, 90, 131, 90,  54);
  delay(1000);
}
void e5() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           83,  90, 90, 133, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           83,  70, 179, 133, 90,  54);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           83,  70, 179, 133, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           83,  70, 90, 133, 90,  73);
  delay(1000);

}

void e5_down() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           83,  90, 90, 133, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           83,  70, 179, 133, 90,  73);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           83,  70, 179, 133, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           83,  70, 90, 133, 90,  54);
  delay(1000);
}

void e4() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           93.6,  90, 90, 133, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           93.6,  70, 179, 133, 90,  54);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           93.6,  70, 179, 133, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           93.6,  70, 90, 133, 90,  73);
  delay(1000);

}
void e4_down() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           93.6,  90, 90, 133, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           93.6,  70, 179, 133, 90,  73);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           93.6,  70, 179, 133, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           93.6,  70, 90, 133, 90,  54);
  delay(1000);
}
void e3() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           101,  90, 90, 133, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           101,  71, 177, 133, 90,  54);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           101,  71, 177, 133, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           101,  71, 90, 133, 90,  73);
  delay(1000);

}


void e3_down() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           101,  90, 90, 133, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           101,  71, 177, 133, 90,  73);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           101,  71, 177, 133, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           101,  71, 90, 133, 90,  54);
  delay(1000);
}

void e2() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           107,  90, 90, 128, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           107,  72, 179, 128, 90,  54);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           107,  72, 179, 128, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           107,  72, 90, 128, 90,  73);
  delay(1000);

}

void e2_down() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           107,  90, 90, 128, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           107,  72, 179, 128, 90,  73);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           107,  72, 179, 128, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           107,  72, 90, 128, 90,  54);
  delay(1000);
}


void e1() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           114.7,  90, 90, 125, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           114.7,  76, 180, 125, 90,  54);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           114.7,  76, 180, 125, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           114.7,  76, 90, 125, 90,  73);
  delay(1000);

}

void e1_down() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           114.7,  90, 90, 125, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           114.7,  76, 180, 125, 90,  73);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           114.7,  76, 180, 125, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           114.7,  76, 90, 125, 90,  54);
  delay(1000);
}
void d8() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           60,  90, 90, 134, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           60,  68, 180, 134, 90,  54);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           60,  68, 180, 134, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           60,  68, 90, 134, 90,  73);
  delay(1000);

}

void d8_down() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           60,  90, 90, 134, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           60, 68, 180, 134, 90,  73);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           60,  68, 180, 134, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           60,  68, 90, 134, 90,  54);
  delay(1000);
}


void d7() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           66,  90, 90, 140, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           66,  65, 178, 140, 90,  54);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           66,  65, 178, 140, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           66,  65, 90, 140, 90,  73);
  delay(1000);

}
void d7_down() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           66,  90, 90, 140, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           66,  65, 178, 140, 90,  73);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           66,  65, 178, 140, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           66,  65, 90, 140, 90,  54);
  delay(1000);
}

void d6() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           76,  90, 90, 147, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           76,  65, 174, 147, 90,  54);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           76,  65, 174, 147, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           76,  65, 90, 147, 90,  73);
  delay(1000);

}

void d6_down() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           76,  90, 90, 147, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           76,  65, 174, 147, 90,  73);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           76,  65, 174, 147, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           76,  65, 90, 147, 90,  54);
  delay(1000);
}

void d5() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           83.4,  90, 90, 149, 90,  55);
  delay(1000);
  Braccio.ServoMovement(30,           83.4,  65, 173, 149, 90,  55);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           83.4,  65, 173, 149, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           83.4,  65, 90, 149, 90,  73);
  delay(1000);

}
void d5_down() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           83.4,  90, 90, 149, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           83.4,  65, 173, 149, 90,  73);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           83.4,  65, 173, 149, 90,  55);
  delay(1000);
  Braccio.ServoMovement(30,           83.4,  65, 90, 150, 90,  55);
  delay(1000);
}

void d4() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           94.8,  90, 90, 148, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           94.8,  65, 174, 148, 90,  54);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           94.8,  65, 174, 148, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           94.8,  65, 90, 148, 90,  73);
  delay(1000);

}

void d4_down() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           94.8,  90, 90, 148, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           94.8,  65, 174, 148, 90,  73);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           94.8,  65, 174, 148, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           94.8,  65, 90, 149, 90,  54);
  delay(1000);
}

void d3() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           102.8,  90, 90, 147, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           102.8,  65, 174, 147, 90,  54);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           102.8,  65, 174, 147, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           102.8,  65, 90, 147, 90,  73);
  delay(1000);

}


void d3_down() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           102.8,  90, 90, 147, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           102.8,  65, 174, 147, 90,  73);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           102.8,  65, 174, 147, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           102.8,  65, 90, 147, 90,  54);
  delay(1000);
}
void d2() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           109.8,  90, 90, 143, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           109.8,  65, 176, 143, 90,  54);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           109.8,  65, 176, 143, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           109.8,  65, 90, 143, 90,  73);
  delay(1000);

}

void d2_down() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           109.8,  90, 90, 143, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           109.8,  65, 176, 143, 90,  73);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           109.8,  65, 176, 143, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           109.8,  65, 90, 143, 90,  54);
  delay(1000);
}
void d1() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           117,  90, 90, 135, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           117,  66, 180, 135, 90,  54);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           117,  66, 180, 135, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           117,  66, 90, 135, 90,  73);
  delay(1000);

}


void d1_down() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           117,  90, 90, 135, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           117,  66, 180, 135, 90,  73);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           117,  66, 180, 135, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           117,  66, 90, 135, 90,  54);
  delay(1000);
}

void c8() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           56,  90, 90, 145, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           56,  60, 178, 145, 90,  54);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           56,  60, 178, 145, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           56,  60, 90, 145, 90,  73);
  delay(1000);

}
void c8_down() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           56,  90, 90, 145, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           56,  60, 178, 145, 90,  73);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           56,  60, 178, 145, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           56,  60, 90, 145, 90,  54);
  delay(1000);
}


void c7() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           64,  90, 90, 149, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           64,  56, 180, 149, 90,  54);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           64,  56, 180, 149, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           64,  56, 90, 149, 90,  73);
  delay(1000);

}
void c7_down() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           64,  90, 90, 149, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           64,  56, 180, 149, 90,  73);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           64,  56, 180, 149, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           64,  56, 90, 149, 90,  54);
  delay(1000);
}

void c6() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           73,  90, 90, 153, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           73,  55, 180, 153, 90,  54);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           73,  55, 180, 153, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           73,  55, 90, 153, 90,  73);
  delay(1000);

}
void c6_down() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           73,  90, 90, 153, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           73,  55, 180, 153, 90,  73);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           73,  55, 180, 153, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           73,  55, 90, 153, 90,  54);
  delay(1000);
}
void c5() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           82,  90, 90, 153, 90,  55);
  delay(1000);
  Braccio.ServoMovement(30,           82,  53, 180, 153, 90,  55);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           82,  53, 180, 153, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           82 ,  53, 90, 153, 90,  73);
  delay(1000);

}
void c5_down() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           82,  90, 90, 153, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           82,  53, 180, 153, 90,  73);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           82,  53, 180, 153, 90,  55);
  delay(1000);
  Braccio.ServoMovement(30,           82 ,  53, 90, 153, 90,  55);
  delay(1000);
}
void c4() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           94,  90, 90, 154, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           94,  53, 179, 154, 90,  54);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           94,  53, 179, 154, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           94,  53, 90, 154, 90,  73);
  delay(1000);

}
void c4_down() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           94,  90, 90, 154, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           94,  53, 179, 154, 90,  73);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           94,  53, 179, 154, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           94,  53, 90, 154, 90,  54);
  delay(1000);
}


void c3() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           103.8,  90, 90, 153, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           103.8,  54, 179, 153, 90,  54);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           103.8,  54, 179, 153, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           103.8,  54, 90, 153, 90,  73);
  delay(1000);

}

void c3_down() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           103.8,  90, 90, 153, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           103.8,  54, 179, 153, 90,  73);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           103.8,  54, 179, 153, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           103.8,  54, 90, 153, 90,  54);
  delay(1000);
}



void c2() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           112.8,  90, 90, 150, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           112.8,  56, 180, 150, 88,  54);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           112.8,  56, 180, 150, 88,  73);
  delay(1000);
  Braccio.ServoMovement(30,           112.8,  56, 90, 150, 88,  73);
  delay(1000);

}

void c2_down() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           112.8,  90, 90, 150, 88,  73);
  delay(1000);
  Braccio.ServoMovement(30,           112.8,  56, 180, 150, 88,  73);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           112.8,  56, 180, 150, 88,  54);
  delay(1000);
  Braccio.ServoMovement(30,           112.8,  56, 90, 150, 88,  54);
  delay(1000);
}
void c1() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           120.5,  90, 90, 147, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           120.5,  60, 179, 147, 90,  54);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           120.5,  60, 179, 147, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           120.5,  60, 90, 147, 90,  73);
  delay(1000);

}


void c1_down() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           120.5,  90, 90, 147, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           120.5,  60, 179, 147, 90,  73);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           120.5,  60, 179, 147, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           120.5,  60, 90, 147, 90,  54);
  delay(1000);
}



void b8() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           53,  90, 90, 155, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           53,  54, 179, 155, 90,  54);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           53,  54, 179, 155, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           53,  54, 90, 155, 90,  73);
  delay(1000);

}
void b8_down() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           53,  90, 90, 155, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           53,  54, 179, 155, 90,  73);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           53,  54, 179, 155, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           53,  54, 90, 155, 90,  54);
  delay(1000);
}

void b7() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           61,  90, 90, 161, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           61,  51, 176, 161, 90,  54);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           61,  51, 176, 161, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           61,  51, 90, 161, 90,  73);
  delay(1000);

}

void b7_down() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           61,  90, 90, 161, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           61,  51, 176, 161, 90,  73);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           61,  51, 176, 161, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           61,  51, 90, 161, 90,  54);
  delay(1000);
}

void b6() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           71,  90, 90, 163, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           71,  48, 177, 163, 90,  54);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           71,  48, 177, 163, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           71,  48, 90, 163, 90,  73);
  delay(1000);

}
void b6_down() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           71,  90, 90, 163, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           71,  48, 177, 163, 90,  73);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           71,  48, 177, 163, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           71,  48, 90, 163, 90,  54);
  delay(1000);
}

void b5() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           81,  90, 90, 165, 90,  55);
  delay(1000);
  Braccio.ServoMovement(30,           81,  46, 177, 165, 90,  55);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           81,  46, 177, 165, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           81,  46, 90, 165, 90,  73);
  delay(1000);

}

void b5_down() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           81,  90, 90, 165, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           81,  46, 177, 165, 90,  73);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           81,  46, 177, 165, 90,  55);
  delay(1000);
  Braccio.ServoMovement(30,           81,  46, 90, 165, 90,  55);
}

void b4() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           95,  90, 90, 164, 90,  55);
  delay(1000);
  Braccio.ServoMovement(30,           95,  45, 179, 164, 90,  55);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           95,  45, 179, 164, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           95,  46, 90, 164, 90,  73);
  delay(1000);

}
void b4_down() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           95,  90, 90, 164, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           95,  45, 179, 164, 90,  73);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           95,  45, 179, 164, 90,  55);
  delay(1000);
  Braccio.ServoMovement(30,           95,  46, 90, 164, 90,  55);
  delay(1000);
}
void b3() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           106,  90, 90, 163, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           106,  47, 177, 163, 90,  54);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           106,  47, 177, 163, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           106,  47, 90, 163, 90,  73);
  delay(1000);

}

void b3_down() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           106,  90, 90, 163, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           106,  47, 177, 163, 90,  73);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           106,  47, 177, 163, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           106,  47, 90, 163, 90,  54);
  delay(1000);
}
void b2() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           116,  90, 90, 163, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           116,  52, 175, 163, 90,  54);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           116,  52, 175, 163, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           116,  52, 90, 163, 90,  73);
  delay(1000);

}

void b2_down() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           116,  90, 90, 163, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           116,  52, 175, 163, 90,  73);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           116,  52, 175, 163, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           116,  52, 90, 163, 90,  54);
  delay(1000);
}


void b1() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           124,  90, 90, 155, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           124,  53, 178, 155, 90,  54);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           124,  53, 178, 155, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           124,  53, 90, 155, 90,  73);
  delay(1000);

}

void b1_down() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           124,  90, 90, 155, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           124,  53, 178, 155, 90,  73);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           124,  53, 178, 155, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           124,  53, 90, 155, 90,  54);
  delay(1000);
}


void a8() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           47,  90, 90, 161, 90,  53);
  delay(1000);
  Braccio.ServoMovement(30,           47,  45, 180, 161, 90,  53);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           47,  45, 180, 161, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           47,  45, 90, 161, 90,  73);
  delay(1000);


}
void a8_down() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           47,  90, 90, 161, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           47,  45, 180, 161, 90,  73);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           47,  45, 180, 161, 90,  53);
  delay(1000);
  Braccio.ServoMovement(30,           47,  45, 90, 161, 90,  53);
  delay(1000);

}
void a7() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           56,  90, 90, 167, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           56,  40, 180, 167, 90,  54);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           56,  40, 180, 167, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           56,  40, 90, 167, 90,  73);
  delay(1000);

}

void a7_down() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           56,  90, 90, 167, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           56,  40, 180, 167, 90,  73);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           56,  40, 180, 167, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           56,  40, 90, 167, 90,  54);
  delay(1000);
}

void a6() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           67,  90, 90, 170, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           67,  36, 180, 170, 90,  54);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           67,  36, 180, 170, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           67,  36, 90, 170, 90,  73);
  delay(1000);

}



void a6_down() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           67,  90, 90, 170, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           67,  36, 180, 170, 90,  73);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           67,  36, 180, 170, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           67,  36, 90, 170, 90,  54);
  delay(1000);
}

void a5() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           80,  90, 90, 172, 90,  55);
  delay(1000);
  Braccio.ServoMovement(30,           80,  33, 180, 172, 90,  55);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           80,  33, 180, 172, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           80,  33, 90, 172, 90,  73);
  delay(1000);

}

void a5_down() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           80,  90, 90, 172, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           80,  33, 180, 172, 90,  73);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           80,  33, 180, 172, 90,  55);
  delay(1000);
  Braccio.ServoMovement(30,           80,  33, 90, 172, 90,  55);
  delay(1000);
}
void a4() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           96,  34, 90, 174, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           96,  34, 180, 174, 90,  54);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           96,  34, 180, 174, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           96,  34, 90, 174, 90,  73);
  delay(1000);

}
void a4_down() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           96,  34, 90, 174, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           96,  34, 180, 174, 90,  73);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           96,  34, 180, 174, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           96,  34, 90, 174, 90,  54);
  delay(1000);
}

void a3() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           109,  90, 90, 171, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           109,  35, 180, 171, 90,  54);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           109,  35, 180, 171, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           109,  35, 90, 171, 90,  73);
  delay(1000);

}
void a3_down() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           109,  90, 90, 171, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           109,  35, 180, 171, 90,  73);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           109,  35, 180, 171, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           109,  35, 90, 171, 90,  54);
  delay(1000);
}

void a2() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           121,  90, 90, 168, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           121,  40, 180, 168, 90,  54);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           121,  40, 180, 168, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           121,  40, 90, 168, 90,  73);
  delay(1000);

}
void a2_down() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           121,  90, 90, 168, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           121,  40, 180, 168, 90,  73);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           121,  40, 180, 168, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           121,  40, 90, 168, 90,  54);
  delay(1000);
}

void a1() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           130,  90, 90, 162, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           130,  44, 180, 162, 90,  54);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           130,  44, 180, 162, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           130,  44, 90, 162, 90,  73);
  delay(1000);

}
void a1_down() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           130,  90, 90, 162, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           130,  44, 180, 162, 90,  73);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           130,  44, 180, 162, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           130,  44, 90, 162, 90,  54);
  delay(1000);
}
void out() {
  //(step delay, M1, M2, M3, M4, M5, M6);
  Braccio.ServoMovement(30,           0,  90, 90, 90, 90,  73);
  delay(1000);
  Braccio.ServoMovement(30,           0,  50, 180, 150, 90,  73);
  //Wait 1 second
  delay(1000);
  Braccio.ServoMovement(30,           0,  50, 180, 150, 90,  54);
  delay(1000);
  Braccio.ServoMovement(30,           0,  50, 180, 150, 90,  54);
  delay(1000);


}

void empty() {
  Braccio.ServoMovement(30,            90,  90, 90, 90, 90,  52);
  delay(1000);
}

void fully() {
  Braccio.ServoMovement(30,            90,  90, 90, 90, 90,  73);
  delay(1000);
}

void tenSec() {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("10 saniye");
  lcd.setCursor(0, 1);
  lcd.print("icinde oynayin");
  digitalWrite(green, HIGH);
  digitalWrite(red, LOW);
}

void redL() {
  lcd.clear();

  digitalWrite(red, HIGH);
  digitalWrite(green, LOW);

  lcd.setCursor(0, 1);
  lcd.print("Sira sizde degil");
}
void greenL() {
  lcd.clear();
  digitalWrite(red, LOW);
  digitalWrite(green, HIGH);

  lcd.setCursor(0, 0);
  lcd.print("Oynayabilirsiniz");
  lcd.setCursor(3, 1);
  lcd.print("Sira sizde");

}
void illegal_move(){
  lcd.clear();
  digitalWrite(red, LOW);
  digitalWrite(green, HIGH);
  lcd.setCursor(2, 0);
  lcd.print("Yanlis Hamle");
  lcd.setCursor(3, 1);
  lcd.print("Oynadiniz!");
  
  }



typedef void (* Caller)();

Caller FuncCall[] = {
  &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8,
  &b1, &b2, &b3, &b4, &b5, &b6, &b7, &b8,
  &c1, &c2, &c3, &c4, &c5, &c6, &c7, &c8,
  &d1, &d2, &d3, &d4, &d5, &d6, &d7, &d8,
  &e1, &e2, &e3, &e4, &e5, &e6, &e7, &e8,
  &f1, &f2, &f3, &f4, &f5, &f6, &f7, &f8,
  &g1, &g2, &g3, &g4, &g5, &g6, &g7, &g8,
  &h1, &h2, &h3, &h4, &h5, &h6, &h7, &h8,
  &a1_down, &a2_down, &a3_down, &a4_down, &a5_down, &a6_down, &a7_down, &a8_down,
  &b1_down, &b2_down, &b3_down, &b4_down, &b5_down, &b6_down, &b7_down, &b8_down,
  &c1_down, &c2_down, &c3_down, &c4_down, &c5_down, &c6_down, &c7_down, &c8_down,
  &d1_down, &d2_down, &d3_down, &d4_down, &d5_down, &d6_down, &d7_down, &d8_down,
  &e1_down, &e2_down, &e3_down, &e4_down, &e5_down, &e6_down, &e7_down, &e8_down,
  &f1_down, &f2_down, &f3_down, &f4_down, &f5_down, &f6_down, &f7_down, &f8_down,
  &g1_down, &g2_down, &g3_down, &g4_down, &g5_down, &g6_down, &g7_down, &g8_down,
  &h1_down, &h2_down, &h3_down, &h4_down, &h5_down, &h6_down, &h7_down, &h8_down,
  &out, &fully, &empty, &tenSec, &redL, &greenL, &illegal_move
};


const char* func_list[] = {
  "a1", "a2", "a3", "a4", "a5", "a6", "a7", "a8",
  "b1", "b2", "b3", "b4", "b5", "b6", "b7", "b8",
  "c1", "c2", "c3", "c4", "c5", "c6", "c7", "c8",
  "d1", "d2", "d3", "d4", "d5", "d6", "d7", "d8",
  "e1", "e2", "e3", "e4", "e5", "e6", "e7", "e8",
  "f1", "f2", "f3", "f4", "f5", "f6", "f7", "f8",
  "g1", "g2", "g3", "g4", "g5", "g6", "g7", "g8",
  "h1", "h2", "h3", "h4", "h5", "h6", "h7", "h8",
  "a1_down", "a2_down", "a3_down", "a4_down", "a5_down", "a6_down", "a7_down", "a8_down",
  "b1_down", "b2_down", "b3_down", "b4_down", "b5_down", "b6_down", "b7_down", "b8_down",
  "c1_down", "c2_down", "c3_down", "c4_down", "c5_down", "c6_down", "c7_down", "c8_down",
  "d1_down", "d2_down", "d3_down", "d4_down", "d5_down", "d6_down", "d7_down", "d8_down",
  "e1_down", "e2_down", "e3_down", "e4_down", "e5_down", "e6_down", "e7_down", "e8_down",
  "f1_down", "f2_down", "f3_down", "f4_down", "f5_down", "f6_down", "f7_down", "f8_down",
  "g1_down", "g2_down", "g3_down", "g4_down", "g5_down", "g6_down", "g7_down", "g8_down",
  "h1_down", "h2_down", "h3_down", "h4_down", "h5_down", "h6_down", "h7_down", "h8_down",
  "out", "fully", "empty",  "tenSec", "redL", "greenL", "illegal_move"
};
char *p;


void setup() {
  //Initialization functions and set up the initial position for Braccio
  //All the servo motors will be positioned in the "safety" position:
  //Base (M1):90 degrees
  //Shoulder (M2): 45 degrees
  //Elbow (M3): 180 degrees
  //Wrist vertical (M4): 180 degrees
  //Wrist rotation (M5): 90 degrees
  //gripper (M6): 10 degrees
  lcd.begin(16, 2);
  pinMode(green, OUTPUT);
  pinMode(red, OUTPUT);
  Serial.begin(9600);
  Braccio.begin();

}

void loop() {
  /*
    Step Delay: a milliseconds delay between the movement of each servo.  Allowed values from 10 to 30 msec.
    M1=base degrees. Allowed values from 0 to 180 degrees
    M2=shoulder degrees. Allowed values from 15 to 165 degrees
    M3=elbow degrees. Allowed values from 0 to 180 degrees
    M4=wrist vertical degrees. Allowed values from 0 to 180 degrees
    M5=wrist rotation degrees. Allowed values from 0 to 180 degrees
    M6=gripper degrees. Allowed values from 10 to 73 degrees. 10: the toungue is open, 73: the gripper is closed.
  */
  if (Serial.available()) {
    String serialListener = Serial.readString();
    char str_array[serialListener.length()];
    serialListener.toCharArray(str_array, serialListener.length());

    Serial.println(str_array);
    char* token = strtok(str_array, "-");
    while (token != NULL)
    {
      for (int i = 0; i < 135; i++)
      {

        if (strcmp(token, func_list[i]) == 0) {
          Serial.println(token);
          FuncCall[i]();



        }
      }
      token = strtok(NULL, "-");
 
    }
  }

//  h5();
//  fully();
//  h5_down();
//  empty();

}
