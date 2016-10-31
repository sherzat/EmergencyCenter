#include "group.h"

void Group::activate() const
{
    for (auto const &node: nodes)
    {
        node->activate();
    }
    /*
    for (int i = 0; i < nodes.size(); i++)
    {
        this->nodes[i]->activate();
    }
    */
}

void Group::deactivate() const
{
    for (int i = 0; i < nodes.size(); i++)
    {
        nodes[i]->deactivate();
    }
}

void Group::test() const
{
    for (int i = 0; i < nodes.size(); i++)
    {
        nodes[i]->test();
    }
}

void Group::addSensor(Node *sensor)
{
    nodes.push_back(sensor);
}

void Group::addGroup(Node *group)
{
    nodes.push_back(group);
}
