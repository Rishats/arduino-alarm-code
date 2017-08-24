
int sensorPin = 0; 
int Gas = 1;

void setup()
{
  Serial.begin(115200);  
                       
}
 
void loop()                     
{

 int reading = analogRead(sensorPin); 
 

 float voltage = reading * 5.0;
 voltage /= 1024.0; 
 
 
 // now print out the temperature
 int temperatureC = (voltage - 0.5) * 100 ;  
 Serial.println(temperatureC);
 Serial.println(analogRead(Gas));
 delay(1000);                                     //waiting a second
}
