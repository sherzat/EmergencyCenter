#ifndef GROUP_H
#define GROUP_H

#include <vector>

#include "node.h"

using namespace std;

class Group : public Node
{
    public:
        void activate() const;
        void deactivate() const;
        void test() const;
        void addSensor(Node *sensor);
        void addGroup(Node *group);

    private:
        vector <const Node *> nodes;

};

#endif // GROUP_H
