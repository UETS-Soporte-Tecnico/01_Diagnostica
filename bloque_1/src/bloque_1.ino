const int pinLedRojo = 23;
const int pinLedVerde = 22;
const int pinPulsador = 4;

void setup() {
  Serial.begin(115200);
  // TODO: Configurar los pines de los LEDs como OUTPUT
  pinMode(pinLedRojo, OUTPUT);
  pinMode(pinLedVerde, OUTPUT);
  // TODO: Configurar el pin del pulsador como INPUT
  pinMode(pinPulsador, INPUT);
}

void loop() {
  // TODO: Leer el estado del pulsador usando digitalRead
  int estadoPulsador = digitalRead(pinPulsador);
  
  if (estadoPulsador == HIGH) {
    // TODO: Encender LED Rojo y apagar LED Verde
    digitalWrite(pinLedRojo, 1);
    digitalWrite(pinLedVerde, 0);
    Serial.println("Pulsador PRESIONADO: LED Rojo ENCENDIDO");
  } else {
    // TODO: Apagar LED Rojo y encender LED Verde
    digitalWrite(pinLedRojo, 0);
    digitalWrite(pinLedVerde, 1);
    Serial.println("Pulsador SOLTADO: LED Verde ENCENDIDO");
  }
  
  delay(100);
}
