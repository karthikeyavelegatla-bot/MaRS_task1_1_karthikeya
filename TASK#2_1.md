## IR-Based Counter with LCD Display (Arduino)

I implemented an IR-based counter system with LCD display using an Arduino. The objective was to detect objects using an IR sensor and display the count on an I2C-based LCD.

I started working at around 7:40 PM and completed the initial coding by 9:00 PM. During testing, I encountered an issue where the counter was continuously increasing without stopping. I resolved this by introducing two variables, `currentMotionState` and `lastMotionState`, to detect state changes instead of continuous signals.

After fixing the IR sensor logic, the sensor worked correctly, but the LCD did not display any output. I installed the required I2C LCD library, but the issue persisted. Upon consulting a senior, I tried shorting the pins on the I2C converter, which turned on the backlight, but still no text was displayed.

Finally, I replaced the I2C module and LCD with a new set, after which the system worked correctly, displaying the counter as expected.

At the end, a short viva was conducted on the Arduino code and working.

### Components Used
- Arduino board  
- IR sensor  
- I2C converter module  
- LCD display
