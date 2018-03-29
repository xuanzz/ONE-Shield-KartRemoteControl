//ModeSelector Setting
#define ModeSelectorPin A0 //pin number of variable resistor used for mode selector
// Linetracker Pins setting
#define TrackerPinL 2 //pin number of line tracker on left side
#define TrackerPinR 3 //pin number of line tracker on right side
#define STBY 15 //standby
//Motor A
#define PWMA 6 //Speed control 
#define AIN1 8 //Direction
#define AIN2 7 //Direction
//Motor B
#define PWMB 9 //Speed control
#define BIN1 16 //Direction
#define BIN2 10 //Direction
#define MovingSpeed 200 //speed of moving motor
#define HittingSpeed 255 //speed of hitting motor
// Ultrasonic Pins setting:
#define TRIGGER_PIN  9  // Arduino pin tied to trigger pin on the ultrasonic sensor.
#define ECHO_PIN     8  // Arduino pin tied to echo pin on the ultrasonic sensor.
#define MAX_DISTANCE 500 // Maximum distance we want to ping for (in centimeters). Maximum sensor distance is rated at 400-500cm.
#define RadarRange 40 // Radar range in cm when Sumo Car mode activated, when object detected is closer than the value, the car will give it a push
int Running = 0;
void setup()
{
  serialSetup();
  pinSetup();
}

void loop()
{
  serialRead();
  if (Running)
  {
    analogWrite(14, map(analogRead(A1), 0, 1023, 0, 255)); //red
     analogWrite(5, map(analogRead(A1), 0, 1023, 0, 255)); //red
  }
  else
  {
     analogWrite(14, 0);
    analogWrite(5, 0);
  }
}
