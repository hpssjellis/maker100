// RC Car servo and big motor driver
// By Jeremy Ellis
// MIT license

// for now reference at https://github.com/hpssjellis/particle.io-photon-high-school-robotics/tree/master/a11-dc-motor-drivers
// although pin names wrong

// You are suppossed to get it working using the web-app
// Draw your circuit diagram first
// This program will just tell you if  the connections are working
// See https://www.pololu.com/product/1451 for assistance

// On motor driver board LED goes red for one direction and green for the other






#include <Arduino.h> // Only needed by https://platformio.org/
#include <Servo.h>

Servo myServo_D2;

void setup() {
  
    myServo_D2.attach(D2); // D2 should do PWM on Portenta
    pinMode(D3, OUTPUT);   // digital 0 to 1
    pinMode(D4, OUTPUT);   // PWM 0 to 255   // D4 might be a problem switch to D5 and switch D5 to D6
    pinMode(D5, OUTPUT);   // digital 0 to 1
    
                            // both off = glide, both on = brake (if motor can do that) 
    digitalWrite(D5, 1);    // set one direction
    digitalWrite(D3, 0);    // set one direction 
    
    pinMode(LEDB, OUTPUT);

    // to connect wires and put car on ground
    digitalWrite(LEDB, LOW);    // D7 on
    delay(15000);
    digitalWrite(LEDB, HIGH);    // D7 on
    delay(2000);
    
}

void loop() {
    
    digitalWrite(LEDB, LOW);    // D7 on

    myServo_D2.write(110); // turn
    analogWrite(D4, 50);   // go medium
    delay(300);
    analogWrite(D4, 0);     // stop
    delay(3000); 
    
    myServo_D2.write(70);   // turn
    analogWrite(D4, 50);   // go medium   
    delay(300);    
    analogWrite(D4, 0);     // stop
    delay(3000); 


    myServo_D2.write(90);   // go straight
    analogWrite(D4, 50);   // go medium   
    delay(300);    
    analogWrite(D4, 0);     // stop
    delay(3000); 

     // reverse direction
    digitalWrite(D5, 0);    // set one direction
    digitalWrite(D3, 1);    // set one direction 
  
    myServo_D2.write(90);   // go straight
    analogWrite(D4, 50);   // go medium   
    delay(300);    
    analogWrite(D4, 0);     // stop
    delay(3000); 
    
    digitalWrite(LEDB, HIGH);  // D7 off
    delay(9000);            // wait 9 seconds
        
}
