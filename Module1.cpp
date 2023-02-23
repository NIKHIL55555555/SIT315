int trigPin = 6; 
int echoPin = 7; 
int led = 3;     


void setup()

{ Serial.begin (9600);

pinMode(trigPin, OUTPUT);

pinMode(echoPin, INPUT);

pinMode(led, OUTPUT);

}

void loop()

{ long duration, distance;

digitalWrite(trigPin, LOW);

delayMicroseconds(3);

digitalWrite(trigPin, HIGH);

delayMicroseconds(10);

digitalWrite(trigPin, LOW);

duration = pulseIn(echoPin, HIGH);

distance = (duration/2) / 29.1;

if (distance < 10)

{ digitalWrite(led,HIGH);

}

else {

digitalWrite(led,LOW);

}

Serial.print(distance);

Serial.println(" cm");

delay(1000);

}
