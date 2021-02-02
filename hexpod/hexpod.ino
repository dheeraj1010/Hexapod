

#include <Servo.h>
#define delay_univ 5
#define pos_L1 100;
#define pos_L2 100;    
#define pos_L3 100;    
#define pos_L4 100;    
#define pos_L5 100;    
#define pos_L6 100;    
#define pos_f1 78;    
#define pos_f2 78;
#define pos_f3 72;
#define pos_f4 100;    
#define pos_f5 69;
#define pos_f6 92;
    
Servo servo_L1;
Servo servo_L2; 
Servo servo_L3;
Servo servo_L4; 
Servo servo_L5;
Servo servo_L6; 
Servo servo_f1;
Servo servo_f2;
Servo servo_f3;
Servo servo_f4;
Servo servo_f5;
Servo servo_f6;





void setup() {
servo_L1.attach(2); 
servo_L2.attach(3); 
servo_L3.attach(4); 
servo_L4.attach(5); 
servo_L5.attach(6); 
servo_L6.attach(7); 
servo_f1.attach(8); 
servo_f2.attach(9);
servo_f3.attach(10); 
servo_f4.attach(11);
servo_f5.attach(12); 
servo_f6.attach(13); 




Serial.begin(9600);
Serial.println("HELLO Sir");
delay(100);


}

void loop() {/*
    if(Serial.available()>0)
      {
         char c = Serial.read();
           if(c == 'f')
             {
                forward();
                
             }

            if(c == 'b')
            {
              backward(); 
            }
            if(c == 'l')
            {
              left();
            }

            if(c == 'r')
            {
              right();
            }
  
          }*/
          
      
}


void org_pos()
{
    servo_L1.write(pos_L1);
  delay(15);
   Serial.println(pos_L1);
    servo_L2.write(pos_L2);
  delay(15);
  Serial.println(pos_L2);
    servo_L3.write(pos_L3);
  delay(15);
  Serial.println(pos_L3);
    servo_L4.write(pos_L4);
  delay(15);
  Serial.println(pos_L4);
    servo_L5.write(pos_L5);
  delay(15);
  Serial.println(pos_L5);
      servo_L6.write(pos_L6);
  delay(15);
  Serial.println(pos_L6);
      servo_f1.write(pos_f1);
  delay(15);
  Serial.println(pos_f1);
      servo_f2.write(pos_f2);
  delay(15);
  Serial.println(pos_f2);
      servo_f3.write(pos_f3);
  delay(15);
  Serial.println(pos_f3);
      servo_f4.write(pos_f4);
  delay(15);
  Serial.println(pos_f4);
      servo_f5.write(pos_f5);
  delay(15);
  Serial.println(pos_f5);
      servo_f6.write(pos_f6);
  delay(15);
  Serial.println(pos_f6);
}

void clk_odd()
{
  int i=0;
  for(i=0;i<30;i++)
  {
    servo_f1.write(i+pos_f1);     delay(delay_univ);
    servo_f3.write(i+pos_f3);    delay(delay_univ);
    servo_f5.write(i+pos_f5);    delay(delay_univ);
  }

  for(i=0;i<30;i++)
  {
    servo_L1.write(i+pos_L1);    delay(delay_univ);
    servo_L3.write(i+pos_L3);    delay(delay_univ);
    servo_L5.write(i+pos_L5);    delay(delay_univ);
  }

    for(i=30;i>0;i--)
  {
    servo_f1.write(i+pos_f1);    delay(delay_univ);
    servo_f3.write(i+pos_f3);    delay(delay_univ);
    servo_f5.write(i+pos_f5);    delay(delay_univ);
  }
  
}


void ant_clk_odd()
{
  int i=0;
  for(i=0;i<30;i++)
  {
    servo_f1.write(i+pos_f1);    delay(delay_univ);
    servo_f3.write(i+pos_f3);    delay(delay_univ);
    servo_f5.write(i+pos_f5);    delay(delay_univ);
  }

  for(i=0;i>-30;i--)
  {
    servo_L1.write(i+pos_L1);    delay(delay_univ);
    servo_L3.write(i+pos_L3);    delay(delay_univ);
    servo_L5.write(i+pos_L5);    delay(delay_univ);
  }

    for(i=30;i>0;i--)
  {
    servo_f1.write(i+pos_f1);    delay(delay_univ);
    servo_f3.write(i+pos_f3);    delay(delay_univ);
    servo_f5.write(i+pos_f5);    delay(delay_univ);
  }
  
}



void clk_even()
{
  int i=0;
  for(i=0;i<30;i++)
  {
    servo_f2.write(i+pos_f1);    delay(delay_univ);
    servo_f4.write(i+pos_f3);    delay(delay_univ);
    servo_f6.write(i+pos_f5);    delay(delay_univ);
  }

  for(i=0;i<30;i++)
  {
    servo_L2.write(i+pos_L1);    delay(delay_univ);
    servo_L4.write(i+pos_L3);    delay(delay_univ);
    servo_L6.write(i+pos_L5);    delay(delay_univ);
  }

    for(i=30;i>0;i--)
  {
    servo_f2.write(i+pos_f1);    delay(delay_univ);
    servo_f4.write(i+pos_f3);    delay(delay_univ);
    servo_f6.write(i+pos_f5);    delay(delay_univ);
  }
  
}



void ant_clk_even()
{
  int i=0;
  for(i=0;i<30;i++)
  {
    servo_f2.write(i+pos_f1);    delay(delay_univ);
    servo_f4.write(i+pos_f3);    delay(delay_univ);
    servo_f6.write(i+pos_f5);    delay(delay_univ);
  }

  for(i=0;i>-30;i--)
  {
    servo_L2.write(i+pos_L1);    delay(delay_univ);
    servo_L4.write(i+pos_L3);    delay(delay_univ);
    servo_L6.write(i+pos_L5);    delay(delay_univ);
  }

    for(i=30;i>0;i--)
  {
    servo_f2.write(i+pos_f1);    delay(delay_univ);
    servo_f4.write(i+pos_f3);    delay(delay_univ);
    servo_f6.write(i+pos_f5);    delay(delay_univ);
  }
  
}

void forward()
{
  clk_odd();
  ant_clk_even();
   org_pos();
}

void backward()
{
  clk_even();
  ant_clk_odd();
   org_pos();
}

void right()
{
  clk_even();
  clk_odd();
  org_pos();
}

void left()
{
    ant_clk_even();
  ant_clk_odd();
  org_pos();
}
