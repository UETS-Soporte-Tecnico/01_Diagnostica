const int pinLedRojo = 23;
const int pinLedVerde = 22;
const int pinPulsador = 4;

void setup() {
Serial.begin(115200);


pinMode (pinLedRojo, OUTPUT);
pinMode (pinLedVerde, OUTPUT);

pinMode (pinPulsador, INPUT);
}


void loop() {

int estadoPulsador = digitalRead(pinPulsador);

if (estadoPulsador == HIGH) {

digitalWrite(pinLedRojo, 1);
digitalWrite(pinLedVerde, 0);
Serial.println("Pulsador PRESIONADO: LED Rojo ENCENDIDO");
} else {



    
digitalWrite(pinLedRojo, 0);
digitalWrite(pinLedVerde, 1);
Serial.println("Pulsador SOLTADO: LED Verde ENCENDIDO");
}



delay(100);
}