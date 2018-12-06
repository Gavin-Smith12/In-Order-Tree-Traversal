#ifndef NODE_H_
#define NODE_H_

#include <iostream>
#include <vector>
using namespace std;

class Node
{

        private:

        public:

                string Name;
                vector<Node*> children;
                Node();
                ~Node();
                string getName();
                void setName(string);
                vector<Node*> getChildren();
                void setChildren(Node*);
};

#endif