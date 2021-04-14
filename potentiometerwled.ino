int analogInPin = A0;

int sensorValue = 0;


void setup() {
  Serial.begin(9600);
  pinMode(10, OUTPUT);
  pinMode(12, OUTPUT);
  }

void loop() {
  sensorValue = analogRead(analogInPin);
  
  Serial.print("sensor = ");
  Serial.print(sensorValue);
  Serial.println();

  if (sensorValue<500) {
    digitalWrite(10, HIGH);
    digitalWrite(12, LOW);
    } else {
      digitalWrite(12, HIGH);
      digitalWrite(10, LOW);
      }
  
  delay(2);
  }
