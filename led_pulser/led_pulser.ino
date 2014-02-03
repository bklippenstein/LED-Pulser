
#include <SoftwareSerial.h>

int i=0; //contains loop index
double brightness = 0; //contains output of triganometric brightness function
double angle = 0; //contains the angle in radins of the triganometric brightness function
int pwm = 0; //contains the actual brightness of the LED
int max_index = 256;
int serialDebug = 0;

void setup() {
  // initialize serial communications at 9600 bps:
  if(serialDebug)
  {
    Serial.begin(9600); 
    Serial.print("Begin.\n");
  }
}

void loop() {
  
  i++;
  if(i==256)
  {
    i=0;
  }
  angle = 6.283*i/255;
   if(serialDebug)
  {
    Serial.print("angle: ");
    Serial.print(angle,5);
  }

  brightness = 1 + sin(angle);
  if(serialDebug)
  {
    Serial.print(" brightness: ");
    Serial.print(brightness,5);
  }

  pwm = brightness * 128;
  if(serialDebug)
  {
    Serial.print(" pwm: ");
    Serial.print(pwm);
    Serial.print("\n");
  }
  
  analogWrite(3,pwm); 
  delay(10);
}
