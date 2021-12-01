#include <Wire.h>
#include <SPI.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BNO055.h>
#include <utility/imumaths.h>


Adafruit_BNO055 bno = Adafruit_BNO055(55);


float imu_x = 0;
float imu_y = 0;
float imu_z = 0;
float acc_x = 0;
float acc_y = 0;
float acc_z = 0;
int sayac = 0;

void setup(void)
{
  Serial.begin(9600);
  
   if(!bno.begin())
  {
    Serial.println("BNO055");
    delay(5000);
  }
  bno.setExtCrystalUse(true);
} 

void loop()
{
  imu::Vector<3> euler = bno.getVector(Adafruit_BNO055::VECTOR_EULER);
  imu::Vector<3> acc = bno.getVector(Adafruit_BNO055::VECTOR_ACCELEROMETER);
  imu_x=euler.x();
  imu_y=euler.y();
  imu_z=euler.z();
  acc_x=acc.x();
  acc_y=acc.y();
  acc_z=acc.z();
  Serial.println(imu_x);
  Serial.println(imu_y);
  Serial.println(imu_z);
  Serial.println();
  if (imu_x<60)
  {
    sayac=sayac+1;
  }
 
    
  Serial.println(sayac);
  delay(1000);
}
