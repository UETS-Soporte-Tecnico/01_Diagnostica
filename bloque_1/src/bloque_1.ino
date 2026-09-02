const int pinLedRojo = 23;
const int pinLedVerde = 22;
const int pinPulsador = 21;

void setup() {
  Serial.begin(115200);
pinMode(pinLedRojo, OUTPUT);
pinMode(pinLedVerde, OUTPUT);
pinMode(pinPulsador, INPUT);
  
}

void loop() {
  digitalRead(pinPulsador);
  int estadoPulsador = digitalRead(pinPulsador); 
  
  if (estadoPulsador == HIGH) {
    digitalWrite(pinLedRojo, HIGH);
    digitalWrite(pinLedVerde, LOW);
    
    Serial.println("Pulsador PRESIONADO: LED Rojo ENCENDIDO");
  } else {
    digitalWrite(pinLedRojo, LOW );
    digitalWrite(pinLedVerde, HIGH );
    
    Serial.println("Pulsador SOLTADO: LED Verde ENCENDIDO");
  }
  
  delay(100);
}
