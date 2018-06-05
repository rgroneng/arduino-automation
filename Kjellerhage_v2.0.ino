/*
  Program for gardening with a number of moisture-sensors, soilves and other I/Os

  This program is for use with a grow tent with three chambers. Fans, soilves, pumps and moisture-sensors are
  controlled by Arduino. The case with this program is lighting controlled by a timer plugged directly into wall socket.

  The Arduino Mega2560 is the basis of this program.

  
*/

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
int moistureSensor15 = A14;
int moistureSensor16 = A15;

bool pump1 = 2;               // Pump for watering the plants

bool valve1 = 3;              // Solenoid soilve for White Ghost
bool valve2 = 4;              // Solenoid soilve for Schotch Bonnet
bool valve3 = 5;              // Solenoid soilve for Bulgarian Carrot
bool valve4 = 6;              // Solenoid soilve for Herbs

int fan1 = 7;                 // Fan for main chamber
int fan2 = 8;                 // Fan for secondary high chamber
int fan3 = 9;                 // Fan for secondary low chamber

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

  // declare the soilves as OUTPUTS:
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

int soil1 = analogRead(moistureSensor1);
int soil2 = analogRead(moistureSensor2);
int soil3 = analogRead(moistureSensor3);
int soil4 = analogRead(moistureSensor4);
int soil5 = analogRead(moistureSensor5);
int soil6 = analogRead(moistureSensor6);
int soil7 = analogRead(moistureSensor7);
int soil8 = analogRead(moistureSensor8);
int soil9 = analogRead(moistureSensor9);
int soil10 = analogRead(moistureSensor10);
int soil11 = analogRead(moistureSensor11);
int soil12 = analogRead(moistureSensor12);
int soil13 = analogRead(moistureSensor13);
int soil14 = analogRead(moistureSensor14);
int soil15 = analogRead(moistureSensor15);
int soil16 = analogRead(moistureSensor16);

if(soil1 > 850 and soil2 > 850 and soil3 > 850)
{
  digitalWrite(valve1, HIGH);
  delay(10000);
  digitalWrite(valve1, LOW);
  delay(120000);
}

if(soil4 > 850 and soil5 > 850 and soil6 > 850)
{
  digitalWrite(valve1, HIGH);
  delay(10000);
  digitalWrite(valve1, LOW);
  delay(120000);
}

if(soil7 > 850 and soil8 > 850 and soil9 > 850)
{
  digitalWrite(valve1, HIGH);
  delay(10000);
  digitalWrite(valve1, LOW);
  delay(120000);
}

if(soil10 > 850 and soil11 > 850 and soil12 > 850)
{
  digitalWrite(valve1, HIGH);
  delay(10000);
  digitalWrite(valve1, LOW);
  delay(120000);
}
}
