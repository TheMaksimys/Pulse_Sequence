#define A 1200
#define B 100
#define C 12
#define D 5500

#define SignalA 22
#define SignalB 23

char static volatile switch1;
char static volatile switch2;

 void setup() 
 {
  pinMode(12, INPUT);
  pinMode(14, INPUT);
  pinMode(SignalA, OUTPUT);
  pinMode(SignalB, OUTPUT);
 }

 void loop() 
 {

  reading:
    switch1=digitalRead(12);
    switch2=digitalRead(14);


  if(switch1==){goto reading;}
   else
   {
   char  a=A;
   char i=0;
   char c;
   
    if(switch2==HIGH){ c=C-3;}
    else{c=C;}

   digitalWrite(SignalB,HIGH);
   delay(50);
   digitalWrite(SignalB,LOW);
  
   for(i=0; i<c; i++)
    {
     digitalWrite(SignalA,HIGH);
      delay(a);
     digitalWrite(SignalA,LOW);
      delay(B);
     a+=50; 
    }
      delay(D);
   } 
 }
