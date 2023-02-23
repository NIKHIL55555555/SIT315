int PIRSensor = 4;
int MoistureSensor = 5;
bool State = false;

void setup()
{
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(PIRSensor, INPUT);

attachInterrupt(digitalPinToInterrupt(PIRSensor), Motion, CHANGE);


  pinMode(MoistureSensor, INPUT);

  
 attachInterrupt(digitalPinToInterrupt(MoistureSensor), Moisture_Sensor, RISING);
}

void loop()
{
  Motion();
  Moisture_Sensor();
  delay(2000);
}

void Motion()
{
  State = !State;
  digitalWrite(LED_BUILTIN, State);
  Serial.println("PIR Motion Sensor Interrupt");
}

void Moisture_Sensor()
{
  Serial.println("Soil Moisture Sensor Interrupt");
}
