const int pinLedRojo = 23;
const int pinLedVerde = 22;
const int pinPulsador = 4;

void setup() {
  Serial.begin(115200);
  // CHECK: Pines de los LEDs configurados como OUTPUT
  pinMode(pinLedRojo, OUTPUT);
  pinMode(pinLedVerde, OUTPUT);

  // CHECK: Pin del pulsador configurado como INPUT
  pinMode(pinPulsador, INPUT);

}

void loop() {
  // CHECK: Estado del pulsador leído mediante digitalRead
  int estadoPulsador = digitalRead(pinPulsador);

  if (estadoPulsador == HIGH) {
    // CHECK: LED Rojo encendido y LED Verde apagado
    digitalWrite(pinLedRojo, HIGH);
    digitalWrite(pinLedVerde, LOW);

    Serial.println("Pulsador PRESIONADO: LED Rojo ENCENDIDO");
  } else {
    // CHECK: LED Rojo apagado y LED Verde encendido
    digitalWrite(pinLedRojo, LOW);
    digitalWrite(pinLedVerde, HIGH);

    Serial.println("Pulsador SOLTADO: LED Verde ENCENDIDO");
  }
  
  delay(100);
}
