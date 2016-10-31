#ifndef NODE_H
#define NODE_H


class Node
{
public:

    virtual void activate() const =0;
    virtual void deactivate() const =0;
    virtual void test() const =0;

};

#endif // NODE_H
