# Mars_Task1
## By Aadithya Narayanan R R B
So basic idea behind the coding for the tinkercad models.
Sectiona_1
We are using the concept of millis(). This function helps us separately govern three leds, each having separate time intervals between turning on and off. This would not be the case with delay() as the function pauses all work of the microcontroller. 
Logic behind this is, it continously checks current time and compares with last recorded time of each led. When interval is reached, the LED is turned opposite of the state it is in.
Sectiona_2
We uses a potentiometer to control both an RGB LED color and the blinking speed of a LED. The potentiometer value is read and divided into ranges to set the RGB LED to three colours (blue, green and red). The LED blinks faster or slower depending on the knob position. The LED is turned ON briefly, then OFF for a variable time to create the blinking effect. Thus, one input controls both color selection and blink speed simultaneously.
Sectiona_3
We basically use a button and an led. We use a random function to turn the LED on in an interval between 2-5 seconds. The measured time starts immediately from the turn on of the LED. The reaction time is the time taken for the button to be pressed from the turn on of the led. We use millis() for this as well. The reaction time is displayed on the serial monitor.
Sectionb_project1
We use a PIR sensor that detects movement. With that as input, when the movement reads high, led is turned ON and the buzzer buzed. The movement stops, then the buzzing and LED stop as well. This is what I felt is the basic idea of a security or a movement sensor.
Sectionb_project2
This system uses the temperature as input. NPN transistor is used as a switches in this case. The diode is added to prevent the transistor from experiencing voltage spikes when the motor is turned off. When the temperature is above a certain threshold value, the motor begins to run (it is to resemble a fan that turns on above a certain temperature.)

