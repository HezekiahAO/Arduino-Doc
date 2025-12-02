int LDR_sensor = A0;
int led1 = 2;
int led2 = 3;
int led3 = 4;
int led4 = 5;

int t1 = 700; 
int t2 = 500; 
int t3 = 400; 
int t4 = 350; 

void setup() {
  Serial.begin(9600);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
}

void loop() {
  int value = analogRead(LDR_sensor);
  Serial.println(value);

  // Turn all LEDs OFF first
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);

  if (value < t4) {
    // Very dark → 4 LEDs on
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
  }
  else if (value < t3) {
    // Dim → 3 LEDs on
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
  }
  else if (value < t2) {
    // Medium → 2 LEDs on
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
  }
  else if (value < t1) {
    // Slightly bright → 1 LED on
    digitalWrite(led1, HIGH);
  }
  // else: bright → 0 LEDs on

  delay(200);
}
