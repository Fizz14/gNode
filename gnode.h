#ifndef GNODE_H
#define  GNODE_H

#include <vector>


/*
/
/ A library to handle nodes with connections and operations
/
/ Joseph Buskmiller October 23, 2021
/
*/


/*
/ An operation that a node can represent, such as addition or constant integer
/ Similar to indexes, operations are used for lookup and are not unique to their gNode owners
*/
template<class output>
class operation {
private:


public:
    virtual output getOperationOutput(std::vector<gNode*> inputs);

};

template<class output>
class gNode {
private:
    std::vector<gNode*> inputs;
    std::vector<gNode*> outputs;
    operation<output>* hisOperation;
    int xPosition;
    int yPosition;

public:
    int update();
    virtual void render();

};



#endif