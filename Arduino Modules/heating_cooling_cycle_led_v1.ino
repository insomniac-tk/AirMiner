float R_load = 10;
float v_in = 3.3;

unsigned long CurrentTime;
unsigned long StartTime;
int reading;

/*
            D6 - Pin for heating cycle (5V,60s)
            D7 - Pin for cooling cycle (1.4V,90s)
*/

/*
float BitsToVolts(int value)
{
  return (float) value*(v_in/1023.0);
}

float GetRatio(float v_in)    // RO => sensor resistance at 100ppm CO in the clean air. 
{
    float v_out = BitsToVolts(analogRead(A0));
    return (v_in - v_out) / v_out;
}

float GetSurfaceResistanceValue()
{
  return R_load*GetRatio(v_in)
}

*/
/*
    CLEAN AIR FUNCTION 


*/

void setup()
{
  // put your setup code here, to run once:
   Serial.begin(9600);
   StartTime = millis(); // Initial Time 
   pinMode(D6,OUTPUT);
   pinMode(D7,OUTPUT);
   pinMode(A0,INPUT);
}

void loop() {
    CurrentTime = millis();
    reading = analogRead(A0);
    Serial.println(reading);
    unsigned long kitnatimehua = CurrentTime - StartTime;
    // HEATING PHASE
    if((kitnatimehua) <= 60000)
    {
      digitalWrite(D7,LOW);
      digitalWrite(D6,HIGH);
    }    
    //MEASUREMENT PHASE
    else if(kitnatimehua > 60000 && kitnatimehua <=150000)
    {
      digitalWrite(D6,LOW);
      digitalWrite(D7,HIGH);
    }
   
    else 
    {
      int now = millis();
      StartTime = now;
    }
    
}
