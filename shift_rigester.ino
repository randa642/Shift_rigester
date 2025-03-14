int latch = 10;
int clk = 11;
int data = 12;


void setup() 
{
  pinMode(latch, OUTPUT);
  pinMode(clk, OUTPUT);
  pinMode(data, OUTPUT);
  
}

void loop() 
{
  for (int i=0; i<256; i++)
  {
    digitalWrite(latch, LOW);
    shiftOut(data, clk, MSBFIRST, i);
    digitalWrite(latch, HIGH);
    delay(300);
  }

}
