const int pinPot = 34;

void setup() {
  Serial.begin(115200);
}

void loop() {
  // CHECK: Valor del potenciómetro leído mediante analogRead
  int lecturaADC = analogRead(pinPot);

  // CHECK: Lectura de 12 bits convertida de 0-4095 a 0-3.3 V
  float voltaje = lecturaADC * (3.3 / 4095.0);
  
  Serial.print("ADC: ");
  Serial.print(lecturaADC);
  Serial.print(" | Voltaje: ");
  Serial.print(voltaje, 2);
  Serial.println("V");
  
  delay(500);
}
