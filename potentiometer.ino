int analogInPin = A0;

int sensorValue = 0;

void setup() {
  Serial.begin(9600);
  }

void loop() {
  sensorValue = analogRead(analogInPin);
  
  Serial.print("sensor = ");
  Serial.print(sensorValue);
  Serial.println();
  
  delay(2);
  }
