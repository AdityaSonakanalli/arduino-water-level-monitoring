// Arduino Water Level Monitoring System

const int WATER_SENSOR = A0;

const int GREEN_LED = 8;
const int YELLOW_LED = 9;
const int RED_LED = 10;

void setup() {
  pinMode(GREEN_LED, OUTPUT);
  pinMode(YELLOW_LED, OUTPUT);
  pinMode(RED_LED, OUTPUT);

  Serial.begin(9600);
}

void loop() {

  int waterLevel = analogRead(WATER_SENSOR);

  Serial.print("Water Level: ");
  Serial.println(waterLevel);

  if (waterLevel < 300) {

    digitalWrite(GREEN_LED, HIGH);
    digitalWrite(YELLOW_LED, LOW);
    digitalWrite(RED_LED, LOW);

  }
  else if (waterLevel < 700) {

    digitalWrite(GREEN_LED, LOW);
    digitalWrite(YELLOW_LED, HIGH);
    digitalWrite(RED_LED, LOW);

  }
  else {

    digitalWrite(GREEN_LED, LOW);
    digitalWrite(YELLOW_LED, LOW);
    digitalWrite(RED_LED, HIGH);
  }

  delay(1000);
}
