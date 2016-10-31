#ifndef SENSOR_H
#define SENSOR_H

#include <iostream>
#include <string>

#include "node.h"

using namespace std;

class Sensor : public Node
{

    public:
        Sensor(string id, string sensorType, string vender);
        void activate() const;
        void test()const;
        void deactivate() const;

    private:
        string id;
        string sensorType;
        string vender;
};

#endif // SENSOR_H
