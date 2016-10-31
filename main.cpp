#include <iostream>

#include "node.h"
#include "group.h"
#include "sensor.h"

using namespace std;

int main(int argc, char *argv[])
{
    Group building;
    Group level1;
    Group level2;

    Sensor fire_sensor("1","fire","mac");
    Sensor motion_sensor("2","motion","mov");

    building.addGroup(&level1);
    building.addGroup(&level2);

    level1.addSensor(&fire_sensor);
    level1.addSensor(&motion_sensor);

    building.activate();
    level1.activate();
    return 0;
}
