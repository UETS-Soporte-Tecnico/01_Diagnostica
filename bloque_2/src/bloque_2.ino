const int pinPot = 34;

void setup() {
  Serial.begin(115200);
}

void loop() {

  // Leer el valor del potenciómetro
  int lecturaADC = analogRead(pinPot);

  // Convertir ADC a voltaje
  float voltaje = lecturaADC * (3.3 / 4095.0);

  Serial.print("ADC: ");
  Serial.print(lecturaADC);

  Serial.print(" | Voltaje: ");

  Serial.print(voltaje, 2);

  Serial.println("V");

  delay(500);
}