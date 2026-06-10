#define MOISTURE_SENSOR_PIN 34
#define BUZZER_PIN 25

void setup() {
Serial.begin(115200);

pinMode(BUZZER_PIN, OUTPUT);
digitalWrite(BUZZER_PIN, LOW);
}

void loop() {

int moisture = analogRead(MOISTURE_SENSOR_PIN);

int moisturePercent = map(moisture, 0, 4095, 0, 100);

Serial.print("Moisture: ");
Serial.print(moisturePercent);
Serial.println("%");

if (moisturePercent < 30) {

digitalWrite(BUZZER_PIN, HIGH);
Serial.println("ALERT: Plant needs water!");

} else {

digitalWrite(BUZZER_PIN, LOW);

}

delay(5000);
}
