# Laser Harp 

This is a project of the Laser Harp.

<b> General info </b>

The funcionality is simple: a set of laser pointers are aimed at a series of photoresistors or photodiodes, which are hooked 
up to the input pins on an Arduino. The Arduino is running a program that detects any interruptions in the beams and plays 
the note corresponding to that sensor. The harp is played by “plucking” the laser strings; i.e., 
blocking the path of the laser.

For this version, the Arduino itself produces the audio, and a piezo speaker is connected directly to the Arduino. 
These instructions describe how to build a five-string harp, which allows us to use the smaller Arduino Uno. 
Adding more strings is easy: the Uno can handle up to five sensors; more than that will require an Arduino with more input pins, such as the Mega.

<b> How it works </b>

The laser-detecting circuits use a photoresistor paired with a resistor to create a voltage divider. 
A change in resistance in one of the resistors creates a change in voltage. 
The photoresistor’s resistance changes according to the intensity of the light hitting it; the brighter the light, the lower the resistance.
Each sensor circuit is hooked up to an analog input pin. 
The pin reads variations in voltage and translates them to a value from 0 to 1023, which can be read by the Arduino program (or sketch) running on the device. 
Depending on the value, the sketch will determine if the laser is hitting the sensor.

<b> Essential </b>

You will need:

1. Laser modules
2. SFH203 visible light photodiodes or photoresistors 
3. Set of resistors (which you'll use depends on your lasers and photodiodes / photoresistors )
4. Piezo speaker
5. A reasonably sized breadboard
6. Set of cables (m-m & m-f & f-f)
7. Arduino Uno
8. USB cable 
9. Simple box where you can drill whole and put all things together. 


<b> Laser diodes: A note on safety - For this project, you should not use any laser module with an output more powerful than 5mw and never look directly into any laser. </b>


<b> Install Arduino Software </b>

Download Arduino software from the Arduino website: http://arduino.cc
If you’ve not used an Arduino before, you’ll want to spend some time familiarizing yourself with the basics. 
Check out the Arduino website for some great beginner tutorials.

</b> Install the tone library </b>

Save the tone.h file to your desktop, then use the instructions to import the library into the Arduino IDE.
Instructions: https://www.arduino.cc/en/Guide/Libraries#toc4

<b> Buildin the circuit </b>

This is an easy circuit to assemble using a solderless breadboard. 
Hook up the resistors, photoresistors and piezo speaker as shown in the illustration in folder (circuit.png) , using jumper wires to connect each sensor circuit to the analog inputs on your Arduino.


<b> Programming the Arduino </b>

Next we’ll upload the Arduino sketch (laser.harp.ino) to the device. Connectyour Arduino to your computer using a USB  cable and make sure the right board and serial port are selected (see the appropriate “Getting Started” section for your operating system: http://arduino.cc/en/Guide/HomePage).

Open the “LaserHarp.ino” file with your Arduino software and upload it to the board.
Some LEDs should blink on the Arduino board, and after a few moments, you should see “Done Uploading” in the console area of the Arduino software. 

Your sketch should now be running!

<b> Testing Without a Laser </b>

Using only the ambient light in the room, we can test the harp's sensors before setting up the lasers.
Test each sensor by putting a finger over it: When a sensor is blocked, you should hear a tone. 
When you remove your finger, the tone should stop. Move your finger from sensor to sensor. You should hear a series of notes (a different note for each sensor).

<b> Troubleshooting </b>

If it’s not working...

1) Check all connections. Make sure all components and jumper wires are in the appropriate rows in the solderless breadboard. Make sure you’ve connected to the correct pins on the Arduino.

2) Use a multimeter to test your circuit. Hook it up in voltage testing mode to test the voltage coming from each photoresistor 

3) Use a multimeter to test the resistance of the photoresistors. A fully blocked photoresistor should be in the same ballpark as the fixed (non-photo) resistor in the voltage divider circuit. If the resistance is significantly different (e.g., 10K vs. 100K), try to find a photoresistor in the correct range. Otherwise, replace the fixed resistor with one of a similar value as the blocked photoresistor.

<b> Laser time! </b>

Once you have everything working, it’s time to set up the lasers. (You might want to power down the Arduino for now by unplugging its USB cable.)
There is any number of ways to position the lasers, as long as each beam points at one of the sensors. 
The possibilities are endless. For this tutorial I used simple box.
In any case, the lasers must be aimed carefully so that they hit each photoresistor!
Power on the Arduino by plugging in the USB cable (you can also use a 9V battery, plugged in using a barrel connector).

<b> Play Your Harp </b>

Place your hand in the path of one of the three lasers. You should hear a note play. When you move it out of the path, the note should stop. As you move your hand from beam to beam, you should hear a series of notes, with each laser “string” playing a different note.











