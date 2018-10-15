
#include <Servo.h>

Servo S1,S2,S3;  
int pos = 0;  
void setup() {
  S1.attach(9);
  S2.attach(10);
  S3.attach(11);
}
void OneStepForward()
{
  for (pos = 0; pos <= 30; pos += 1) { 
    // in steps of 1 degree
    S2.write(pos+90);              
    S3.write(90+pos);
    S1.write(90+pos);              
    delay(15);                     
  }
  for (pos = 30; pos >= 0; pos -= 1) { 
    S2.write(pos+90);              
    S3.write(90+pos);              
    delay(15);                     
  }
  for (pos = 30; pos >= 0; pos -= 1) { 
    S1.write(90+pos);
    delay(15);                     
  } 
}
void OneStepBackward(){
  for (pos = 0; pos <= 30; pos += 1) { 
    // in steps of 1 degree
    S2.write(pos+90);              
    S3.write(90+pos);
    S1.write(90-pos);              
    delay(15);                     
  }
  for (pos = 30; pos >= 0; pos -= 1) { 
    S2.write(pos+90);              
    S3.write(90+pos);              
    delay(15);                     
  }
  for (pos = 30; pos >= 0; pos -= 1) { 
    S1.write(90-pos);
    delay(15);                     
  } 
}
void loop() {
  for (pos = 0; pos <= 30; pos += 1) { 
    // in steps of 1 degree
    S2.write(pos+90);              
    S3.write(90+pos);
    S1.write(pos);              
    delay(15);                     
  }
  for (pos = 30; pos >= 0; pos -= 1) { 
    S2.write(pos+90);              
    S3.write(90+pos);              
    delay(15);                     
  }
  for (pos = 30; pos >= 0; pos -= 1) { 
    S1.write(pos);
    delay(15);                     
  }  
}

