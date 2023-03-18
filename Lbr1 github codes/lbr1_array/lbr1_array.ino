//Goal: making a 7 seg count
//Theme: arrays and for loops
#define x 0

int ledPins[] = { 2, 3, 4, 5, 6, 7, 8, 9 };
int zero[] = { 1, 1, 1, 1, 0, 1, 1, 1 };
int one[] = { 0, 0, 1, 0, 0, 0, 0, 1 };
int two[] = { 1, 1, 0, 0, 1, 0, 1, 1 };
int three[] = { 0, 1, 1, 0, 1, 0, 1, 1 };
int four[] = { 0, 0, 1, 0, 1, 1, 0, 1 };
int five[] = { 0, 1, 1, 0, 1, 1, 1, 0 };
int six[] = { 1, 1, 1, 0, 1, 1, 1, 0 };
int seven[] = { 0, 0, 1, 0, 0, 0, 1, 1 };
int eight[] = { 1, 1, 1, 1, 0, 1, 1, 1 };
int nine[] = { 0, 0, 1, 1, 1, 1, 1, 1 };

void setup() {
  // put your setup code here, to run once:
  for (int i = 0; i < 8; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
 

  // Display 0
  
  for (int i = 0; i < 8; i++) {
    digitalWrite(ledPins[i], zero[i]);
  }
  delay(1000);

  // Display 1
 
  for (int i = 0; i < 8; i++) {
    digitalWrite(ledPins[i], one[i]);
  }
  delay(1000);

  // Display 2
 
  for (int i = 0; i < 8; i++) {
    digitalWrite(ledPins[i], two[i]);
  }
  delay(1000);

  // Display 3
  
  for (int i = 0; i < 8; i++) {
    digitalWrite(ledPins[i], three[i]);
  }
  delay(1000);

  // Display 4

  for (int i = 0; i < 8; i++) {
    digitalWrite(ledPins[i], four[i]);
  }
  delay(1000);

  // Display 5
 
  for (int i = 0; i < 8; i++) {
    digitalWrite(ledPins[i], five[i]);
  }
  delay(1000);

  // Display 6
 
  for (int i = 0; i < 8; i++) {
    digitalWrite(ledPins[i], six[i]);
  }
  delay(1000);

  

   // Display 7
 
  for (int i = 0; i < 8; i++) {
    digitalWrite(ledPins[i], seven[i]);
  }
  delay(1000);

    // Display 8
 
  for (int i = 0; i < 8; i++) {
    digitalWrite(ledPins[i], eight[i]);
  }
  delay(1000);

    // Display 9
 
  for (int i = 0; i < 8; i++) {
    digitalWrite(ledPins[i], nine[i]);
  }
  delay(1000);

}
