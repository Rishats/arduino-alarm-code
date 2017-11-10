int sensorPin = 0; 

void setup()
{
  Serial.begin(115200);  
                       
}
 
void loop()                     
{

 
 Serial.println(analogRead(sensorPin));
 delay(150);                                     //waiting a second
}

