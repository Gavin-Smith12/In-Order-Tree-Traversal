#include <iostream>
#include "tree.h"
using namespace std;

/* Main Function:
   Calls functions from the Tree class to create and then search the tree.
 */

int main()
{
        Tree newTree;
        newTree.createTree();
        newTree.search();
        return 0;     
}

