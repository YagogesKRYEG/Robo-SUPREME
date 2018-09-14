void setup() {
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop() {
  circulo();
 
}

void circulo() {
  analogWrite(5, 80);
  digitalWrite(6, HIGH);
  analogWrite(9, 80);
  digitalWrite(10, LOW);
  
  }
