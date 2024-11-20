# LED Flip-Flop Assignment

## Objective
Create a program that toggles two LEDs connected to an Arduino Uno in a flip-flop pattern using the Wokwi simulator.

---

## Steps to Complete the Assignment

### 1. Set Up
1. **Open in GitHub Codespaces**:
   - Click **"Open in Codespaces"** on the repository.
   - Wait for the environment to initialize automatically.

2. **Test the Circuit**:
   - Open `wokwi/diagram.json` in the Wokwi simulator.
   - Verify the circuit:
     - Red LED connected to pin 13.
     - Green LED connected to pin 12.

---

### 2. Write the Code
1. Open `src/main.cpp`.
2. Write the logic to:
   - Blink the red LED while the green LED is off.
   - Alternate the state every 500ms.

---

### 3. Simulate
1. Open `wokwi/diagram.json` in the Wokwi simulator.
2. Upload the compiled `main.cpp` code to the simulator.
3. Verify the flip-flop behavior of the LEDs.

---

### 4. Modify and Submit
1. Add a third LED to the circuit by editing `wokwi/diagram.json`.
2. Update your code in `src/main.cpp` to control the third LED.
3. Submit the following:
   - Updated `src/main.cpp`.
   - Updated `wokwi/diagram.json`.
   - A screenshot of your Wokwi simulation showing the working circuit.

---

### Resources
- [Wokwi Simulator](https://wokwi.com/)
- [PlatformIO Documentation](https://platformio.org/)

---
