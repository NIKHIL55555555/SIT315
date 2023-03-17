int Sensor_State = 0;

void setup ()
{
  pinMode (3, INPUT);
  pinMode (LED_BUILTIN, OUTPUT);
  Serial.begin (9600);
}

void loop ()
{
  Sensor_State = digitalRead(3);

  if (Sensor_State == HIGH) {
    digitalWrite (LED_BUILTIN, HIGH);
    Serial.println("sensor is detecting some motion!");
} 
  else 
{
digitalWrite (LED_BUILTIN, LOW);
}
delay (50);
}
