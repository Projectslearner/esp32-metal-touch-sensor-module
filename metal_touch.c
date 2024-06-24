/*
    Project name: ESP32 Metal Touch Sensor
    Modified Date: 24-06-2024
    Code by: Projectslearner
    Website: https://projectslearner.com/learn/esp32-metal-touch-sensor
*/

const int touchPin = T0; // GPIO pin connected to the touch sensor
bool isMetalTouched = false; // Variable to store touch status

void setup() {
  Serial.begin(9600); // Initialize serial communication
  touchAttachInterrupt(touchPin, touchHandler, 40); // Attach touch interrupt handler
}

void loop() {
  // Check if metal is currently touched
  if (isMetalTouched) {
    Serial.println("Metal touched!");
  } else {
    Serial.println("No metal touch detected.");
  }

  delay(1000); // Delay before next reading
}

// Touch interrupt handler function
void touchHandler() {
  isMetalTouched = !isMetalTouched; // Toggle touch status
}
