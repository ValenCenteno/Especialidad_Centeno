int pin1 = 3; 
int pin2 = 4; 
int pin3 = 5; 
int pin4 = 6; 
int delayt = 500; 
void setup() { 

// put your setup code here, to run once: 
pinMode(pin1, OUTPUT); 
pinMode(pin2, OUTPUT); 
pinMode(pin3, OUTPUT); 
pinMode(pin4, OUTPUT); 
} 
// put your main code here, to run repeatedly:

void loop()
digitalWrite(pin1, LOW);
digitalWrite(pin2, LOW); 
digitalWrite(pin3, LOW);  
digitalWrite(pin4, LOW);
delay(delayt);

digitalWrite(pin1, HIGH);
digitalWrite(pin2, LOW); 
digitalWrite(pin3, LOW);  
digitalWrite(pin4, LOW);
delay(delayt);

digitalWrite(pin1, LOW);
digitalWrite(pin2, HIGH); 
digitalWrite(pin3, LOW);  
digitalWrite(pin4, LOW);
delay(delayt);

digitalWrite(pin1, HIGH);
digitalWrite(pin2, HIGH); 
digitalWrite(pin3, LOW);  
digitalWrite(pin4, LOW);
delay(delayt);

digitalWrite(pin1, LOW);
digitalWrite(pin2, LOW); 
digitalWrite(pin3, HIGH);  
digitalWrite(pin4, LOW);
delay(delayt);

digitalWrite(pin1, HIGH);
digitalWrite(pin2, LOW); 
digitalWrite(pin3, HIGH;  
digitalWrite(pin4, LOW);
delay(delayt);

digitalWrite(pin1, LOW);
digitalWrite(pin2, HIGH); 
digitalWrite(pin3, HIGH);  
digitalWrite(pin4, LOW);
delay(delayt);

digitalWrite(pin1, HIGH);
digitalWrite(pin2, HIGH); 
digitalWrite(pin3, HIGH);  
digitalWrite(pin4, LOW);
delay(delayt);

digitalWrite(pin1, LOW);
digitalWrite(pin2, LOW); 
digitalWrite(pin3, LOW);  
digitalWrite(pin4, HIGH);
delay(delayt);

digitalWrite(pin1, HIGH);
digitalWrite(pin2, LOW); 
digitalWrite(pin3, LOW);  
digitalWrite(pin4, HIGH);
delay(delayt);

digitalWrite(pin1, LOW);
digitalWrite(pin2, HIGH); 
digitalWrite(pin3, LOW);  
digitalWrite(pin4, HIGH);
delay(delayt);

digitalWrite(pin1, HIGH);
digitalWrite(pin2, HIGH); 
digitalWrite(pin3, LOW);  
digitalWrite(pin4, HIGH);
delay(delayt);

digitalWrite(pin1, LOW);
digitalWrite(pin2, LOW); 
digitalWrite(pin3, HIGH);  
digitalWrite(pin4, HIGH);
delay(delayt);

digitalWrite(pin1, HIGH);
digitalWrite(pin2, LOW); 
digitalWrite(pin3, HIGH);  
digitalWrite(pin4, HIGH);
delay(delayt);

digitalWrite(pin1, LOW);
digitalWrite(pin2, HIGH); 
digitalWrite(pin3, HIGH);  
digitalWrite(pin4, HIGH);
delay(delayt);

digitalWrite(pin1, HIGH);
digitalWrite(pin2, HIGH); 
digitalWrite(pin3, HIGH);  
digitalWrite(pin4, HIGH);
delay(delayt);

}
