#define trigPin 2
#define echoPin 3
#define buzzer 4
#define moisturePin A0
#define ledPin 5
#define powerIndicatorPin 13

long ultrasonicDuration;
int ultrasonicDistance;
int moistureData;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(moisturePin, INPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(powerIndicatorPin, OUTPUT);

  Serial.begin(9600);

  // Turn on power indicator LED
  digitalWrite(powerIndicatorPin, HIGH);
}

void loop() {
  // Ultrasonic Sensor
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  ultrasonicDuration = pulseIn(echoPin, HIGH);
  ultrasonicDistance = ultrasonicDuration * 0.034 / 2;
  Serial.print("Ultrasonic Distance: ");
  Serial.println(ultrasonicDistance);

  // Moisture Sensor
  moistureData = analogRead(moisturePin);
  Serial.print("Moisture Data: ");
  Serial.println(moistureData);

  // Buzzer and LED Control
  if (ultrasonicDistance <= 80) {
    digitalWrite(buzzer, HIGH);
    delay(5000);  // Sound for 5 seconds
    digitalWrite(buzzer, LOW);
  } else if (moistureData < 21) {
    digitalWrite(buzzer, HIGH);
    delay(10000); // Sound for 10 seconds
    digitalWrite(buzzer, LOW);
  }

  // Control LED based on both conditions
  if (ultrasonicDistance <= 80 || moistureData < 21) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }

  delay(1000); // Delay a little bit to improve simulation performance
}
