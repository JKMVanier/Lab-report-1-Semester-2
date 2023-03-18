//Goal: Counting on 7-seg with efficient code
// functions and arrays.

int ledPins[] = { 2, 3, 4, 5, 6, 7, 8, 9};
   int digits[][8] = {
  { 1, 1, 1, 1, 1, 1, 0 },  // 0
  { 0, 1, 1, 0, 0, 0, 0 },  // 1
  { 1, 1, 0, 1, 1, 0, 1 },  // 2
  { 1, 1, 1, 1, 0, 0, 1 },  // 3
  { 0, 1, 1, 0, 0, 1, 1 },  // 4
  { 1, 0, 1, 1, 0, 1, 1 },  // 5
  { 1, 0, 1, 1, 1, 1, 1 },  // 6
  { 1, 1, 1, 0, 0, 0, 0 },  // 7
  { 1, 1, 1, 1, 1, 1, 1 },  // 8
  { 1, 1, 1, 1, 0, 1, 1 }   // 9
};
   
void setup() {

  
  // put your setup code here, to run once:
for (int i = 0; i < 9; i++){
pinMode (ledPins[i], OUTPUT);


}

}

void loop() {


for (int h = 0; h < 9; h++){


count(h);

delay(1000);
}
}


void count(int digit) {
for (int h = 0; h < 7; h++){
digitalWrite(ledPins[h], digits[digit][h]);
}
