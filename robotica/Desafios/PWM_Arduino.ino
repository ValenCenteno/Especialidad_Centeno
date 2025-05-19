int blueLed = 9; 
int brightness1 =225; 
int dt = 500; 
 
void setup() { 
// put your setup code here, to run once: 
pinMode(blueLed, OUTPUT); 
}
void loop() { 
  // put your main code here, to run repeatedly 
analogWrite(blueLed, brightness1); 
delay(dt);

}
