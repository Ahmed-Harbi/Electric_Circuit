#include <Servo.h> 
 
Servo myservo1;  // create servo object to control a servo 
Servo myservo2;
Servo myservo3;
Servo myservo4;
Servo myservo5;
                // a maximum of eight servo objects can be created 
 
int pos = 0;    // variable to store the servo position 
 
void setup() 
{ 
   myservo1.attach(8);  // attaches the servo on pin 8 to the servo object 
   myservo1.write(90); //stops the servo

   myservo2.attach(9);  // attaches the servo on pin 9 to the servo object 
   myservo2.write(90); //stops the servo

   myservo3.attach(10);  // attaches the servo on pin 10 to the servo object 
   myservo3.write(90); //stops the servo

   myservo4.attach(11);  // attaches the servo on pin 11 to the servo object 
   myservo4.write(90); //stops the servo

   myservo5.attach(12);  // attaches the servo on pin 12 to the servo object 
   myservo5.write(90); //stops the servo
  
   delay(1000);
   myservo1.write(0); 
   myservo2.write(0);    
   myservo3.write(0); 
   myservo4.write(0);    
   myservo5.write(0); 

}    

void loop()
{ 
}