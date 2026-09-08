const int pinLedRojo = 23;
const int pinLedVerde = 22;
const int pinPulsador = 4;

void setup() {
  Serial.begin(115200);

  // Configurar los pines de los LEDs como OUTPUT
  pinMode(pinLedRojo, OUTPUT);
  pinMode(pinLedVerde, OUTPUT);

  // Configurar el pin del pulsador como INPUT
  pinMode(pinPulsador, INPUT);
}

void loop() {
  // Leer el estado del pulsador
  int estadoPulsador = digitalRead(pinPulsador);

  if (estadoPulsador == HIGH) {
    // Encender LED Rojo y apagar LED Verde
    digitalWrite(pinLedRojo, HIGH);
    digitalWrite(pinLedVerde, LOW);

    Serial.println("Pulsador PRESIONADO: LED Rojo ENCENDIDO");
  } else {
    // Apagar LED Rojo y encender LED Verde
    digitalWrite(pinLedRojo, LOW);
    digitalWrite(pinLedVerde, HIGH);

    Serial.println("Pulsador SOLTADO: LED Verde ENCENDIDO");
  }

  delay(100);
}