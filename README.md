Views better using the README.md [here](README.md)

The currciulum for this course is at [maker100-curriculum](https://github.com/hpssjellis/maker100-curriculum)

Note: the 2024 economy version of this course is at [maker100-eco](https://github.com/hpssjellis/maker100-eco)

New for Feb 2026 is the [maker100-xiaoML-kit](https://github.com/hpssjellis/maker100-xiaoML-kit) which is a rebuild of th esp32S3Sense course with the new $38.90 USD [xiaoML kit from Seeedstudio](https://www.seeedstudio.com/The-XIAOML-Kit.html). 



## Course: Maker100

Reminder all code examples are in the [Portenta Pro Community Solutions Library](https://github.com/hpssjellis/portenta-pro-community-solutions) that can be installed onto the Arduino IDE, search for "community" then install "portenta-pro-community-solutions". Check out the new [online-maker100](maker100-online.md) for fully online learning without in person teacher support. It is closely matched to the materials cost [price-list-individuals.md](price-list-individuals.md), and follows steps 0-6, from beginner setup to presentation / startup. (Draft mode Jan 2022)


The examples are [here](https://github.com/hpssjellis/portenta-pro-community-solutions/tree/main/examples). My original Portenta Research github is [here](https://github.com/hpssjellis/my-examples-for-the-arduino-portentaH7)

Note: To edit this table use [https://www.tablesgenerator.com/markdown_tables](https://www.tablesgenerator.com/markdown_tables) File-->Paste Table Data --> Generate --> Copy to Clipboard--> paste back here


### Note: the following is an in-class Robotics and Machine Learning course

As such many safety and extra resource information will not be listed here. These videos are as short as possible to get the sketch working. For an online experience hopefully the [online-maker100](maker100-online.md) course will be ready and student tested by 2023. If you are working online expect to research a lot of microcontroller safety videos on your own.

Really good connected devices slideshow https://pascalbod.github.io/iot-en-presentation/#/ (watch for the arrows bottom right)

The big brother to this course will be [Maker101](https://github.com/hpssjellis/maker101) which should be more about Machine Learning and for general University Students.


## Diagrams

Follow your teachers requirements, but for my class I expect diagrams that guarantee accurate connections. If your diagrams are not helping you make 
accurate connections you might want to try diagram makers like [frizing](https://fritzing.org/)  and [cirkitstudio](https://www.cirkitstudio.com/)<br>
 <img src="media/diagrams.png" width = 600/>  <br> [https://everycircuit.com/app/](https://everycircuit.com/app/)


| Topic | Example Code| Video | Instructions |
|:---|:---|:---|:---|
| <a name="0" href="0">`0`</a>.    Login to [edgeimpulse.com](https://studio.edgeimpulse.com/login) and make a vision machine learning model using your cell phone, or laptop camera of 0-unknown, 1-pencil (or something of your choice)     |     [docs.edgeimpulse.com](https://docs.edgeimpulse.com/docs/arduino-portenta-h7)              | This is a full playlist so many other videos here might help  [<img src="https://img.youtube.com/vi/wbX_-No8kIw/hqdefault.jpg" width=600 />](https://www.youtube.com/watch?v=wbX_-No8kIw&list=PL57Dnr1H_egsQPnEObWHPhK1Q4g_IDWcR&index=7)              |  This website is a good starting point [https://hpssjellis.github.io/multi-language-edgeimpulse-tutorial-vision-cell-phone/](https://hpssjellis.github.io/multi-language-edgeimpulse-tutorial-vision-cell-phone/)          Like all our assignments make a very short video proving you did the work. For Edge Impulse you would show your confusion matrix, feature explorer and an example classification of a pencil or not a pencil. (Or whatever you were testing)    |
| <a name="1" href="#1">`1`</a>.  Auto Blink and Serial Print  | [dot11-hello-blink.ino](https://github.com/hpssjellis/portenta-pro-community-solutions/blob/main/examples/dot1-portentaH7-examples/dot11-hello-blink/dot11-hello-blink.ino) |      [<img src="https://img.youtube.com/vi/3E5KUT115xY/hqdefault.jpg" width=600 />](https://www.youtube.com/watch?v=3E5KUT115xY&list=PL57Dnr1H_egv1FVzAcCZVeANJMs3Hta05&index=7)         |                     Print other things and change the pattern of blinking using different colors LEDR, LEDG, LEDB, LED_BUILTIN (which is green). Note: I stay away from LEDR as red is used to show errors    |
| <a name="2" href="#2">`2`</a>.  Button causes LED to blink          |       [dot228-button-control-led.ino](https://github.com/hpssjellis/portenta-pro-community-solutions/blob/main/examples/dot2-portenta-h7-with-accessories/dot22-actuators/dot228-button-control-led/dot228-button-control-led.ino)                                                                                                                                                                     |    [<img src="https://img.youtube.com/vi/wFw-AF8gwiY/hqdefault.jpg" width=600 />](https://www.youtube.com/watch?v=wFw-AF8gwiY&list=PL57Dnr1H_egv1FVzAcCZVeANJMs3Hta05&index=2)           |                   <img src="media/b-b-h-button-control-led.jpg" width = 200/>  <br>        Control the LED with the button, then control multiple LED's with Multiple Buttons. Note: Can't control large current flow devices, WHY? Could you make the external LED interact like the internal LED?    |
| <a name="3" href="#3">`3`</a>. Analog Read (Voltage divider for various 2 prong sensors (variable resistors: flex sensor, photoresistor, touch/pressure sensor))                |  [dot211-any-variable-resistor-sensor.ino](https://github.com/hpssjellis/portenta-pro-community-solutions/blob/main/examples/dot2-portenta-h7-with-accessories/dot21-sensors/dot211-any-variable-resistor-sensor/dot211-any-variable-resistor-sensor.ino)                                                                                                                                                                            |       [<img src="https://img.youtube.com/vi/GR3D8C6dOl8/hqdefault.jpg" width=600 />](https://www.youtube.com/watch?v=GR3D8C6dOl8&list=PL57Dnr1H_egv1FVzAcCZVeANJMs3Hta05&index=3)            |                 Change the Resistor amount and which resistor is attached to 3V3 to get the largest most sensible range of readings.     |
| <a name="4" href="#4">`4`</a>. DAC to ADC                         |       [dot1a-DAC-to-ADC.ino](https://github.com/hpssjellis/portenta-pro-community-solutions/blob/main/examples/dot1-portentaH7-examples/dot1a-DAC-to-ADC/dot1a-DAC-to-ADC.ino)                                                                                                                                                                       |    [<img src="https://img.youtube.com/vi/PWtQeHqyDUM/hqdefault.jpg" width=600 />](https://www.youtube.com/watch?v=PWtQeHqyDUM&list=PL57Dnr1H_egv1FVzAcCZVeANJMs3Hta05&index=8)            |                    Estimate the Voltage that the digital pin converts from 0 to 1, it should be close to half of 3V3     |
| <a name="5" href="#5">`5`</a>.  Flash SOS                           |     [dot71-sos](https://github.com/hpssjellis/portenta-pro-community-solutions/blob/main/examples/dot7-coding-curriculum/dot71-sos/dot71-sos.ino)                                                                                                                                                                         |       [<img src="https://img.youtube.com/vi/iDC3vuBGGcg/hqdefault.jpg" width=600 />](https://www.youtube.com/watch?v=iDC3vuBGGcg&list=PL57Dnr1H_egv1FVzAcCZVeANJMs3Hta05&index=11)          |                    Get the code running to flash the LED_BUILTIN, then have it flash an SOS. 3 short flashes, 3 long flashes, 3 short flashes then a 5 second rest.     |
| <a name="6" href="#6">`6`</a>. Web WiFi   (need router acces to make global)                         |   [dot181-wifi-webserver.ino](https://github.com/hpssjellis/portenta-pro-community-solutions/blob/main/examples/dot1-portentaH7-examples/dot18-wifi-webserver/dot181-wifi-webserver/dot181-wifi-webserver.ino)                                                                                                                                                                           |         [<img src="https://img.youtube.com/vi/oygGsGLLLGM/hqdefault.jpg" width=600 />](https://www.youtube.com/watch?v=oygGsGLLLGM&list=PL57Dnr1H_egv1FVzAcCZVeANJMs3Hta05&index=9)        |                   Several layers to this project. Often easier to use your cell phone hot spot as a school's WiFi often has several layers of security. I will still need to work with my School IT department to: A. get the WiFi working and B. get an outside port. Probably wont happen. Change the buttons on the webpage to control some Actuator other than an LED    |
| <a name="7" href="#7">`7`</a>. Servo                           |      [dot221-servo.ino](https://github.com/hpssjellis/portenta-pro-community-solutions/blob/main/examples/dot2-portenta-h7-with-accessories/dot22-actuators/dot221-servo/dot221-servo.ino)                                                                                                                                                                        |       [<img src="https://img.youtube.com/vi/4p3yIF_4pk8/hqdefault.jpg" width=600 />](https://www.youtube.com/watch?v=4p3yIF_4pk8&list=PL57Dnr1H_egv1FVzAcCZVeANJMs3Hta05&index=6)          |                 MUST HAVE AN EXTERIOR BATTERY TO RUN THE 6 VOLT SERVO!  I have the Pololu Servo Product number 1057, Power HD High-Torque Servo 1501MG [here](https://www.pololu.com/product/1057).  <br> To connect Portenta D5 (orange wire) GND (brown wire) to servo, <br> 6 volt battery positive (red) and Negative (brown) to servo.   |
| <a name="8" href="#8">`8`</a>. Transistor                            |      [dot224-pwm-transistor.ino](https://github.com/hpssjellis/portenta-pro-community-solutions/blob/main/examples/dot2-portenta-h7-with-accessories/dot22-actuators/dot224-pwm-transistor/dot224-pwm-transistor.ino)                                                                                                                                                                        |         [<img src="https://img.youtube.com/vi/XqxTnUFlMnY/hqdefault.jpg" width=600 />](https://www.youtube.com/watch?v=XqxTnUFlMnY&list=PL57Dnr1H_egv1FVzAcCZVeANJMs3Hta05&index=17)    |     <img src="https://user-images.githubusercontent.com/5605614/156191081-89142347-8494-46d0-ae48-53566c884bc9.png" width = 200/> <br>  <img src="https://user-images.githubusercontent.com/5605614/156191554-49bd23c3-d38c-4fc5-b04f-8ec9add68763.png" width = 200/>     <br>                        Make either the PNP transistor with small motor or the NPN transistor. For higher marks do both. |
| <a name="9" href="#9">`9`</a>. Small Dual DC Motor Driver                            |       [dot226-small-dual-dc-motor-driver.ino](https://github.com/hpssjellis/portenta-pro-community-solutions/blob/main/examples/dot2-portenta-h7-with-accessories/dot22-actuators/dot226-small-dual-dc-motor-driver/dot226-small-dual-dc-motor-driver.ino)  |     [<img src="https://img.youtube.com/vi/lUE-hmAddhY/hqdefault.jpg" width=600 />](https://www.youtube.com/watch?v=lUE-hmAddhY&list=PL57Dnr1H_egv1FVzAcCZVeANJMs3Hta05&index=5)     |     <img src="media/b-b-f-small-dual-dc-motor-driver.png" width = 200/>     <br>  Get a small motor working using it's own power supply and change the code so it does what you want. Pololu #2135 DRV8835 Dual Motor Driver Carrier  [here](https://www.pololu.com/product/2135)     |
| <a name="10" href="#10">`10`</a>. Large DC Motor Driver                          |     [dot227-big-dc-motor-driver.ino](https://github.com/hpssjellis/portenta-pro-community-solutions/blob/main/examples/dot2-portenta-h7-with-accessories/dot22-actuators/dot227-big-dc-motor-driver/dot227-big-dc-motor-driver.ino)                                                                                                                                                                         |       [<img src="https://img.youtube.com/vi/YcRQSFhr8MY/hqdefault.jpg" width=600 />](https://www.youtube.com/watch?v=YcRQSFhr8MY&list=PL57Dnr1H_egv1FVzAcCZVeANJMs3Hta05&index=7)         |                  <img src="media/b-b-g-big-dc-motor-driver.png" width = 200/>   <br>     Get a 6V motor running and change code for it to do what you want. Protect the Phton from the 6 Volt motor side. Check Pololu 1451 VNH5019 Motor Driver Carrier [here](https://www.pololu.com/product/1451)     |
| <a name="11" href="#11">`11`</a>. Stepper Motor                         |           [dot225-stepper-motor.ino](https://github.com/hpssjellis/portenta-pro-community-solutions/blob/main/examples/dot2-portenta-h7-with-accessories/dot22-actuators/dot225-stepper-motor/dot225-stepper-motor.ino)                                                                                                                                                                   |      [<img src="https://img.youtube.com/vi/Fru6QtzLnrI/hqdefault.jpg" width=600 />](https://www.youtube.com/watch?v=Fru6QtzLnrI&list=PL57Dnr1H_egv1FVzAcCZVeANJMs3Hta05&index=4)            |                     <img src="media/b-b-e-stepper-motor.png" width = 200/>     <br>     Note: This stepper needs 6V, Change code to do what you want.  Pololu 2134 DRV8834 Low-Voltage Stepper Motor Driver Carrier [here](https://www.pololu.com/product/2134)   |
| <a name="12" href="#12">`12`</a>. Serial I2C OLED                          |          [dot222-I2C-grove-OLED.ino](https://github.com/hpssjellis/portenta-pro-community-solutions/blob/main/examples/dot2-portenta-h7-with-accessories/dot22-actuators/dot222-I2C-grove-OLED/dot222-I2C-grove-OLED.ino)     |    [<img src="https://img.youtube.com/vi/ruykYcViWo0/hqdefault.jpg" width=600 />](https://www.youtube.com/watch?v=ruykYcViWo0&list=PL57Dnr1H_egv1FVzAcCZVeANJMs3Hta05&index=10)       |                   <img src="media/b-b-b-I2C-grove-OLED.png" width = 200/>    <br>     Have fun with this. Have it say what you want, where you want it and for how long.     |
| <a name="13" href="#13">`13`</a>.  Serial SPI Pixy2                          |           [dot212-pixy2-SPI.ino](https://github.com/hpssjellis/portenta-pro-community-solutions/blob/main/examples/dot2-portenta-h7-with-accessories/dot21-sensors/dot212-pixy2-SPI/dot212-pixy2-SPI.ino)  Note: Dot212 Pixy example using the Portenta pro community solutions library will be pre-setup with the pixy include files!                                                                                                                                                                 |       [<img src="https://img.youtube.com/vi/p8KmFFqqU6U/hqdefault.jpg" width=600 />](https://www.youtube.com/watch?v=p8KmFFqqU6U&list=PL57Dnr1H_egv1FVzAcCZVeANJMs3Hta05&index=14)              |                 <img src="media/pixy-connector.png" width = 200/>     <br>    The Pixy2 is so cool students will have no problem coming up with things to detect. The Pixy2 is really good for a final project since students just need to connect an actuator. Example: when you see the "orange" cat have a servo open a lever to feed it.    
| <a name="14" href="#14">`14`</a>. Serial UART FingerPrintScanner-FPS (Video not ready)              |               [dot216-fingerprint-scanner](https://github.com/hpssjellis/portenta-pro-community-solutions/tree/main/examples/dot2-portenta-h7-with-accessories/dot21-sensors/dot216-fingerprint-scanner) | | Ask the teacher about this sensor |
| <a name="15" href="#15">`15`</a>. GPS                           |         [dot215-grove-gps-air530.ino](https://github.com/hpssjellis/portenta-pro-community-solutions/blob/main/examples/dot2-portenta-h7-with-accessories/dot21-sensors/dot215-grove-gps-air530/dot215-grove-gps-air530.ino)  Only proof of connection.                                                                                                                                                                    |               |                  Try https://www.gpsvisualizer.com/ with the data saved with .GPS extension         Real Assignment: Parse the output for Latitude, Longitude, date time and height, perhaps use: TinyGPS, TinyGPS++, TinyGPSPLUS, NeoGPS libraries.  Then paste your latitude, longnitude into this url  /maps?q=lat,lon example: http://maps.google.com/maps?q=62.44,-114.4  for Yellowknife Canada |
| <a name="16" href="#16">`16`</a>. Accelerometer                           |      Just load MKRIMU library and run the accelerometer example. Note bend the reset pin on the MKR IMU, When that is working login to edgeimpulse and make a motion model using your cell phone, to detect a wave. Then download it to the Portenta and get the onboard LED working when you wave.                                                                                                                                                                      |        |           You can do this all on your own. connect the MKR IMU to the portenta then lookup how to do the example. Note: bend the reset pin of the MKR IMU away from connecting to the Portenta. Causes issues.                          |
| <a name="17" href="#17">`17`</a>. FSLP-Touch  (Video not ready)                         |       [dot217-FSLP.ino](https://github.com/hpssjellis/portenta-pro-community-solutions/blob/main/examples/dot2-portenta-h7-with-accessories/dot21-sensors/dot217-FSLP/dot217-FSLP.ino)  |   |  Room for research here. This sensor has always given students problems.   This chart helps<br> <img src="https://user-images.githubusercontent.com/5605614/222784709-aaf74262-abcc-4c50-8058-feceae5229f4.png" width = 200/> |  
| <a name="18" href="#18">`18`</a>. Range-Finder                          |      [dot214-RangeFinder.ino](https://github.com/hpssjellis/portenta-pro-community-solutions/blob/main/examples/dot2-portenta-h7-with-accessories/dot21-sensors/dot214-RangeFinder/dot214-RangeFinder.ino)     |     [<img src="https://img.youtube.com/vi/E1B_iE171E8/hqdefault.jpg" width=600 />](https://www.youtube.com/watch?v=E1B_iE171E8&list=PL57Dnr1H_egv1FVzAcCZVeANJMs3Hta05&index=13) |  For this assignment a variable in the code can be changed to make the range finder work at a greater distance.  |
| <a name="19" href="#19">`19`</a>. Serial-putty          | This is a program to load on your computer that replaces the arduino serial monitor           |      |      Fairly easy once putty is installed. Load power shell and type mode with your Portenta programmed with a serial monitor program find the port. Then switch to Serial on Putty and Correct the COM port. Open and see if you can see serial output from the Portenta        |
| <a name="20" href="#20">`20`</a>. Web-AdafruitIO-Connectivity                        |   [adafruit login](https://accounts.adafruit.com/users/sign_in)  <br> <br> Record your user name and access key. Both the browser web socket and the Arduino MQTT program use those values. <br><br>  MQTT-Websocket [ada-websocket02.html](https://hpssjellis.github.io/my-examples-of-iot-platforms/public/ada-websocket02.html) <br> With Arduino MQTT Portenta code  [dot184-mqtt-client-to-adafruit.ino](https://github.com/hpssjellis/portenta-pro-community-solutions/blob/main/examples/dot1-portentaH7-examples/dot18-wifi-webserver/dot184-mqtt-client-to-adafruit/dot184-mqtt-client-to-adafruit.ino)<br> <br> The MQTT library to install was written by Joel Gaehwiler is is way down on the list  <br><br>Arduino https uses webhooks but might not work due to changes in the arduino code [dot183-https-to-adafruit.ino](https://github.com/hpssjellis/portenta-pro-community-solutions/blob/main/examples/dot1-portentaH7-examples/dot18-wifi-webserver/dot183-https-to-adafruit/dot183-https-to-adafruit.ino)       |   Everything will be at this website <a href="https://hpssjellis.github.io/my-examples-of-iot-platforms/public/index.html">Adafruit-Connectivity</a>      | This is a good but large project. A lot for students to learn here |
| <a name="21" href="#21">`21`</a>. Ethernet-Vision-Shield  (need router acces to make global)                         |      [dot311-ethernet-webServer.ino](https://github.com/hpssjellis/portenta-pro-community-solutions/blob/main/examples/dot3-portenta-vision-shields/dot31-ethernet-specific/dot311-ethernet-webServer/dot311-ethernet-webServer.ino)   |      [<img src="https://img.youtube.com/vi/g35_OWJNgiI/hqdefault.jpg" width=600 />](https://www.youtube.com/watch?v=g35_OWJNgiI&list=PL57Dnr1H_egv1FVzAcCZVeANJMs3Hta05&index=12)          |                Same as WiFi  might be difficult to get an outside line. While on the same local network things should work great. At home will have to configure your router to allow outside access. At school good luck.   |
| <a name="22" href="#22">`22`</a>. SD-card-Vision-Shield             | A great bit of code to run is [here-dot362-png-to-sd-card](https://github.com/hpssjellis/portenta-pro-community-solutions/blob/main/examples/dot3-portenta-vision-shields/dot36-camera-png-to-web/dot362-png-to-sd-card/dot362-png-to-sd-card.ino) which allows pictures in PNG format to be loaded onto the SD card based on a user set delay.   |   |       This is another one students can probably do themselves using the default programs for the Portenta. You will need a micro SD card.       Portenta examples it is called  Portenta_SDCARD  |
| <a name="23" href="#23">`23`</a>. Microphone-Vision-Shield                          |         Example PDM then use your cell phone to make a sound model on EdgeImpulse. Such as your name. The download the arduino file and get your Portenta recognizing your name by lightening the onboard LED.     |               |                     This is another one students can probably do themselves using the default programs for the Portenta called the PDM. Instead of the serial monitor load the Serial Plotter to see your voice when you speak. Then make the edge impulse sound model and load it on your Portenta.         |
| <a name="24" href="#24">`24`</a>. Camera-Vision-Shield with Grayscale OLED                           |                                                                                                                                                                              |               |   Get the Portenta Camera working with the Grayscale Waveform 128x128 OLED [dot351-camera-oled-regular.ino](https://github.com/hpssjellis/portenta-pro-community-solutions/blob/main/examples/dot3-portenta-vision-shields/dot35-camera-and-oled/dot351-camera-oled-regular/dot351-camera-oled-regular.ino)               This is another one students can probably do themselves using the default programs for the Portenta.         |
| <a name="25" href="#25">`25`</a>. Rocksetta-Machine-Learning-Sine-Wave  or e-ink display                         |   TensorflowLite seems to be deprecated so try doing the e-ink display.  See Ambrose until he has a solution. preesently use the Waveshare e-ink libraries. File [here](https://github.com/hpssjellis/maker100/tree/main/downloads) <br>Must edit the epdif.h file to list which pins to use<br> Pin definition <br>#define RST_PIN     5  <br>#define DC_PIN      4  <br> #define CS_PIN      3 <br>   #define BUSY_PIN    2  <br><br>The tensorflowlite code is    [dot521-rocksetta-hello-ml-sine.ino](https://github.com/hpssjellis/portenta-pro-community-solutions/blob/main/examples/dot5-portenta-machine-learning/dot52-portenta-rocksetta-ml/dot521-rocksetta-hello-ml-sine/dot521-rocksetta-hello-ml-sine.ino)       |
| <a name="26" href="#26">`26`</a>. Edge-Impulse-Sound-Yes-No            | |              |   Follow the wizard on Edgeimpulse to make a verbal Machine Learning model using your cell phone. Then download the Arduino deployment, install the zipped Arduino library and choose the default Portenta Sound example. Then talk into your Portenta and view the Serial Monitor. Then get the onboard LED to respond to your voice.            |
| <a name="27" href="#27">`27`</a>. Edge-Impulse-Vision-FOMO                          |      Use the Vision grayscale OLED from above and the [dot5148-advanced-fomo-individual-count](https://github.com/hpssjellis/portenta-pro-community-solutions/blob/main/examples/dot5-portenta-machine-learning/dot51-portenta-edge-impulse-ml/dot514-vision-fomo/dot5148-advanced-fomo-individual-count/dot5148-advanced-fomo-individual-count.ino) Note: Use the Portenta Pro Library as the include file will auto load. Then just change the deployed Edgeimpulse include file to the correct name.   |   Like the original classification model, just now with bounding boxes and you label each object to detect  |
| <a name="28" href="#28">`28`</a>. LoRaWan-Helium-MQTT-Adafruit (easier)                           |     [dot334-us915-helium-mqtt-adafruit-connect.ino](https://github.com/hpssjellis/portenta-pro-community-solutions/blob/main/examples/dot3-portenta-vision-shields/dot33-lorawan-specific/dot334-us915-helium-mqtt-adafruit-connect/dot334-us915-helium-mqtt-adafruit-connect.ino)                |                    | <li> Check the Helium coverage map for your area [here](https://explorer.helium.com/)  <li> load libraries MKRWAN and cayenneLPP<li> Run the MKRWAN examples MKRWANUpdate_standalone to make sure the LoRaWan device is updated and active<li> Run the [dot333-helium-us915-cayenne-timer.ino](https://github.com/hpssjellis/portenta-pro-community-solutions/blob/main/examples/dot3-portenta-vision-shields/dot33-lorawan-specific/dot333-helium-us915-cayenne-timer/dot333-helium-us915-cayenne-timer.ino)  program with no information entered to get the Device EUI<li>Setup the Helium side: https://console.helium.com/ for what it does with the data. Add a new device and replace the given Device_EUI with the one above. Enter the other 2 values given from Helium into your sketch. The App_eui and the longer App_key. Run the program and open the Serial monitor<li> On Helium devices click the debug black icon and see if data is incoming<li> Login to [io.adafruit.com/](https://io.adafruit.com/) and collect your username and myKey to auto make a Helium-adafruit Integration. It will auto format it like the following ```mqtts://username:myKey@adafruit.io:8883``` Give your integration a number <li> In Helium flows connect the device--> function cayenneLPP --> adafruit<li> Check debug for data then Adafruit feeds for data.<li> Good luck. I use the https://io.adafruit.com/ MQTT with Cayenne encoding, but lots of other options out there.     |
| <a name="29" href="#29">`29`</a>. TFT Touch Screen or 128x128 Grayscale Fast refresh OLED                         |        [dot218-TFTV2-touchScreen.ino](https://github.com/hpssjellis/portenta-pro-community-solutions/blob/main/examples/dot2-portenta-h7-with-accessories/dot21-sensors/dot218-TFTV2-touchScreen/dot218-TFTV2-touchScreen.ino)  or  [dot229-128x128-gray-oled.ino](https://github.com/hpssjellis/portenta-pro-community-solutions/blob/main/examples/dot2-portenta-h7-with-accessories/dot22-actuators/dot229-128x128-gray-oled/dot229-128x128-gray-oled.ino)                                                                                                                                                                    |       [<img src="https://img.youtube.com/vi/SvW3U7YzV0Y/hqdefault.jpg" width=600 />](https://www.youtube.com/watch?v=SvW3U7YzV0Y&list=PL57Dnr1H_egv1FVzAcCZVeANJMs3Hta05&index=16)       |                           <img src="https://user-images.githubusercontent.com/5605614/235280870-60b51050-58c9-4494-a663-57518bee4e14.png" width = 200/>     <br>    Real Assignment: Presently the Touch Screen sensor is not reading completly to the edges of the screen, see if you can figure out why? Is it just the mapping of raw values to real values, the main resistor amount set at 300 ohms, the wire length. What is it? Fix it.    |
| <a name="30" href="#30">`30`</a>.  LVGL Portenta Viewer on Full HD Screen   (Needs USB-C to HDMI adaptor)   Not yet working for my schools computer screens.                  |    Ambrose got this working wth both library versions 0.7 and 0.8 see code at [portenta-lvgl-8.3.6-ambrose.ino](https://github.com/VladTheImpaler32/robotics2023/blob/main/portenta-lvgl-8.3.6-ambrose/%20portenta-lvgl-8.3.6-ambrose.ino)                                                                                                                                                                          |           |                 |        |   This example [LVGL-counter](https://github.com/arduino-libraries/Arduino_Pro_Tutorials/blob/main/examples/Creating%20GUIs%20with%20LVGL/lvglCounter/lvglCounter.ino) Might work for you. I am waiting for a simple text and line drawing example  |
| <a name="31" href="#31">`31`</a>.  PCB Board Build using [easyEDA](https://easyeda.com/)                                                                                                                                                                                                    |  Great starter tutorial to make a PCB with a battery holder, resistor and ligtht<br>   [<img src="https://img.youtube.com/vi/gjPNYMRA0m8/hqdefault.jpg" width=600 />](https://www.youtube.com/watch?v=gjPNYMRA0m8&list=PLbKMtvtYbdPMZfzGuVTdc0MWKrFvU4nsu&index=2)      ||       I have found lots of PCB design videos that are either to complex or just long and boring. The video pressented here was not made by me but is very short and many of my animation students can follow it very quickly to make their own board using easyEDA   |
| <a name="32" href="#32">`32`</a>. [JLCPCB](https://jlcpcb.com/) order board for Printing (Has a cost for 5 small boards ~$20 USD including shipping)                     |            Take the edit file from the above PCB build using [easyEDA](https://easyeda.com/) and produce the Gerber file ready for printing using [JLCPCB](https://jlcpcb.com/) My public school students do not have to do this step.   |


 
 
 
 <br><br><br>
 
 
 ###  [Elecrow Starter Kit](https://www.robotshop.com/ca/en/elecrow-starter-kit-raspberry-pi-arduino.html) with [Seeeduino XIAO](https://www.robotshop.com/ca/en/seeeduino-xiao-arduino-compatible-board-pre-soldered.html) (Need a USB-C cable!) For students doing [Stage 2](https://github.com/hpssjellis/maker100/blob/main/price-list-individuals.md#step-2-generic-sensor-and-arduino-equipment) of the self learning process.

 
| Elecrow Starter Kit                          | Example Code                                                                                                                                                                 | Youtube Video | Resource Link 1 | Setup Image | To Do |
|:---|:---|:---|:---|:---|:---|
| <a name="stage2A01" href="#stage2A01">`stage2A01`</a>.           |     LED with resistor on and off. Any Pin --> resistor -->LED --> Ground <br> Like [#5 SOS](https://github.com/hpssjellis/maker100/blob/main/README.md#5) above <br> [dot22a-blink-an-led.ino](https://github.com/hpssjellis/portenta-pro-community-solutions/tree/main/examples/dot2-portenta-h7-with-accessories/dot22-actuators/dot22a-blink-an-led/dot22a-blink-an-led.ino)          |    Not really this video as it blinks the onboard LED    [<img src="https://img.youtube.com/vi/iDC3vuBGGcg/hqdefault.jpg" width=600 />](https://www.youtube.com/watch?v=iDC3vuBGGcg&list=PL57Dnr1H_egv1FVzAcCZVeANJMs3Hta05&index=11)        |          |        |        |
| <a name="stage2A02" href="#stage2A02">`stage2A02`</a>.           |    Touch Sensor <br>Not much different from [#3 ](https://github.com/hpssjellis/maker100/blob/main/README.md#3) above<br>         [dot211-any-variable-resistor-sensor.ino](https://github.com/hpssjellis/portenta-pro-community-solutions/blob/main/examples/dot2-portenta-h7-with-accessories/dot21-sensors/dot211-any-variable-resistor-sensor/dot211-any-variable-resistor-sensor.ino)   A wire from GND-->resistor-->A0 and another from 3V3 --> touch sensor --> A0                                                                                                                                                                         |       [<img src="https://img.youtube.com/vi/GR3D8C6dOl8/hqdefault.jpg" width=600 />](https://www.youtube.com/watch?v=GR3D8C6dOl8&list=PL57Dnr1H_egv1FVzAcCZVeANJMs3Hta05&index=3)                 |          |        |        |
| <a name="stage2A03" href="#stage2A03">`stage2A03`</a>.           |    Temperature Sensor  <br> Similar to [dot11-hello-blink.ino](https://github.com/hpssjellis/portenta-pro-community-solutions/blob/main/examples/dot1-portentaH7-examples/dot11-hello-blink/dot11-hello-blink.ino) just need to connect the Signal to A0, VIN to 5V and GND to ground           |               |          |        |        |
| <a name="stage2A04" href="#stage2A04">`stage2A04`</a>.           |  Range Finder Same as [maker100 #18](https://github.com/hpssjellis/maker100/blob/main/README.md#18) above. <br>Code at [dot214-RangeFinder.ino](https://github.com/hpssjellis/portenta-pro-community-solutions/blob/main/examples/dot2-portenta-h7-with-accessories/dot21-sensors/dot214-RangeFinder/dot214-RangeFinder.ino)                |          [<img src="https://img.youtube.com/vi/E1B_iE171E8/hqdefault.jpg" width=600 />](https://www.youtube.com/watch?v=E1B_iE171E8&list=PL57Dnr1H_egv1FVzAcCZVeANJMs3Hta05&index=13)           |          |        |        |
| <a name="stage2A05" href="#stage2A05">`stage2A05`</a>.           |   Joy Stick               |               |          |        |        |
| <a name="stage2A06" href="#stage2A06">`stage2A06`</a>.           |  LCD                |               |          |        |        |
| <a name="stage2A07" href="#stage2A07">`stage2A07`</a>.           |  IR-Automation                |               |          |        |        |

 
 <br><br><br>
 
 
 
 

### More [Helium](https://www.helium.com/) topics if time permits 

| More Helium Portenta Topics                          | Example Code                                                                                                                                                                 | Youtube Video | Resource Link 1 | Setup Image | To Do |
|:---|:---|:---|:---|:---|:---|
| <a name="helium1" href="#helium1">`helium1`</a>.      LoRaWan-Helium-HTTP-Decoder-Adafruit (Harder but more flexible)         |      [dot335-helium-http-adafruit-connect.ino](https://github.com/hpssjellis/portenta-pro-community-solutions/blob/main/examples/dot3-portenta-vision-shields/dot33-lorawan-specific/dot335-helium-http-adafruit-connect/dot335-helium-http-adafruit-connect.ino)            |     This is the best most flexible Helium to HTTP example, also shows how to write a decoder   [<img src="https://img.youtube.com/vi/wt_WZ1sBDeM/hqdefault.jpg" width=600 />](https://www.youtube.com/watch?v=wt_WZ1sBDeM&list=PL57Dnr1H_eguoFKLWY0nLMz0QI3nyQVmQ&index=12)       |    [Helium Official Documentation](https://docs.helium.com/use-the-network/devices/development/arduino/lora-vision-shield/arduino/)   |        |        |
| <a name="helium2" href="#helium2">`helium2`</a>.            |                  |               |          |        |        |
| <a name="helium3" href="#helium3">`helium3`</a>.           |                  |               |          |        |        |
| <a name="helium4" href="#helium4">`helium4`</a>.           |                  |               |          |        |        |
| <a name="helium5" href="#helium5">`helium5`</a>.           |                  |               |          |        |        |
| <a name="helium6" href="#helium6">`helium6`</a>.            |                  |               |          |        |        |


<br><br><br>

### More [Edge Impulse](https://www.edgeimpulse.com/) Machine Learning topics if time permits 

| More Machine Learning Portenta Topics                          | Example Code                                                                                                                                                                 | Youtube Video | Resource Link 1 | Setup Image | To Do |
|:---|:---|:---|:---|:---|:---|
| <a name="ml1" href="#ml1">`ml1`</a>.     (All my Portenta with LoRa Vision Shield examples are in the dot511 area of the Portenta-pro-community-examples arduino library)         |   [dot511-vision-shield](https://github.com/hpssjellis/portenta-pro-community-solutions/tree/main/examples/dot5-portenta-machine-learning/dot51-portenta-edge-impulse-ml/dot511-vision-shield)               |               |          |        |        |
| <a name="ml2" href="#ml2">`ml2`</a>.            |                  |               |          |        |        |
| <a name="ml3" href="#ml3">`ml3`</a>.           |                  |               |          |        |        |
| <a name="ml4" href="#ml4">`ml4`</a>.           |                  |               |          |        |        |
| <a name="ml5" href="#ml5">`ml5`</a>.           |                  |               |          |        |        |
| <a name="ml6" href="#ml6">`ml6`</a>.           |                  |               |          |        |        |



<br><br><br>


### Advanced topics if time permits (or you want to be an Engineer)

| Advanced Topic                          | Example Code                                                                                                                                                                 | Youtube Video | Resource Link 1 | Setup Image | To Do |
|--------------------------------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|---------------|-----------------|--------|--------|
| <a name="advanced0" href="#advanced0">`advanced0`</a>.  Dual Core Programming                         |                                                                                                                                                                              |               |                 |        |        |
| <a name="advanced1" href="#advanced1">`advanced1`</a>.   [WebSocket-Gitpod](https://github.com/hpssjellis/Particle-Spark-Core-Photon-Websocket-Hack)   (Not Yet Fully Working)                       |                                                                                                                                                                              |               |                 |        |        |
| <a name="advanced2" href="#advanced2">`advanced2`</a>.  [Local-cpp-Compile-Gitpod](https://github.com/hpssjellis/my-gitpod-of-edge-impulse)  (Not Yet Fully Working)                         |                                                                                                                                                                              |               |                 |        |        |
| <a name="advanced3" href="#advanced3">`advanced3`</a>.  LoRa using [GrumpOldPizza](https://github.com/GrumpyOldPizza/ArduinoCore-stm32l0)-Tlera-board                         |                                                                                                                                                                              |               |                 |        |        |
| <a name="advanced4" href="#advanced4">`advanced4`</a>.  MQTT server (Not ready for video)                      |                                                                                                                                                                              |               |                 |        |        |
| <a name="advanced5" href="#advanced5">`advanced5`</a>.  SerialtTransfer with Breakout Board                        |          [dot44-serialTransfer-UART.ino](https://github.com/hpssjellis/portenta-pro-community-solutions/blob/main/examples/dot4-portenta-breakout-board/dot44-serialTransfer-UART/dot44-serialTransfer-UART.ino)                                                                                                                                                                 |               |                 |        |        |
| <a name="advanced6" href="#advanced6">`advanced6`</a>.  ArduinoJSON with Breakout Board                        |          [dot43-ArduinoJSON-UART.ino](https://github.com/hpssjellis/portenta-pro-community-solutions/blob/main/examples/dot4-portenta-breakout-board/dot43-ArduinoJSON-UART/dot43-ArduinoJSON-UART.ino)                                                                                                                                                                       |               |                 |        |        |
| <a name="advanced7" href="#advanced7">`advanced7`</a>.                          |                                                                                                                                                                              |               |                 |        |        |
| <a name="advanced8" href="#advanced8">`advanced8`</a>.                         |                                                                                                                                                                              |               |                 |        |        |
| <a name="advanced9" href="#advanced9">`advanced9`</a>.                         |                                                                                                                                                                              |               |                 |        |        |
| <a name="advanced10" href="#advanced10">`advanced10`</a>.                           |                                                                                                                                                                              |               |                 |        |        |






### Community Suggestions


| Advanced Topic                          | Example Code                                                                                                                                                                 | Youtube Video | Resource Link 1 | Setup Image | To Do |
|--------------------------------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|---------------|-----------------|--------|--------|
| <a name="community1" href="#community1">`community1`</a>. By [Ryan McMullen](https://twitter.com/The13thParish/status/1414763290287239168?s=20) Lidar Sensor (Not yet purchased)                         |           |               |       [Arduino capable Lidar Sensor](https://www.amazon.com/MakerFocus-Single-Point-Ranging-Pixhawk-Compatible/dp/B075V5TZRY/ref=sr_1_3?dchild=1&keywords=lidar+sensor+arduino&qid=1631212121&sr=8-3)   or [Robot Shop Lidar](https://www.robotshop.com/ca/en/rplidar-a1m8-360-degree-laser-scanner-development-kit.html)       |        |        |
| <a name="community2" href="#community2">`community2`</a>. By [@HuffmanLabDU](https://twitter.com/huffmanlabdu)  CO2 Monitor                  |                                                                                                                                                                              |        |  [Thermal Array](https://www.amazon.com/AMG8833-Thermal-Imager-Temperature-Infrared/dp/B07YZRGVB9/ref=sr_1_1?dchild=1&keywords=AMG8833+IR+8+*+8+Thermal+Imager+Array+Temperature+Sensor+Module+8x8&qid=1599151281&sr=8-1) For the XIAO board [xiao-thermal.ino](https://github.com/hpssjellis/my-examples-for-the-arduino-portentaH7/blob/master/research/xiao-thermal.ino)                     |        |   Connect a CO2 monitor perhaps with a GPS device and or a thermo array to the Arduino Portenta and perhaps send the information over WiFi or the Helium Network    |
| <a name="community2" href="#community2">`community3`</a>.                           |           |               |                 |        |        |
| <a name="community3" href="#community3">`community4`</a>.                           |           |               |                 |        |        |
| <a name="community4" href="#community4">`community5`</a>.                           |           |               |                 |        |        |




# Maker 100, Robotics and Machine Learning Basics with the Dual Core Arduino Portenta and Shields


Started Jun 23rd, 2021

By: Jeremy Ellis, Technology Teacher, BC, Canada

###### Use at your own risk!

### Hopefully this will be ready for my students in February 2022


# This course is for Makers, not soon to be Engineers or Computer Scientists! 
Why, because I teach things as simply as possible but not necessarily the correct way. (Although soon to be Engineers are welcome to blast through the course. Seriously, these capable pre-engineering students have sometimes finished my semester long course in under 2 weeks!)

*All University Undergrads, except Engineers and Computer Scientists, should take a simplified Robotics and Machine Learning course. Quote by Jeremy Ellis July 10th, 2021*


### I use the $ 103.40 USD Arduino Pro [PortentaH7](https://store.arduino.cc/usa/portenta-h7) Dual Core Micro-Controller with the $45.99 USD [Breakout Board](https://store.arduino.cc/usa/portenta-breakout) and $63.00 USD [LoRa Vision Shield](https://store.arduino.cc/usa/portenta-vision-shield-lora)  and/or $47.15 USD [Ethernet Vision Shield](https://store.arduino.cc/usa/portenta-vision-shield), possibly more shields later.

<br><img src="media/ArduinoProBoards.jpg" width = 600/>

Yes they are expensive, ask any teacher (music, shop, sewing, science) why they don't purchase cheap equipment. See other boards below for cheaper, not as good, options. When your Administrator says "Why don't you get the $4 RPI Pico", have an answer ready.

## Links on this page.
[Top of page](#maker-100-robotics-and-machine-learning-basics-with-the-dual-core-arduino-portenta-and-shields)

[Course:](#course)  

[Course Description:](#course-description)

[Pre-Understanding:](#pre-understanding) 

[Basic Costs:](#basic-costs)

[Platforms:](#platforms) 

[Other Boards:](#other-boards) 

[Other Languages:](#other-Languages) 

[Post Understanding Activities:](#post-understanding-activites)  

[Course Notes](#course-notes)
 







## Course Description:

### First Year:

Circuit basics, Micro-controller basics (LED's buttons, wiring, breadboards), Platforms, Languages, simple sensors and actuators(screens/motors:DC, Servo, Stepper), connectors: I2C, SPI, Uart/Serial, connecting:WiFi, BLE, Ethernet, LoRaWan ([Helium](https://explorer.helium.com/coverag), [TTN The Things Network](https://www.thethingsnetwork.org/map), [Adafruit.io](https://io.adafruit.com/), [ArduinoCreate](https://www.arduino.cc/en/main/create)), possibly webSockets, Protocols:(IFTTT, MQTT, JSON, Bluetooth, ...), Machine Learning: ([Edge Impulse](https://www.edgeimpulse.com/), [My TensorFlowJS](https://www.rocksetta.com/tensorflowjs/) ), TinyML:Vision, Sound, Possibly Acceleration, Single object detection , Possibly Multiple object detection, Possibly Sensor ML, Final Project ( Proof of Concept, then with 3D printing structure, working Prototype ) Possible Javascript Machine Learning with Cell phones, web socket micro-controller connectivity.

### 2nd year: 

Blast through all first year assignments, multiple sensor and Actuators: ie: robot Arm, toy car, etc, concentrate on more Machine learning, with LoRa, WiFi, BLE and Ethernet connectivity, Sensor Machine Learning controlling Actuators, Product Prototyping.





## Pre-Understanding:
1. Circuits as multiple serial and parallel loops
2. Microcontroller Max current, Max voltage
3. Ohms Law V=IxR and Power equations
4. Electrical Safety  https://www.rugged-circuits.com/10-ways-to-destroy-an-arduino
5. Non-microcontroller electric circuits: switch on a motor etc. I use [Snapcircuits 750](https://www.robotshop.com/en/elenco-snap-circuits-educational-series-training-program-sc-750r.html) I use the old version that comes in a box, this case version would be good, but any circuit toys would be fine including online circuit visualizers.
6. My six Circuit components: Resistor, Diode, Transistor, Coil, Capacitor, Chip. 2021 bumped this up to [12 PCB components](https://www.seeedstudio.com/blog/2019/06/12/12-commonly-used-components-on-pcbs-for-beginners/)
7. Soldering: I don't teach it, all my examples are breadboard plug and play, also by grade 11 most of my students who are fully interested in tech have taught themselves how to solder. (I get them to do my soldering since those kids are better at it than I am!)
8. Coding: Many of my students take a Game Development Javascript programming class pre-robotics. It is a huge asset, but strangely some students take to programming like a fish to water and other students still have a hard time, even after several courses. I basically only teach 9 concepts: 1.Input/Output, 2.Variables, 3.Decisions (if statements), 4.Loops(for), 5.Functions, 6.Events, 7.Arrays, 8.Objects/Struct, 9.Classes(just using other peoples classes) 
9. 3D printing: Many of my students take a 3D printing course before or during taking robotics. Huge help for their final projects that need any structure: Most servo assignments need a structure around the servo to do something useful.
10. <b>Marking</b>: My students make videos and save to the school network. The video steps are: View a student name tag(s), then their wiring diagram they drew, the code flashed to the Portenta, then the Portenta fully wired and running, often back to the computer to show the Serial monitor or a webpage. These videos are very short as I can pause to have a longer look. Marking can also be done in person.  




## Basic Costs:

See main price list on the Portenta Pro Community Solutions Library Github mainly for classroom teachers [here](https://github.com/hpssjellis/portenta-pro-community-solutions/blob/main/pricelist.md)

New price list [price-list-individuals.md](price-list-individuals.md) mainly for individuals trying the course. 


## Platforms:   
[Arduino Regular IDE  Version 1.8.??  Download](https://www.arduino.cc/en/software) Decade long tested, works great

[Arduino New IDE Version 2.?.?  Download](https://www.arduino.cc/en/software) Has some advantages, but still fairly Beta

[Arduinio Cloud](https://docs.arduino.cc/cloud/iot-cloud/tutorials/iot-cloud-getting-started) Has online advantages, very powerful with Paid version but also has issues

[Platformio](https://platformio.org/)  Easy install of Visual Studio Code has lots of advantages, bit of a learning curve

[Draft My Gitpod of Edge impulse](https://github.com/hpssjellis/my-gitpod-of-edge-impulse) Huge learning curve, but has the benefit of complete control of cloud setup for students, loads [here](https://gitpod.io/#github.com/hpssjellis/my-gitpod-of-edge-impulse)


## Other Boards:

Some students just need to use cheaper equipment. Not everyone should be playing around with a $100 board who can't connect it properly. 
I have a class set of 15 of each of the Portenta Series <br><img src="media/Portenta-pro-boxes.jpg" width = 500/> 

Following are a few cheaper boards that could do parts of this course although the pins may be different. 

I also have a class set of 15 Seeeduino [Seeeduino XIAO](https://www.seeedstudio.com/Seeeduino-XIAO-Arduino-Microcontroller-SAMD21-Cortex-M0+-p-4426.html), for testing if a circuit is going to fry your board, you can't beat a $5 microcontroller. <br><br>

Hot off the press. The [NiclaVision](https://store-usa.arduino.cc/products/nicla-vision?selectedStore=us) is a contender for this course, has all the capabilities and cheaper than the Portenta, with Vision shield and MKR IMU.

1. The $115.00 USD [NiclaVision](https://store-usa.arduino.cc/products/nicla-vision?selectedStore=us) is very good for Color Vision, sound and accelerometer Machine Learning <br><img src="https://user-images.githubusercontent.com/5605614/157479032-f93ac6e1-1139-4886-bf40-9dfc6e8c2b9c.png" width = 200/><br><br>




2. The $33.40 USD [Nano 33 Ble Sense](https://store.arduino.cc/usa/nano-33-ble-sense-with-headers) is very good for sound and accelerometer Machine Learning <br><img src="media/Arduino-nano33BleSense.jpg" width = 200/><br><br>
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


## Post Understanding Activities: The Final Porject!

1. I have students try to stay away from final projects using Water or AC home 120/240 volts for obvious electrical safety precautions. I also have them stay away from drones as the commercial ones are very good and student testing their software with drones is too easy to smash your entire project.
2.  Individual Final Project with at least one sensor and one actuator
    1. Proof of Concept (POC) Sensor Actuator working
    2. Useful and/or fun
    3. Structure designed (3d Printed if needed)
    4. Final Project Prototype ready
    5. Can it be sold? If so how much. Is it worth it?
3. If time, final project with more sensors and actuators
4. If time, Group Project



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




## Wow

New version of Arduino MBED core v2.5.2 now allows memory splitting between the cores.

<img src="https://user-images.githubusercontent.com/5605614/134551018-fd6ae055-4d42-433e-af39-766fa70d89c2.png" width = 800/>

.


.


## XIAO Pinout
 
 ![image](https://user-images.githubusercontent.com/5605614/217329883-aaf85926-0aa4-4caf-aceb-a0749c75dd22.png)




## Latest Portenta Pinout
![Portneta Pinout](https://content.arduino.cc/assets/Pinout-PortentaH7_latest.png)

.

.


## Old Fairly Complex Portenta examples:

[https://github.com/hpssjellis/my-examples-for-the-arduino-portentaH7](https://github.com/hpssjellis/my-examples-for-the-arduino-portentaH7)

By: Jeremy Ellis, Tech Teacher, BC, Canada

###### Use at your own risk!

<a rel="me" href="https://masto.ai/@rocksetta">Mastodon</a>

My Github: [hpssjellis](https://github.com/hpssjellis?tab=repositories) , My twitter: [@rocksetta](https://twitter.com/rocksetta) , my Website [rocksetta.com](https://www.rocksetta.com/) My Arduino Forum [jerteach](https://forum.arduino.cc/u/jerteach/activity) my Edge Impulse Forum [rocksetta](https://forum.edgeimpulse.com/u/rocksetta/activity)

.


