// This #include statement was automatically added by the Particle IDE.
#include <Adafruit_DHT.h>

DHT dht(A0,DHT11);

int led = D7;

void setup() {
pinMode(led,OUTPUT);
dht.begin();
}

void loop() {
    
    digitalWrite(led,HIGH);  // This is to turn on the LED
    
    float temp = dht.getTempCelcius();
    Particle.publish("temp", String(temp),PRIVATE);
    delay(2000);
    
    
    digitalWrite(led, LOW);
    delay(2000);
}