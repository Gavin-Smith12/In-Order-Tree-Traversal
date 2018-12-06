#include "node.h"
#include <iostream>
#include <vector>
using namespace std;

/* Node Class:
   Creates a node that contains a name and a vector of pointers to its children.
   Has get and set functions for both the name of the given node as well as
   the children of the node.
 */

Node::Node()
{
        Name = "";
}

string Node::getName()
{
        return Name;
}

void Node::setName(string name)
{
        Name = name;
}

vector<Node*> Node::getChildren()
{
        return children;
}

void Node::setChildren(Node* newNode)
{
        children.push_back(newNode);
}

Node::~Node()
{
        
}