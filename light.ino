void setup()

{

Serial.begin(9600);

}

void loop()

{


int AnalogValue = analogRead(A0);

Particle.publish("light", String(AnalogValue), PRIVATE);

delay(30000);

}