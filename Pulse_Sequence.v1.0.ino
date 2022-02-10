
// Definition of constants to determine signal duration
#define A 1200
#define B 100
#define C 12
#define D 5500

// Naming the I/O pins
#define SignalA 22
#define SignalB 23
#define Button1 12
#define Button2 14

  // Defining global variables
  char switch1; // Button 1 read state
  char switch2; // Button 2 read state

  void setup() {

     //Set Pin Modes
    pinMode(Button1, INPUT);
    pinMode(Button2, INPUT);
    pinMode(SignalA, OUTPUT);
    pinMode(SignalB, OUTPUT);

  }

  void loop() {

    //Read the Buttons
    reading: switch1=digitalRead(Button1);
             switch2=digitalRead(Button2);


    if(switch1==1) // If Button 1 is Pressed
        {goto reading;} // Return to the button read
    else
        {
          int  a=A; // Local pulse duration variable
          char i; // Incremental counter
          char c; // Local pulse quantity variable

          //Enables special mode if Button 2 is pressed
          if(switch2==1)
              {c=C-3;}
          else
              {c=C;}

          // Create Signal B Trigger waveform
          digitalWrite(SignalB,HIGH);
          delayMicroseconds(50);
          digitalWrite(SignalB,LOW);

          // Create iterative sequence of pulses for Signal A
          for(i=0; i<c; i++)
             {
              //Create rectangular pulse 
              digitalWrite(SignalA,HIGH);
              delayMicroseconds(a);
              digitalWrite(SignalA,LOW);
              delayMicroseconds(B);
              a+=50; // Increase the pulse duration for every next iteration
             }
          delayMicroseconds(D); // Wait some time here
        } 
}

  
