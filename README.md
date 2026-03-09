# Project 01: Arduino IDE Setup

**Project Type:** Embedded Systems / Arduino  

---

## 1. Overview
This project demonstrates the installation and setup of the **Arduino IDE**, connection of the **Arduino UNO**, and uploading the first **Blink sketch** to verify that the hardware and software environment works correctly.

The Blink program makes the onboard LED on the Arduino UNO blink every second.

This project acts as the **foundation for future Arduino and robotics projects**.

---

## 2. Motivation
Before starting complex embedded systems projects, it is important to confirm that:

- The Arduino IDE is correctly installed
- The Arduino board communicates with the computer
- Code can be successfully uploaded to the microcontroller

The Blink program is the simplest way to verify this setup.

---

## 3. Hardware Requirements

| Component | Specification | Quantity | Purpose |
|-----------|--------------|----------|---------|
| Arduino UNO | ATmega328P | 1 | Microcontroller board |
| USB Cable | Standard | 1 | Board-PC communication |

---

## 4. Software Requirements

- Arduino IDE  
- Proteus (for simulation)

---

## 5. Project Structure

```
arduino-ide-setup
│
├── README.md
├── docs
│ ├── design
│ │ ├── circuit_diagram.png
│ │ └── block_diagram.png
│ └── notes.md
│
├── src
│ ├── arduino-ide-setup.ino
│ ├── blink_led.h
│ └── blink_led.cpp
│
├── assets
│ ├── images
│ │ └── project_photo.jpg
│ └── videos
│ └── demo.mp4
```

---

## 6. Circuit Design
This project uses the **onboard LED connected to digital pin 13** of the Arduino UNO.

No external components are required.

System connection:

Arduino UNO → Digital Pin 13 → Onboard LED

---

## 7. Implementation Steps

1. Install the Arduino IDE on the computer  
2. Connect the Arduino UNO using a USB cable  
3. Select the correct **Board** and **COM Port** in Arduino IDE  
4. Open the Blink example sketch  
5. Upload the code to the Arduino board  
6. Verify that the LED on pin 13 blinks every second  

---

## 8. Code
The program controls digital pin **13** to turn the LED ON and OFF with a one-second delay.

The full source code is available in the **src** folder.

---

## 9. Results / Output

- The onboard LED blinks every second  
- Arduino successfully communicates with the computer  
- The program runs correctly on the Arduino UNO  

Images and demo video are available in the **assets** folder.

---

## 10. Simulation
The project can also be simulated using **Proteus** to verify the circuit behavior.

---

## 11. Troubleshooting

**Arduino not detected**
- Install the correct USB drivers.

**COM port mismatch**
- Select the correct port in Arduino IDE.

**Upload error**
- Check USB cable connection and board selection.

---

## 12. Skills Learned

- Arduino IDE installation and configuration  
- Microcontroller hardware setup  
- Uploading programs to Arduino boards  
- Understanding digital output pins  
- Basic troubleshooting of embedded systems  
- Introduction to Proteus simulation  

---

## 13. Future Work

- Add sensor inputs  
- Use Serial Monitor for data reading  
- Build more advanced Arduino projects  
- Expand the project into a complete Arduino tutorial  

---

## 14. Author

* Name: Fahad Al Pranto
* Email: fahadpranto9@gmail.com
* Mentor: [Engr. Jimmy Majumder](https://sites.google.com/view/jimmy-majumder/)

---

## 15. License

MIT License


