const int pinPot = 34;

void setup() {
  Serial.begin(115200);
}

void loop() {
  int lecturaADC = analogRead(pinPot);
  float voltaje = (lecturaADC * 3.3) / 4095.0;
  
  Serial.print("ADC: ");
  Serial.print(lecturaADC);
  Serial.print(" | Voltaje: ");
  Serial.print(voltaje, 2);
  Serial.println("V");
  
  delay(500);
}
