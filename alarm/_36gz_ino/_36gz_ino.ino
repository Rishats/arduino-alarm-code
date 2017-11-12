int sensorPin = 7;
int buzzerPin = 6;

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
 if(temperatureC <= 30)
 {
   
 }
 else if(temperatureC > 31)
 {
   tone(buzzerPin, 1000, 500);
 }
 delay(1000);                                     //waiting a second
}