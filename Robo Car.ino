#include <Servo.h>
Servo s = Servo();

#include <Ultrasonic.h>
Ultrasonic u = Ultrasonic(3,4);

void setup() {
  // put your setup code here, to run once:
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(2,OUTPUT);
  s.attach(8);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
  analogWrite(11,100);

  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  analogWrite(5,100);

  Serial.begin(9600);

}
void loop() {
  // put your main code here, to run repeatedly:
  int x = Serial.read();
  if( x=='1'){                //forward
    s.write(90);
    delay(300);
    int d = u.read();
    if( d>10 ){
     digitalWrite(12,HIGH);
     digitalWrite(13,LOW);
     digitalWrite(6,LOW);
     digitalWrite(7,HIGH);
     delay(200);
     digitalWrite(12,LOW);
     digitalWrite(13,LOW);
     digitalWrite(6,LOW);
     digitalWrite(7,LOW);
     digitalWrite(2,HIGH);
     delay(1000);
     digitalWrite(2,LOW);
    }
  }

   if( x=='2'){                //rewers
    digitalWrite(2,HIGH);
    delay(100);
    digitalWrite(2,LOW);
    delay(100);
    digitalWrite(2,HIGH);
    delay(100);
    digitalWrite(2,LOW);
    delay(100);
    digitalWrite(2,HIGH);
    delay(100);
    digitalWrite(2,LOW);
    delay(100);
    digitalWrite(2,HIGH);
    delay(100);
    digitalWrite(2,LOW);
    delay(100);
    digitalWrite(12,LOW);
    digitalWrite(13,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,LOW);
    delay(100);
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
    digitalWrite(2,HIGH);
    delay(1000);
    digitalWrite(2,LOW);
   }

   if( x=='0'){                //stop
    digitalWrite(2,HIGH);
    delay(1000);
    digitalWrite(2,LOW);
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
   }

   if( x=='3'){                //turn right
    digitalWrite(9,HIGH);
    delay(100);
    digitalWrite(9,LOW);
    delay(100);
    digitalWrite(9,HIGH);
    delay(100);
    digitalWrite(9,LOW);
    delay(100);
    digitalWrite(9,HIGH);
    delay(100);
    digitalWrite(9,LOW);
    delay(100);
    digitalWrite(9,HIGH);
    delay(100);
    digitalWrite(9,LOW);
    delay(100);
    digitalWrite(9,HIGH);
    delay(100);
    digitalWrite(9,LOW);
    delay(100);
    digitalWrite(9,HIGH);
    delay(100);
    digitalWrite(9,LOW);
    delay(100);
    digitalWrite(9,HIGH);
    delay(100);
    digitalWrite(9,LOW);
    delay(100);
    digitalWrite(9,HIGH);
    delay(100);
    digitalWrite(9,LOW);
    delay(100);
    s.write(10);
    delay(300);
    int d = u.read();
    if( d>10 ){
     digitalWrite(12,LOW);
     digitalWrite(13,HIGH);
     digitalWrite(6,LOW);
     digitalWrite(7,HIGH);
     delay(100);
     digitalWrite(12,LOW);
     digitalWrite(13,LOW);
     digitalWrite(6,LOW);
     digitalWrite(7,LOW);
     digitalWrite(2,HIGH);
     delay(1000);
     digitalWrite(2,LOW);
    }
    s.write(90);
   }
   
   if( x=='4'){                 //turn left
    digitalWrite(10,HIGH);
    delay(100);
    digitalWrite(10,LOW);
    delay(100);
    digitalWrite(10,HIGH);
    delay(100);
    digitalWrite(10,LOW);
    delay(100);
    digitalWrite(10,HIGH);
    delay(100);
    digitalWrite(10,LOW);
    delay(100);
    digitalWrite(10,HIGH);
    delay(100);
    digitalWrite(10,LOW);
    delay(100);
    digitalWrite(10,HIGH);
    delay(100);
    digitalWrite(10,LOW);
    delay(100);
    digitalWrite(10,HIGH);
    delay(100);
    digitalWrite(10,LOW);
    delay(100);
    digitalWrite(10,HIGH);
    delay(100);
    digitalWrite(10,LOW);
    delay(100);
    digitalWrite(10,HIGH);
    delay(100);
    digitalWrite(10,LOW);
    delay(100);
    s.write(170);
    delay(300);
    int d = u.read();
    if( d>10 ){
     digitalWrite(12,HIGH);
     digitalWrite(13,LOW);
     digitalWrite(6,HIGH);
     digitalWrite(7,LOW);
     delay(100);
     digitalWrite(12,LOW);
     digitalWrite(13,LOW);
     digitalWrite(6,LOW);
     digitalWrite(7,LOW);
     digitalWrite(2,HIGH);
     delay(1000);
     digitalWrite(2,LOW);
    }
    s.write(90);
   }

   if( x=='5'){                 //Lights on
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(2,HIGH);
    delay(100);
    digitalWrite(2,LOW);
    delay(100);
    digitalWrite(2,HIGH);
    delay(100);
    digitalWrite(2,LOW);
    delay(100);
    digitalWrite(2,HIGH);
    delay(100);
    digitalWrite(2,LOW);
    delay(100);
    digitalWrite(2,HIGH);
    delay(100);
    digitalWrite(2,LOW);
    delay(100);
    digitalWrite(2,HIGH);
    delay(100);
    digitalWrite(2,LOW);
    delay(100);
    digitalWrite(2,HIGH);
    delay(100);
    digitalWrite(2,LOW);
    delay(100);
    digitalWrite(2,HIGH);
    delay(100);
    digitalWrite(2,LOW);
    delay(100);
    digitalWrite(2,HIGH);
   }

   if( x=='6'){                 //Lights off
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(2,LOW);           
   }

}
