/*
  Program for gardening with a number of moisture-sensors, valves and other I/Os

  This program is for use with a grow tent with three chambers. Fans, valves, pumps and moisture-sensors are
  controlled by Arduino. The case with this program is lighting controlled by a timer plugged directly into wall socket.

  The Arduino Mega2560 is the basis of this program.

  
*/

int s = (1000);
int m = s*60;
int h = m*60;
int d = h*24;

int seconds = s;
int minutes = m;
int hours = h;
int days = d;

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

int val1 = 0;
int val2 = 0;
int val3 = 0;
int val4 = 0;
int val5 = 0;
int val6 = 0;
int val7 = 0;
int val8 = 0;
int val9 = 0;
int val10 = 0;
int val11 = 0;
int val12 = 0;
int val13 = 0;
int val14 = 0;
int val15 = 0;
int val16 = 0;

int pump1 = 2;               // Pump for watering the plants

int valve1 = 3;              // Solenoid valve for White Ghost
int valve2 = 4;              // Solenoid valve for Schotch Bonnet
int valve3 = 5;              // Solenoid valve for Bulgarian Carrot
int valve4 = 6;              // Solenoid valve for Herbs

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
  
  val1 = analogRead(moistureSensor1);
  val2 = analogRead(moistureSensor2);
  val3 = analogRead(moistureSensor3);
  val4 = analogRead(moistureSensor4);
  val5 = analogRead(moistureSensor5);
  val6 = analogRead(moistureSensor6);
  val7 = analogRead(moistureSensor7);
  val8 = analogRead(moistureSensor8);
  val9 = analogRead(moistureSensor9);
  val10 = analogRead(moistureSensor10);
  val11 = analogRead(moistureSensor11);
  val12 = analogRead(moistureSensor12);
  val13 = analogRead(moistureSensor13);
  val14 = analogRead(moistureSensor14);
  val15 = analogRead(moistureSensor15);
  val16 = analogRead(moistureSensor16);

  if(val1 < 800 and val2 < 800 and val3 < 800) digitalWrite(valve1, LOW); else digitalWrite(valve1, HIGH);
  if(val4 < 800 and val5 < 800 and val6 < 800) digitalWrite(valve2, LOW); else digitalWrite(valve2, HIGH);
  if(val7 < 800 and val8 < 800 and val3 < 800) digitalWrite(valve3, LOW); else digitalWrite(valve3, HIGH);

}
