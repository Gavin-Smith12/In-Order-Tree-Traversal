#ifndef TREE_H_
#define TREE_H_

#include <iostream>
#include "node.h"
using namespace std;

class Tree
{
        private:

                Node* root;

        public:

                Tree();
                ~Tree();
                void createTree();
                void search();
};

#endif