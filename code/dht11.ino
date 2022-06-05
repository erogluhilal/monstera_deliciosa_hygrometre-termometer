


#include <DHT.h>
#include <Adafruit_Sensor.h>
#define dhtpin 2
#define dhttype DHT11
char in;
int temp;
int hum;

DHT dht(dhtpin,dhttype);

void setup()
{
  Serial.begin(9600);
  dht.begin();
  
}

void loop()
{
  if(Serial.available()> 0)
  {
    in =(byte)Serial.read()&~(0x20); 
    if(in== 'T')
    {
      temp = dht.readTemperature();
      Serial.println(temp);
    }else if (in== 'H')
    {
      hum = dht.readHumidity();
      Serial.println(hum);
    }
  }
}
