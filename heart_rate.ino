int PulseSensorSignalPin = 0;        
int LED13 = 13;   

int Signal;               
int Threshold = 550;             

void setup() {
  pinMode(LED13,OUTPUT);         
   Serial.begin(9600);          
   
}

void loop() {
  Signal = analogRead(PulseSensorSignalPin);  
                                             
   if(Signal > Threshold){                           
     digitalWrite(LED13,HIGH);
     if(Signal > 950)
      Serial.println("*******************************" + String(Signal));
     else if(Signal > 900)  
      Serial.println("****************************" + String(Signal));        
     else if(Signal > 850)
      Serial.println("*************************" + String(Signal));
     else if(Signal > 800)
      Serial.println("*********************" + String(Signal));
     else if(Signal > 750)
      Serial.println("******************" + String(Signal));
     else if(Signal > 700)
      Serial.println("***************" + String(Signal));
   } else {
     digitalWrite(LED13,LOW);  
     if(Signal > 650)
      Serial.println("************" + String(Signal));
     else if(Signal > 600)  
      Serial.println("*********" + String(Signal));        
     else if(Signal > 550)
      Serial.println("******" + String(Signal));
     else if(Signal > 500)
      Serial.println("***" + String(Signal));
     else if(Signal < 450)
      Serial.println("*" + String(Signal));
   }

delay(10);
}




