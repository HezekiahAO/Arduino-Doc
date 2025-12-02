int p = 10;
bool up = 1;

void setup(){
  
  Serial.begin(115200);
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(2, INPUT_PULLUP);
}

void loop(){
  int buttonState = digitalRead(2);
    Serial.println(buttonState);
    
    
    if (buttonState == LOW) {
        digitalWrite(p, HIGH);
        delay(1000);
        digitalWrite(p, LOW);
        if (up) {
          p++;
          if (p == 13) { up = 0; }
       }
        else {
          p--;
          if (p == 10) { up = 1;}
          }
        }
    }
   
