//Goal: Count on a 7 seg using switch cases and functions
//Theme switch case and void
int ledPins[] = { 2, 3, 4, 5, 6, 7, 8, 9};
int zero[] = { 1, 1, 1, 0, 0, 1, 1, 1};
int one[] = { 0, 0, 1, 0, 0, 0, 0, 1};
int two[] = { 1, 1, 0, 0, 1, 0, 1, 1};
int three[] = { 0, 1, 1, 0, 1, 0, 1, 1};
int four[] = { 0, 0, 1, 0, 1, 1, 0, 1};
int five[] = { 0, 1, 1, 0, 1, 1, 1, 0};
int six[] = { 1, 1, 1, 0, 1, 1, 1, 0};
int seven[] = { 0, 0, 1, 0, 0, 0, 1, 1};
int eight[] = { 1, 1, 1, 0, 1, 1, 1, 1};
int nine[] = { 0, 0, 1, 0, 1, 1, 1, 1};

void setup() {


  for (int i = 0; i < 9; i++) {
    pinMode (ledPins[i], OUTPUT);
  }

}

void loop() {

  for (int j = 0; j < 10; j++) {

    switch (j) {
      case 1: nul(); delay(1000); break; //0
      case 2: een(); delay(1000); break; //1
      case 3: twee(); delay(1000); break; //2
      case 4: drie(); delay(1000); break; //3
      case 5: vier(); delay(1000); break; //4
      case 6: vyf(); delay(1000); break; //5
      case 7: ses(); delay(1000); break; //6
      case 8: sewe(); delay(1000); break; //7
      case 9: agt(); delay(1000); break; //8
      case 10: nege(); delay(1000); break; //9

    }
  }



}
void nul() { //0
  for (int h = 0; h < 9; h++) {
    digitalWrite(ledPins[h], zero[h]);
  }
}
void een() { //1
  for (int h = 0; h < 9; h++) {
    digitalWrite(ledPins[h], one[h]);
  }
}
void twee() { //2
  for (int h = 0; h < 9; h++) {
    digitalWrite(ledPins[h], two[h]);
  }
}
void drie() { //3
  for (int h = 0; h < 9; h++) {
    digitalWrite(ledPins[h], three[h]);
  }
}
void vier() { //4
  for (int h = 0; h < 9; h++) {
    digitalWrite(ledPins[h], four[h]);
  }
}
void vyf() { //5
  for (int h = 0; h < 9; h++) {
    digitalWrite(ledPins[h], five[h]);
  }
}
void ses() { //6
  for (int h = 0; h < 9; h++) {
    digitalWrite(ledPins[h], six[h]);
  }
}
void sewe() { //7
  for (int h = 0; h < 9; h++) {
    digitalWrite(ledPins[h], seven[h]);
  }
}
void agt() { //8
  for (int h = 0; h < 9; h++) {
    digitalWrite(ledPins[h], eight[h]);
  }
}
void nege() { //9
  for (int h = 0; h < 9; h++) {
    digitalWrite(ledPins[h], nine[h]);
  }
}
