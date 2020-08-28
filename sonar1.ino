
#define IO_PIN_2 2
#define IO_PIN_4 4

const int TRIGGER_PIN = IO_PIN_4;
const int ECHO_PIN = IO_PIN_2;
int pingTravelTime;

void setup() {
  pinMode(TRIGGER_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(TRIGGER_PIN, LOW);
  delayMicroseconds(10);
  digitalWrite(TRIGGER_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIGGER_PIN, LOW);
  pingTravelTime = pulseIn(ECHO_PIN, HIGH);
  delay(25);
  Serial.println(pingTravelTime);
}
