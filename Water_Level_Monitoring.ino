// Arduino Water Level Monitoring System

const int WATER_SENSOR = A0;

const int GREEN_LED = 8;
const int YELLOW_LED = 9;
const int RED_LED = 10;

// Water level threshold values
const int LOW_THRESHOLD = 300;
const int HIGH_THRESHOLD = 700;

// Number of readings used for averaging
const int SAMPLE_COUNT = 5;

void setup() {
  pinMode(GREEN_LED, OUTPUT);
  pinMode(YELLOW_LED, OUTPUT);
  pinMode(RED_LED, OUTPUT);

  Serial.begin(9600);
}

void loop() {

  // Take multiple sensor readings
  long total = 0;

  for (int i = 0; i < SAMPLE_COUNT; i++) {
    total += analogRead(WATER_SENSOR);
    delay(20);
  }

  // Calculate average sensor reading
  int waterLevel = total / SAMPLE_COUNT;

  Serial.print("Water Level: ");
  Serial.println(waterLevel);

  // Low water level
  if (waterLevel < LOW_THRESHOLD) {

    digitalWrite(GREEN_LED, HIGH);
    digitalWrite(YELLOW_LED, LOW);
    digitalWrite(RED_LED, LOW);
  }

  // Medium water level
  else if (waterLevel < HIGH_THRESHOLD) {

    digitalWrite(GREEN_LED, LOW);
    digitalWrite(YELLOW_LED, HIGH);
    digitalWrite(RED_LED, LOW);
  }

  // High water level
  else {

    digitalWrite(GREEN_LED, LOW);
    digitalWrite(YELLOW_LED, LOW);
    digitalWrite(RED_LED, HIGH);
  }

  delay(1000);
}
