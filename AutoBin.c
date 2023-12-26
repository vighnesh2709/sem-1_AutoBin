#include <Servo.h>
Servo s1;
int trigpin=3;
int echopin=2;
long duration,cm;
int count=0;


void setup() {
  Serial.begin(9600);
  pinMode(trigpin, OUTPUT);
  pinMode(trigpin_2,OUTPUT);
  pinMode(echopin, INPUT);  
  pinMode(echopin_2,INPUT);
  pinMode(1,OUTPUT);
  s1.attach(9);
  
}

void loop() {
    /*{digitalWrite(1,HIGH);
    delay(2000);
    digitalWrite(2,LOW);
    delay(1000);}*/
  digitalWrite(trigpin, LOW);
  delay(2);
  digitalWrite(trigpin, HIGH);
  delay(10);
  digitalWrite(trigpin, LOW);

  duration=pulseIn(echopin,HIGH);
  cm=duration/29/2;

  Serial.print("the distance is: ");
  Serial.println(cm);
  
  
 
 /* if (cm<=10)
    {
      s1.write(0);
      delay(1000);
      s1.write(180);
      delay(1000);
      s1.write(0);
    
    }*/

   if (cm<=10)
    {
      count=1;
    }
  else
    {
      count=0;
    }
  switch(count)
  {
    case(0):
      s1.write(0);
      delay(1);
      break;
    case(1):
      s1.write(140);
      delay(1000);
      break;
  }
}

#CODE(for displaying the filling of the bin):
#include <Servo.h>
Servo s1;
int trigpin=3;
int trigpin_2=5;
int echopin=2;
int echopin_2=4;
long duration,cm,cm_2,duration_2;
int count=0;


void setup() {
  Serial.begin(9600);
  pinMode(trigpin, OUTPUT);
  pinMode(trigpin_2,OUTPUT);
  pinMode(echopin, INPUT);  
  pinMode(echopin_2,INPUT);
  pinMode(1,OUTPUT);
  s1.attach(9);
  
}

void loop() {
    /*{digitalWrite(1,HIGH);
    delay(2000);
    digitalWrite(2,LOW);
    delay(1000);}*/
  digitalWrite(trigpin, LOW);
  delay(2);
  digitalWrite(trigpin, HIGH);
  delay(10);
  digitalWrite(trigpin, LOW);

  duration=pulseIn(echopin,HIGH);
  cm=duration/29/2;

  Serial.print("the distance is: ");
  Serial.println(cm);
  
  
 
 /* if (cm<=10)
    {
      s1.write(0);
      delay(1000);
      s1.write(180);
      delay(1000);
      s1.write(0);
    
    }*/

   if (cm<=10)
    {
      count=1;
    }
  else
    {
      count=0;
    }
  switch(count)
  {
    case(0):
      s1.write(0);
      delay(1);
      break;
    case(1):
      s1.write(140);
      delay(1000);
      break;
  }
}

