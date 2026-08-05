int rojo = 8;
int amarillo = 9;
int verde = 10;

void setup() {
  pinMode(rojo, OUTPUT);
  pinMode(amarillo, OUTPUT);
  pinMode(verde, OUTPUT);
}

void loop() {

  // Verde encendido
  digitalWrite(verde, HIGH);
  digitalWrite(amarillo, LOW);
  digitalWrite(rojo, LOW);
  delay(5000);

  // Amarillo parpadea 3 veces
  digitalWrite(verde, LOW);

  for (int i = 0; i < 3; i++) {
    digitalWrite(amarillo, HIGH);
    delay(500);
    digitalWrite(amarillo, LOW);
    delay(500);
  }

  // Rojo encendido
  digitalWrite(rojo, HIGH);
  delay(5000);
}