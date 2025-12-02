int led1 = 2;
int led2 = 3;
int led3 = 4;
int led4 = 5;                        // Define LED pins              

int button = 6;


// Define button assignments 
void setup() {
  // Set LED pins as outputs
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);                
  pinMode(led4, OUTPUT);

  // Set button pin as input with pull-up resistor
  pinMode(button, INPUT_PULLUP);
}

void loop() {
  // Check if button is pressed
  if (digitalRead(button) == LOW) {
    // The waiting for button release
    while (digitalRead(button) == LOW) {
      delay(10);
    }

    // Forward LED sequence
    digitalWrite(led1, HIGH);
    delay(500);
    digitalWrite(led1, LOW);

    digitalWrite(led2, HIGH);
    delay(500);
    digitalWrite(led2, LOW);

    digitalWrite(led3, HIGH);
    delay(500);
    digitalWrite(led3, LOW);

    digitalWrite(led4, HIGH);
    delay(500);
    digitalWrite(led4, LOW);

    // Backward LED sequence
    digitalWrite(led3, HIGH);
    delay(500);
    digitalWrite(led3, LOW);

    digitalWrite(led2, HIGH);
    delay(500);
    digitalWrite(led2, LOW);

    digitalWrite(led1, HIGH);
    delay(500);
    digitalWrite(led1, LOW);
  }
}

