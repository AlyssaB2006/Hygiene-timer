int HandIN = 10;
int BrushIN = 13;
int BrushOUT1 = 5;
int BrushOUT2 = 2;
int BrushOUT3 = 3;
int Red = 4;
int Buzz = 12;

void setup() {

pinMode(10, INPUT);
pinMode(13, INPUT);
pinMode(5, OUTPUT);
pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(12, OUTPUT);

}

void loop() {

int HandState = digitalRead(HandIN);
int BrushState = digitalRead(BrushIN);

if(HandState == HIGH){
  for(int i=1; i<=10; i++){
    digitalWrite(BrushOUT1, HIGH);
    delay(500);
    digitalWrite(BrushOUT2, HIGH);
    delay(500);
    digitalWrite(BrushOUT3, HIGH);
    delay(500);
    off();
  }
  end();
}

if(BrushState == HIGH){
  for(int k=1; k<=15; k++){
    digitalWrite(BrushOUT1, HIGH);
    delay(1000);
    digitalWrite(BrushOUT1, LOW);
    delay(1000);
  }
  digitalWrite(BrushOUT1, HIGH);
  for(int y=1; y<=15; y++){
    digitalWrite(BrushOUT2, HIGH);
    delay(1000);
    digitalWrite(BrushOUT2, LOW);
    delay(1000);
  }
  digitalWrite(BrushOUT2, HIGH);
  for(int s=1; s<=15; s++){
    digitalWrite(BrushOUT3, HIGH);
    delay(1000);
    digitalWrite(BrushOUT3, LOW);
    delay(1000);
  }
  digitalWrite(BrushOUT3, HIGH);
  end();
  off();
}

}

void end(){
  digitalWrite(Red, HIGH);
  tone(Buzz, 554);
  delay(500);
  digitalWrite(Red, LOW);
  delay(500);
  digitalWrite(Red, HIGH);
  tone(Buzz, 494);
  delay(500);
  digitalWrite(Red, LOW);
  delay(500);
  digitalWrite(Red, HIGH);
  tone(Buzz, 440);
  delay(1000);
  off();
}

void off(){
  digitalWrite(BrushOUT1, LOW);
  digitalWrite(BrushOUT2, LOW);
  digitalWrite(BrushOUT3, LOW);
  digitalWrite(Red, LOW);
  noTone(Buzz);
  delay(500);
}
