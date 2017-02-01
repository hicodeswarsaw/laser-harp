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
Remember lasers must be aimed carefully so that their beam hit each photodiode or photoresistor!


<b> Laser diodes: A note on safety - For this project, you should not use any laser module with an output more powerful than 5mw, 
and never look directly into any laser. </b>


<b> Install Arduino Software </b>

Download Arduino software from the Arduino website: http://arduino.cc
If you’ve not used an Arduino before, you’ll want to spend some time familiarizing yourself with the
basics. Check out the Arduino website for some great beginner tutorials.

</b> Install the tone library </b>

Save the tone.h file to your desktop, then use the instructions to import the library into the Arduino IDE.
Instructions: https://www.arduino.cc/en/Guide/Libraries#toc4



