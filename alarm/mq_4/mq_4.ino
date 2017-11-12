int sensorPin = 0;
int speakerPin = 2;

void setup()
{
  pinMode (speakerPin, OUTPUT);
  Serial.begin(115200);  
                       
}
 
void loop()                     
{
 if(analogRead(sensorPin) <= 200)
 {
   analogWrite (speakerPin, 0);
 }
 else if(analogRead(sensorPin) > 200)
 {
   analogWrite (speakerPin, 255);
 }
 Serial.println(analogRead(sensorPin));
 delay(1000);                                     //waiting a second
}

