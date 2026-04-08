# MaRS_task1_1_karthikeya
# Arduino Projects Report

---

##  Project 1: Blinking LEDs with Different Time Intervals

###  What the project does and why you chose it
This project demonstrates controlling multiple LEDs with different blinking intervals using non-blocking timing. It was chosen to understand how to manage multiple tasks simultaneously without using delay, which is important in real-time embedded systems.

---

### Components used and their roles
- **Arduino Uno** – Main controller  
- **LEDs (3)** – Visual output devices  
- **Resistors (220Ω)** – Protect LEDs from excess current  
- **Jumper wires** – Provide electrical connections  

---

### Challenges faced and solutions
- **Challenge:** LEDs were not blinking independently  
  **Solution:** Replaced `delay()` with `millis()` for non-blocking timing  

- **Challenge:** Timing overlap issues  
  **Solution:** Used separate timers for each LED  

---

## Project 2: RGB LED Color & Speed Control using Potentiometer

### What the project does and why you chose it
This project controls the color of an RGB LED and the blinking speed of another LED using a potentiometer. It was chosen to understand analog input and PWM output, which are key concepts in embedded systems.

---

### Components used and their roles
- **Arduino Uno** – Controller  
- **RGB LED** – Produces different colors  
- **LED** – Indicates blinking speed  
- **Potentiometer** – Provides analog input  
- **Resistors** – Current limiting  
- **Jumper wires**

---

### Challenges faced and solutions
- **Challenge:** Incorrect color mixing  
  **Solution:** Used proper PWM values with `analogWrite()`  

- **Challenge:** Mapping analog values  
  **Solution:** Used `map()` function to scale input range  

---

## Project 3: Reaction Time Tester

### What the project does and why you chose it
This project measures how quickly a user responds to a visual signal (LED). It was chosen to learn timing measurement, event-driven programming, and user interaction.

---

### Components used and their roles
- **Arduino Uno** – Controller  
- **LED** – Visual signal indicator  
- **Push button** – User input  
- **Resistor (optional)**  
- **Serial Monitor** – Displays reaction time  

---

### Challenges faced and solutions
- **Challenge:** Incorrect readings due to button noise  
  **Solution:** Implemented debounce logic  

- **Challenge:** Repeated triggering of input  
  **Solution:** Ensured button release before next cycle  

---

## Project 4: Multi-Mode Embedded Control System

### What the project does and why you chose it
This project integrates multiple functionalities such as a reaction game, LED pattern control, and RGB lighting into a single system with mode switching. It was chosen to demonstrate system-level design and finite state machine concepts used in embedded systems.

---

### Components used and their roles
- **Arduino Uno** – Main controller  
- **LEDs (3)** – Used for patterns and reaction game  
- **RGB LED** – Provides color output  
- **Push button** – Used for mode switching and input  
- **Resistors** – Protect components  
- **Jumper wires**

---

### Challenges faced and solutions
- **Challenge:** Managing multiple functionalities  
  **Solution:** Implemented mode-based logic (state machine approach)  

- **Challenge:** Blocking execution due to delays  
  **Solution:** Used `millis()` for non-blocking timing  

- **Challenge:** Mode switching instability  
  **Solution:** Added debounce logic and proper state reset  

---

## Final Summary
These projects helped in understanding fundamental embedded system concepts such as:
- Non-blocking timing (`millis()`)
- Input handling and debouncing
- PWM and analog control
- State machine-based system design

They provide a strong foundation for advanced embedded systems and VLSI-related applications.
