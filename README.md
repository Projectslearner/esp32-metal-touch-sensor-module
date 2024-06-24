# ESP32 Metal Touch Sensor Project

## Project Overview
The ESP32 Metal Touch Sensor project demonstrates how to create a touch-sensitive metal detection system using the ESP32 microcontroller. This project utilizes the capacitive touch sensing feature of the ESP32 to detect when a conductive metal object touches or approaches the sensor.

## Components Needed
- ESP32 Microcontroller
- Capacitive Touch Sensor (T0 pin on ESP32)
- Metal Object (conductive)
- Jumper Wires
- Breadboard

## Circuit Setup
1. **Connecting the Capacitive Touch Sensor to ESP32:**
   - **Touch Sensor Pin:** Connect the touch sensor pin (T0) directly to a conductive metal object or a metal plate.
   - **Ground and Power:** Ensure the ESP32 is properly powered, and the touch pin is configured to detect changes in capacitance due to metal proximity.

## Instructions
1. **Setup:**
   - Initialize serial communication in the `setup()` function with `Serial.begin(9600)` for debugging purposes.
   - Attach an interrupt handler to the touch pin using `touchAttachInterrupt(touchPin, touchHandler, threshold)`, where `touchPin` is T0, `touchHandler` is the function handling touch events, and `threshold` is the sensitivity threshold (optional).

2. **Operation:**
   - In the `loop()` function:
     - Check the status of `isMetalTouched` to determine if a metal object is currently touching or near the sensor.
     - Print corresponding messages to the Serial Monitor based on whether metal is detected or not.

3. **Considerations:**
   - **Sensitivity:** Adjust sensitivity thresholds in the touch handler or via touch sensor settings to optimize detection based on the project's requirements.
   - **Grounding:** Ensure the metal object or plate connected to the touch sensor is grounded properly to prevent false triggers and improve stability.
   - **Testing:** Experiment with different metal objects and distances to calibrate the sensor for reliable operation.

## Applications
- **Proximity Sensing:** Detect the presence of metallic objects without physical contact, suitable for security systems or interactive installations.
- **Human Interface:** Implement touch-sensitive controls or interfaces where metal objects serve as inputs.
- **Automation:** Integrate into machinery or automation systems to trigger actions based on metal detection.

## Notes
- **Capacitive Sensing:** Capacitive touch sensors detect changes in capacitance caused by conductive objects, making them suitable for non-contact detection applications.
- **Interrupt Handling:** Utilize interrupt capabilities of the ESP32 to respond immediately to touch events, minimizing processing overhead in the main loop.

---

## Useful Links
🌐 [ProjectsLearner - ESP32 Metal Touch Sensor](https://projectslearner.com/learn/esp32-metal-touch-sensor)  
📧 [Email](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)

Created with ❤️ by ProjectsLearner