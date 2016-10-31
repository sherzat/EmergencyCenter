#include "sensor.h"

Sensor::Sensor(string id, string sensorType, string vender)
    :id(id), sensorType(sensorType), vender(vender)
{

}

void Sensor::activate() const
{
    cout<<"Sensor "<<id << "is activated!"<<endl;
}

void Sensor::test() const
{
    cout<<"Sensor "<<id << "is tested!"<<endl;

}

void Sensor::deactivate() const
{
    cout<<"Sensor "<<id << "is deactivated!"<<endl;

}



