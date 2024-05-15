# Smart Blind Stick

## Description
This Arduino-based project monitors soil moisture levels and measures distances using ultrasonic sensors. It activates a buzzer and LED indicators based on specific conditions related to moisture and proximity.

## Hardware Requirements
- Ultrasonic sensor
- Moisture sensor
- Buzzer
- LEDs
- Arduino board
- Jumper wires

## Wiring Instructions
Connect the components to the Arduino board as follows:

1. trigPin -> Ultrasonic Sensor Trig Pin
2. echoPin -> Ultrasonic Sensor Echo Pin
3. buzzer -> Buzzer Pin
4. moisturePin -> Moisture Sensor Pin
5. ledPin -> LED Pin
6. powerIndicatorPin -> Power Indicator Pin


## Setup
1. Upload the provided Arduino sketch to your Arduino board using the Arduino IDE.
2. Connect the hardware components according to the wiring instructions.
3. Power on the Arduino board.

## Usage
- The ultrasonic sensor measures distances within its range.
- The moisture sensor detects soil moisture levels.
- The buzzer sounds for 5 seconds if an object is detected within 80 units of distance.
- The buzzer sounds for 10 seconds if the soil moisture level is below 21.
- The LED lights up if either condition is met.

## Troubleshooting
- Ensure the wiring connections are correct.
- Check the sensor placements and their surroundings.
- Verify that the Arduino sketch is uploaded correctly.

## Contributions
Contributions are welcome! Fork the repository, make improvements, and create a pull request.

## License
This project is licensed under the [MIT License](link-to-license).
