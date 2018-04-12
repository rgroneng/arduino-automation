/*
  Program for gardening with a number of moisture-sensors, valves and other I/Os

  This program is for use with a grow tent with three chambers. Fans, valves, pumps and moisture-sensors are
  controlled by Arduino. The case with this program is lighting controlled by a timer plugged directly into wall socket.

  The Arduino Mega2560 is the basis of this program.

  
*/
    // Declaring milliseconds in common units of time

int s = (1000);
int m = s*60;
int h = m*60;
int d = h*24;

int seconds = s;              // Seconds can be shortened as s, or written as seconds
int minutes = m;              // Minutes can be shortened as m, or written as minutes
int hours = h;                // Hours can be shortened as h, or written as hours
int days = d;                 // Days can be shortened as d, or written as days

int moistureSensor1 = A0;     // Sensor for measuring the moisture in White Ghost 1
int moistureSensor2 = A1;     // Sensor for measuring the moisture in White Ghost 2
int moistureSensor3 = A2;     // Sensor for measuring the moisture in White Ghost 3
int moistureSensor4 = A3;     // Sensor for measuring the moisture in Scotch Bonnet 1
int moistureSensor5 = A4;     // Sensor for measuring the moisture in Scotch Bonnet 2
int moistureSensor6 = A5;     // Sensor for measuring the moisture in Scotch Bonnet 3
int moistureSensor7 = A6;     // Sensor for measuring the moisture in Bulgarian Carrot 1
int moistureSensor8 = A7;     // Sensor for measuring the moisture in Bulgarian Carrot 2
int moistureSensor9 = A8;     // Sensor for measuring the moisture in Carolina Reaper 1
int moistureSensor10 = A9;    // Sensor for measuring the moisture in Carolina Reaper 2
int moistureSensor11 = A10;   // Sensor for measuring the moisture in Black Olives Pepper 1
int moistureSensor12 = A11;   // Sensor for measuring the moisture in Black Olives Pepper 2
int moistureSensor13 = A12;   // Sensor for measuring the moisture in Ring of Fire 1
int moistureSensor14 = A13;   // Sensor for measuring the moisture in Ring of Fire 2
int moistureSensor15 = A14;   // Sensor for measuring the moisture in *****
int moistureSensor16 = A15;   // Sensor for measuring the moisture in *****

int pump1 = 2;               // Pump for watering the plants

int valve1 = 3;              // Solenoid valve for White Ghost
int valve2 = 4;              // Solenoid valve for Schotch Bonnet
int valve3 = 5;              // Solenoid valve for Bulgarian Carrot
int valve4 = 6;              // Solenoid valve for Herbs

int fan1 = 7;                 // Fan for main chamber
int fan2 = 8;                 // Fan for secondary high chamber
int fan3 = 9;                 // Fan for secondary low chamber

int pthscl = 21;             // Connect the SCL pin to Mega2560 I/O-pin 21
int pthsda = 20;             // Connect the SDA pin to Mega2560 I/O-pin 20

void setup() {
  // declare the moisture sensors as INPUTS:
  pinMode(moistureSensor1, INPUT);
  pinMode(moistureSensor2, INPUT);
  pinMode(moistureSensor3, INPUT);
  pinMode(moistureSensor4, INPUT);
  pinMode(moistureSensor5, INPUT);
  pinMode(moistureSensor6, INPUT);
  pinMode(moistureSensor7, INPUT);
  pinMode(moistureSensor8, INPUT);
  pinMode(moistureSensor9, INPUT);
  pinMode(moistureSensor10, INPUT);
  pinMode(moistureSensor11, INPUT);
  pinMode(moistureSensor12, INPUT);
  pinMode(moistureSensor13, INPUT);
  pinMode(moistureSensor14, INPUT);
  pinMode(moistureSensor15, INPUT);
  pinMode(moistureSensor16, INPUT);

  // declare the pump as an OUTPUT:
  pinMode(pump1, OUTPUT);

  // declare the valves as OUTPUTS:
  pinMode(valve1, OUTPUT);
  pinMode(valve2, OUTPUT);
  pinMode(valve3, OUTPUT);
  pinMode(valve4, OUTPUT);

  // declare the fans as OUTPUTS:
  pinMode(fan1, OUTPUT);
  pinMode(fan2, OUTPUT);
  pinMode(fan3, OUTPUT);

  // Setup the serial:
  Serial.begin(9600);
  
}

void loop() {

  digitalWrite(fan1, HIGH);
  digitalWrite(fan2, HIGH);
  digitalWrite(fan3, HIGH);

  if(valve1 == HIGH or valve2 == HIGH or valve3 == HIGH); digitalWrite(pump1, HIGH);
  
  moistureSensor1 = analogRead(moistureSensor1);
  moistureSensor2 = analogRead(moistureSensor2);
  moistureSensor3 = analogRead(moistureSensor3);
  moistureSensor4 = analogRead(moistureSensor4);
  moistureSensor5 = analogRead(moistureSensor5);
  moistureSensor6 = analogRead(moistureSensor6);
  moistureSensor7 = analogRead(moistureSensor7);
  moistureSensor8 = analogRead(moistureSensor8);
  moistureSensor9 = analogRead(moistureSensor9);
  moistureSensor10 = analogRead(moistureSensor10);
  moistureSensor11 = analogRead(moistureSensor11);
  moistureSensor12 = analogRead(moistureSensor12);
  moistureSensor13 = analogRead(moistureSensor13);
  moistureSensor14 = analogRead(moistureSensor14);
  moistureSensor15 = analogRead(moistureSensor15);
  moistureSensor16 = analogRead(moistureSensor16);

  if(moistureSensor1 < 800 and moistureSensor2 < 800 and moistureSensor3 < 800) digitalWrite(valve1, LOW); else digitalWrite(valve1, HIGH);
  if(moistureSensor4 < 800 and moistureSensor5 < 800 and moistureSensor6 < 800) digitalWrite(valve2, LOW); else digitalWrite(valve2, HIGH);
  if(moistureSensor7 < 800 and moistureSensor8 < 800 and moistureSensor3 < 800) digitalWrite(valve3, LOW); else digitalWrite(valve3, HIGH);

  

}
