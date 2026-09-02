const int pinPot = 34;

void setup() {
  Serial.begin(115200);
}

void loop() {
  // TODO: Leer el valor del potenciómetro
  int lecturaADC = analogRead(pinPot);
  
  // TODO: Convertir la lectura de 12 bits (0-4095) a Voltaje (0-3.3V)
  float voltaje = (lecturaADC * 3.3) / 4095.0;
  
  Serial.print("ADC: ");
  Serial.print(lecturaADC);
  Serial.print(" | Voltaje: ");
  Serial.print(voltaje, 2);
  Serial.println("V");
  
  delay(500);
}
