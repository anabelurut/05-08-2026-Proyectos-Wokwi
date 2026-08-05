const int potPin = A0;
const int ledVerde = 8;
const int ledRojo = 9;

int valorRuido;

void setup() {
 pinMode(ledVerde, OUTPUT);
 pinMode(ledRojo, OUTPUT);

 Serial.begin(9600);
}

void loop() {

 valorRuido = analogRead(potPin);

 Serial.print("Nivel de ruido: ");
 Serial.println(valorRuido);

 // Umbral
 if (valorRuido > 600) {
   digitalWrite(ledRojo, HIGH);
   digitalWrite(ledVerde, LOW);
 }
 else {
   digitalWrite(ledRojo, LOW);
   digitalWrite(ledVerde, HIGH);
 }

 delay(100);
}