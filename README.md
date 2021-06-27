# High School Robotics TinyML Machine Learning Curriculum


Started Jun 23rd, 2021

By: Jeremy Ellis, Technology Teacher, BC, Canada

###### Use at your own risk!

### Hopefully this will be ready for my students in February 2022


# This course is for Makers, not, soon to be Engineers! 
Why, because I teach things as simply as possible but not necessarily the correct way. (Although soon to be Engineers are welcome to blast through the course. Seriously, these capable pre-engineering students have sometimes finished my course in under 2 weeks!)

### I use the $ 103.40 USD Arduino Pro [PortentaH7](https://store.arduino.cc/usa/portenta-h7) Dual Core Micro-Controller with the $45.99 USD [Breakout Board](https://store.arduino.cc/usa/portenta-breakout) and $63.00 USD [LoRa Vision Shield](https://store.arduino.cc/usa/portenta-vision-shield-lora)  and/or $47.15 USD [Ethernet Vision Shield](https://store.arduino.cc/usa/portenta-vision-shield), possibly more shields later.

<br><img src="media/ArduinoProBoards.jpg" width = 600/>

Yes they are expensive, ask any teacher (music, shop, sewing, science) why they don't purchase cheap equipment. See other boards below for cheaper, not as good, options. When your Administrator says "Why don't you get the $4 RPI Pico", have an answer ready.

[Course:](#course)  

[Course Description:](#course-description)

[Pre-Understanding:](#pre-understanding) 

[Basic Costs:](#basic-costs)

[Platforms:](#platforms) 

[Other Boards:](#other-boards) 

[Other Languages:](#other-Languages) 

[Post Understanding Activities:](#post-understanding-activites)  

[Course Notes](#course-notes)
 






## Course:

Reminder all code examples are in the [Portenta Pro Community Solutions Library](https://github.com/hpssjellis/portenta-pro-community-solutions) that can be installed onto the Arduino IDE. The examples are [here](https://github.com/hpssjellis/portenta-pro-community-solutions/tree/main/examples). My original Portenta Research github is [here](https://github.com/hpssjellis/my-examples-for-the-arduino-portentaH7)

Note: To edit this table use [https://www.tablesgenerator.com/markdown_tables](https://www.tablesgenerator.com/markdown_tables) File-->Paste Table Data --> Generate --> Copy to Clipboard--> paste back here





| Topic                          | Example Code                                                                                                                                                                 | Youtube Video | Resource Link 1 | Setup Image | To Do |
|--------------------------------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|---------------|-----------------|--------|--------|
| 1. Auto Blink and Serial Print | [a-a-hello-blink.ino](https://github.com/hpssjellis/portenta-pro-community-solutions/blob/main/examples/a-portentaH7-examples/a-a-hello-blink/a-a-hello-blink.ino) |               |                 |   n/a     |    Print other things and change the pattern of blinking using different colors LEDR, LEDG, LEDB, LED_BUILTIN (which is green). Note: I stay away from LEDR as red is used to show errors    |
| 2. Button cause blink          |       [b-b-h-button-control-led](https://github.com/hpssjellis/portenta-pro-community-solutions/blob/main/examples/b-portenta-h7-with-accessories/b-b-actuators/b-b-h-button-control-led/b-b-h-button-control-led.ino)                                                                                                                                                                     |               |                 |  <img src="media/b-b-h-button-control-led.jpg" width = 200/>       |   Control the LED with the button, then control multiple LED's with Multiple Buttons. Note: Can't control large current flow devices, WHY? Could you make the external LED interact like the internal LED?    |
| 3. Analog Read                 |  [b-a-a-any-variable-resistor-sensor.ino](https://github.com/hpssjellis/portenta-pro-community-solutions/blob/main/examples/b-portenta-h7-with-accessories/b-a-sensors/b-a-a-any-variable-resistor-sensor/b-a-a-any-variable-resistor-sensor.ino)                                                                                                                                                                            |               |                 |        |   Change the Resistor amount and which resistor is attached to 3V3 to get the largest most sensible range of readings.     |
| 4. DAC to ADC                         |       [a-j-DAC-to-ADC.ino](https://github.com/hpssjellis/portenta-pro-community-solutions/blob/main/examples/a-portentaH7-examples/a-j-DAC-to-ADC/a-j-DAC-to-ADC.ino)                                                                                                                                                                       |               |                 |        |   Estimate the Voltage that the digital pin converts from 0 to 1, it should be close to half of 3V3     |
| 5.  Flash SOS                           |     [g-a-SOS.ino](https://github.com/hpssjellis/portenta-pro-community-solutions/blob/main/examples/g-robotics-curriculum/g-a-SOS/g-a-SOS.ino)                                                                                                                                                                         |               |                 |        |   Get the code running to flash the LED_BUILTIN, then have it flash an SOS. 3 short flashes, 3 long flashes, 3 short flashes then a 5 second rest.     |
| 6. Web WiFi                            |                                                                                                                                                                              |               |                 |        |        |
| 7.  Servo                           |                                                                                                                                                                              |               |                 |        |        |
| 8. Transistor                            |                                                                                                                                                                              |               |                 |        |        |
| 9. Small Dual DC Motor Driver                            |                                                                                                                                                                              |               |                 |        |        |
| 10.  Large DC Motor Driver                          |                                                                                                                                                                              |               |                 |        |        |
| 11.  Stepper Motor                         |                                                                                                                                                                              |               |                 |        |        |
| 12.  Serial I2C OLED                          |                                                                                                                                                                              |               |                 |        |        |
| 13.  Serial SPI Pixy2                          |                                                                                                                                                                              |               |                 |        |        |
| 14.  Serial UART FingerPrintScanner-FPS (Not Yet Working)                         |                                                                                                                                                                              |               |                 |        |        |
| 15. GPS (Not Yet Working)                          |                                                                                                                                                                              |               |                 |        |        |
| 16. Acclerometer (Not Yet Working)                          |                                                                                                                                                                             |               |                 |        |        |
| 17. FSLP-Touch  (Not Yet Working)                         |                                                                                                                                                                              |               |                 |        |        |
| 18. Range-Finder  (Not Yet Working)                         |                                                                                                                                                                              |               |                 |        |        |
| 19. Serial-putty                           |                                                                                                                                                                              |               |                 |        |        |
| 20. Web-IFTTT   (Not Yet Working)                       |                                                                                                                                                                              |               |                 |        |        |
| 21. Ethernet-Vision-Shield                           |                                                                                                                                                                              |               |                 |        |        |
| 22. SD-card-Vision-Shield                          |                                                                                                                                                                              |               |                 |        |        |
| 23. Microphone-Vision-Shield                          |                                                                                                                                                                              |               |                 |        |        |
| 24. Camera-Vision-Shield                           |                                                                                                                                                                              |               |                 |        |        |
| 25. Rocksetta-Machine-Learning-Sine-Wave                           |                                                                                                                                                                              |               |                 |        |        |
| 26. Edge-Impulse-Sound-Yes-No                          |                                                                                                                                                                              |               |                 |        |        |
| 27. Edge-Impulse-Vision-Brush-Tube                          |                                                                                                                                                                              |               |                 |        |        |
| 28. LoRaWan-Helium/TTN                           |                                                                                                                                                                              |               |                 |        |        |
| 29.                          |                                                                                                                                                                              |               |                 |        |        |
| 30.                            |                                                                                                                                                                              |               |                 |        |        |
| 31.                            |                                                                                                                                                                              |               |                 |        |        |

### Advances topics if time permits (or you want to be an Engineer)


| Advanced Topic                          | Example Code                                                                                                                                                                 | Youtube Video | Resource Link 1 | Setup Image | To Do |
|--------------------------------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|---------------|-----------------|--------|--------|
| 1.  WebSocket-Gitpod                          |                                                                                                                                                                              |               |                 |        |        |
| 2. Local-cpp-Compile-Gitpod  (Not Yet Fully Working)                         |                                                                                                                                                                              |               |                 |        |        |
| 3. LoRa using GrumpOldPizza-board                         |                                                                                                                                                                              |               |                 |        |        |
| 4.                       |                                                                                                                                                                              |               |                 |        |        |
| 5.                          |                                                                                                                                                                              |               |                 |        |        |






## Course Description:

### First Year:

Circuit basics, Micro-controller basics (LED's buttons, wiring, breadboards), Platforms, Languages, simple sensors and actuators(screens/motors:DC, Servo, Stepper), connectors: I2C, SPI, Uart/Serial, connecting:WiFi, BLE, Ethernet, LoRaWan ([Helium](https://explorer.helium.com/coverag), [TTN The Things Network](https://www.thethingsnetwork.org/map), [Adafruit.io](https://io.adafruit.com/), [ArduinoCreate](https://www.arduino.cc/en/main/create)), possibly webSockets, Protocols:(IFTTT, MQTT, JSON, Bluetooth, ...), Machine Learning: ([Edge Impulse](https://www.edgeimpulse.com/), [My TensorFlowJS](https://www.rocksetta.com/tensorflowjs/) ), TinyML:Vision, Sound, Possibly Acceleration, Single object detection , Possibly Multiple object detection, Possibly Sensor ML, Final Project ( Proof of Concept, then with 3D printing structure, working Prototype ) Possible Javascript Machine Learning with Cell phones, web socket micro-controller connectivity.

### 2nd year: 

Blast through all first year assignments, multiple sensor and Actuators: ie: robot Arm, toy car, etc, concentrate on more Machine learning, with LoRa, WiFi, BLE and Ethernet connectivity, Sensor Machine Learning controlling Actuators, Product Prototyping.





## Pre-Understanding:
1. Circuits as multiple serial and parallel loops
2. Microcontroller Max current, Max voltage
3. Ohms Law V=IxR and Power equations
4. Electrical Safety
5. Non-microcontroller electric circuits: switch on a motor etc. I use [Snapcircuits 750](https://www.robotshop.com/en/elenco-snap-circuits-educational-series-training-program-sc-750r.html) I use the old version that comes in a box, this case version would be good, but any circuit play would be fine including online circuit visualizers.
6. My six Circuit components: Resistor, Diode, Transistor, Coil, Capacitor, Chip
7. Soldering: I don't teach it, all my examples are breadboard plug and play, also by grade 11 most of my students who are fully interested in tech have taught themselves how to solder. (I get them to do my soldering since those kids are better at it than I am!)
8. Coding: Many of my students take a Game Development Javascript programming class pre-robotics. It is a huge asset, but strangely some students take to programming like a fish to water and other students still have a hard time, even after several courses. I basically only teach 9 concepts: 1.Input/Output, 2.Variables, 3.Decisions (if statements), 4.Loops(for), 5.Functions, 6.Events, 7.Arrays, 8.Objects/Struct, 9.Classes(just using other peoples classes) 
9. 3D printing: Many of my students take a 3D printing course before or during taking robotics. Huge help for their final projects that need any structure: Most servo assignments need a structure around the servo to do something useful.



## Basic Costs:

See main price list on the Portenta Pro Community Solutions Library Github [here](https://github.com/hpssjellis/portenta-pro-community-solutions/blob/main/pricelist.md)

## Platforms:   
[Arduino Regular IDE  Version 1.8.??  Download](https://www.arduino.cc/en/software) Decade long tested, works great

[Arduino New IDE Version 2.?.?  Download](https://www.arduino.cc/en/software) Has some advantages, but still fairly Beta

[Arduinio Cloud](https://docs.arduino.cc/cloud/iot-cloud/tutorials/iot-cloud-getting-started) Has online advantages, very powerful with Paid version but also has issues

[Platformio](https://platformio.org/)  Easy install of Visual Studio Code has lots of advantages, bit of a learning curve

[Draft My Gitpod of Edge impulse](https://github.com/hpssjellis/my-gitpod-of-edge-impulse) Huge learning curve, but has the benefit of complete control of cloud setup for students, loads [here](https://gitpod.io/#github.com/hpssjellis/my-gitpod-of-edge-impulse)


## Other Boards:

Some students just need to use cheaper equipment. Not everyone should be playing around with a $100 board who can't connect it properly. 
I have a class set 15 of each of the Portenta Series <br><img src="media/Portenta-pro-boxes.jpg" width = 500/> 

Following are a few cheaper boards that could do parts of this course. 

I also have a class set of 15 Seeeduino XIAO, for testing if a circuit is going to fry your board, you can't beat a $5 microcontroller. <br><br>

1. The $33.40 USD [Nano 33 Ble Sense](https://store.arduino.cc/usa/nano-33-ble-sense-with-headers) is very good for sound and accelerometer Machine Learning <br><img src="media/Arduino-nano33BleSense.jpg" width = 200/><br><br>
3. The  $19.65 USD [Particle Photon](https://store.particle.io/products/photon) 6 year student tested Curriculum is [here](https://github.com/hpssjellis/particle.io-photon-high-school-robotics) with videos [here](https://www.youtube.com/playlist?list=PL57Dnr1H_egsL0r4RXPA4PY2yZhOJk5Nr). I still start my students on this very easy to use platform!<br><img src="media/Particle-photon.jpg" width = 200/><br><br>
4. The $5.40 USD [Seeeduino XIAO](https://www.seeedstudio.com/Seeeduino-XIAO-Arduino-Microcontroller-SAMD21-Cortex-M0+-p-4426.html)  Only a limited number of pins to use<br><img src="media/Seeeduino-xiao.jpg" width = 200/><br><br>
5. The $129 USD [Sony Spresense Kit](https://shop.framos.com/us/spresense) with Breakout Board and Camera and now works on the Arduino IDE. Absolutely nothing wrong with this board, I have just not yet got it doing Machine Learning on the Arduino IDE yet. Note: uses LED0, LED1, LED2, LED4 instead of LEDB, LEDG, LEDR <br><img src="media/Sony-spresense-kit.jpg" width = 200/><br><br>
6. The $25.50 USD [Arduino Nano-RP2040-Connect](https://store.arduino.cc/usa/nano-rp2040-connect-with-headers) Is very new but has lots of potential over the RPI Pico as it has WiFi and BLE onboard.<br> <img src="media/Arduino-nanoRP2040-connect.jpg" width = 200/><br><br><br>
7. The $4 USD [Raspberry Pi Pico](https://www.raspberrypi.org/products/raspberry-pi-pico/) Amazing board, see above. <br><br>
8. The $25.00 USD [ArducamPico-4ML](https://www.arducam.com/raspberry-pi-pico-machine-learning/) This board looks like it would be perfect for machine learning with a mini screen and camera but I have never got it properly working on the Arduino IDE.<br><img src="media/ArducamPico-4ml.jpg" width = 200/> <br><br>


## Other Languages:
I use the [Arduino MBED core](https://github.com/arduino/ArduinoCore-mbed)   Arduino's on going attempt to simplify the MBED Arm programming OS, but there are other options:

1. [micro-Python](https://micropython.org/) The Portenta actually runs micro-python through the [OpenMV platform](https://openmv.io/) For Python lovers this is another. Note: Python is very fast to run, whereas Arduino code  (C++) must be compiled and can take a long time for each compile, theoretically the Arduino code is faster on the board.

2. [Circuit-Python](https://learn.adafruit.com/welcome-to-circuitpython) Another version of Python for micro-controllers by Adafruit which is a very maker friendly company. Does not support the Portenta but supports lots of other boards

4. [Javascript](https://www.rocksetta.com/tensorflowjs/beginner-examples/tfjs06-javascript.html): I have not really seen a Javascript language that looks any easier than C++ yet for a micro-controller. I am open to suggestions, there are lots of attempts. (For web pages, Javascript is awesome. Note: Websockets is a way for micro-controllers to interact with wewpages in realtime)

5. [Visuino](https://www.visuino.com/) A Visual programming drag and drop code creator for the Arduino may soon have Portenta compatibility, probably the future of Makers using micro-controllers as the actual coding is minimal 


## Post Understanding Activities:

1.  Individual Final Project with at least one sensor and one actuator
    1. Proof of Concept (POC) Sensor Actuator working
    2. Useful and/or fun
    3. Structure designed (3d Printed if needed)
    4. Final Project Prototype ready
    5. Can it be sold? If so how much. Is it worth it?
2. If time, final project with more sensors and actuators
3. If time, Group Project



## Course Notes:

1. Made for Makers not for future [Mechatronic Engineers](https://en.wikipedia.org/wiki/Mechatronics): Why? This course is to inspire Makers and future engineers, but to simplify the teaching I teach some things different than an Engineer would prefer. Few students I see have the: Drive, Ability and Finances to become Engineers. The students who could become an Engineer typically ignores me and get their assignments done really fast. Example: I code Javascript using Notepad.exe on windows, I don't even use Notepad++ a soon to be engineer might load a different editor like "[Atom](https://atom.io/)" and I am fine with that, I just don't want to waste my teaching time getting editors installed on school and student home computers, and then waste another 3 weeks teaching how to effectively use the editor.

Examples of things I do that drive Engineers crazy:

1. Itterators: say in a "for" loop. I use "myCount" (I put "my" before every funciton or variable we create, so students know not to google them), Software Engineer "i"
2. Engineers will make a pin variable say called ```pin12``` and assign it to a pin say 6. And then throughout the program refer to ```pin12```, which confuses average students. I just use ```D6``` throughout the code so students know that this is digital pin 6. If they have to change it they just search and replace, but that drives Engineers crazy.
3. Files: I put everything that does one thing into one file, Software Engineer: multiple files in multiple folders because they have the IQ to keep track of them.
4. I use Notepad as an editor, Engineer's typically would use anything but Notepad.
5. I don't comment anything that can be googled, as the more writing stresses students out I also use camelCase long names to describe variables. Engineers, should comment everything.
6. I try to get things working without a ton of theory, since interested students can lookup the theory. Engineers, theory first.
7. I really should use [fritzing diagrams](https://fritzing.org/) for all my videos, but I have students make their own diagrams in anyway they like, and then they use their own diagram to connect the circuit. I find they have then thought more about it. Also I prefer students to read the top of the sketch as the connection information is often there and no diagram is available.






By: Jeremy Ellis, Tech Teacher, BC, Canada

###### Use at your own risk!

My Github: [hpssjellis](https://github.com/hpssjellis?tab=repositories) , My twitter: [@rocksetta](https://twitter.com/rocksetta) , my Website [rocksetta.com](https://www.rocksetta.com/) My Arduino Forum [jerteach](https://forum.arduino.cc/u/jerteach/activity) my Edge Impulse Forum [rocksetta](https://forum.edgeimpulse.com/u/rocksetta/activity)

