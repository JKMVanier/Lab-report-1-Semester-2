//Goal: Making a 7-seg count 
//Theme: digitalWrite
#define x 0

void setup() {
pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
pinMode(6, OUTPUT);
pinMode(7, OUTPUT);
pinMode(8, OUTPUT);
pinMode(9, OUTPUT);
}

void loop() {


//0
digitalWrite(2, 1);
digitalWrite(3, 1);
digitalWrite(4, 1);
digitalWrite(5, 1);
digitalWrite(6, x);
digitalWrite(7, 1);
digitalWrite(8, 1);
digitalWrite(9, 1);
delay(1000);

//1
digitalWrite(2, x);
digitalWrite(3, x);
digitalWrite(4, 1);
digitalWrite(5, x);
digitalWrite(6, x);
digitalWrite(7, x);
digitalWrite(8, x);
digitalWrite(9, 1);
delay(1000);

//2
digitalWrite(2, 1);
digitalWrite(3, 1);
digitalWrite(4, x);
digitalWrite(5, x);
digitalWrite(6, 1);
digitalWrite(7, x);
digitalWrite(8, 1);
digitalWrite(9, 1);
delay(1000);

//3
digitalWrite(2, x);
digitalWrite(3, 1);
digitalWrite(4, 1);
digitalWrite(5, x);
digitalWrite(6, 1);
digitalWrite(7, x);
digitalWrite(8, 1);
digitalWrite(9, 1);
delay(1000);

//4
digitalWrite(2, x);
digitalWrite(3, x);
digitalWrite(4, 1);
digitalWrite(5, x);
digitalWrite(6, 1);
digitalWrite(7, 1);
digitalWrite(8, x);
digitalWrite(9, 1);
delay(1000);

//5
digitalWrite(2, x);
digitalWrite(3, 1);
digitalWrite(4, 1);
digitalWrite(5, x);
digitalWrite(6, 1);
digitalWrite(7, 1);
digitalWrite(8, 1);
digitalWrite(9, x);
delay(1000);

//6
digitalWrite(2, 1);
digitalWrite(3, 1);
digitalWrite(4, 1);
digitalWrite(5, x);
digitalWrite(6, 1);
digitalWrite(7, 1);
digitalWrite(8, 1);
digitalWrite(9, x);
delay(1000);

//7
digitalWrite(2, x);
digitalWrite(3, x);
digitalWrite(4, 1);
digitalWrite(5, x);
digitalWrite(6, x);
digitalWrite(7, x);
digitalWrite(8, 1);
digitalWrite(9, 1);
delay(1000);

//8
digitalWrite(2, 1);
digitalWrite(3, 1);
digitalWrite(4, 1);
digitalWrite(5, x);
digitalWrite(6, 1);
digitalWrite(7, 1);
digitalWrite(8, 1);
digitalWrite(9, 1);
delay(1000);

//9
digitalWrite(2, x);
digitalWrite(3, x);
digitalWrite(4, 1);
digitalWrite(5, x);
digitalWrite(6, 1);
digitalWrite(7, 1);
digitalWrite(8, 1);
digitalWrite(9, 1);
delay(1000);
}
