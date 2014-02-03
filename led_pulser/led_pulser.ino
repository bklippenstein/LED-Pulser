

int i=0; //contains loop index
double brightness; //contains output of triganometric brightness function
double angle; //contains the angle in radins of the triganometric brightness function
int pwm; //contains the actual brightness of the LED

void setup() {
  
}

void loop() {
  
  i++;
  if(i=256)
  {
    i=0;
  }
  analogWrite(3,i); 
  delay(100);
}
