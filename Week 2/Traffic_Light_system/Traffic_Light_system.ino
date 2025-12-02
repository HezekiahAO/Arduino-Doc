int red1 = 4;
int yellow = 13;
int green1 = 8;

int red2 = 12;
int green2 = 7;

int button = 2;

void setup() {
  pinMode(red1, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green1, OUTPUT);
  pinMode(red2, OUTPUT);
  pinMode(green2, OUTPUT);

  pinMode(button, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(button) == LOW) {      
    while (digitalRead(button) == LOW) {
      delay(10);
    }
    
for (int i = 0; i < 3; i++) {

    // FIRST PART
    digitalWrite(red1, HIGH);
    digitalWrite(green2, HIGH);
    delay(4000);
    digitalWrite(red1, LOW);
    digitalWrite(green2, LOW);
    delay(1000);

    // YELLOW
    digitalWrite(yellow, HIGH);
    delay(4000);
    digitalWrite(yellow, LOW);

    // SECOND PART
    digitalWrite(green1, HIGH);
    digitalWrite(red2, HIGH);
    delay(5000);
    digitalWrite(green1, LOW);
    digitalWrite(red2, LOW);
}
  }
}

