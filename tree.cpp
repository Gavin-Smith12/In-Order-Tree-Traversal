#include "tree.h"
#include <iostream>
#include <queue>
using namespace std;

/* Tree Constructor:
   Initializes the tree object and sets root pointer to NULL.
 */

Tree::Tree()
{
     root = NULL;   
}

/* createTree Function:
   Adds each of the nodes to the tree with the correct structure. 
 */

void Tree::createTree()
{
        root = new Node;
        root->setName("Start");
        Node *node1 = new Node;
        root->setChildren(node1);
        node1->setName("A1");
        Node *node2 = new Node;
        node1->setChildren(node2);
        node2->setName("D1");
        Node *node3 = new Node;
        node2->setChildren(node3);
        node3->setName("E1");
        Node *node4 = new Node;
        root->setChildren(node4);
        node4->setName("A2");
        Node *node5 = new Node;
        node4->setChildren(node5);
        node5->setName("B1");
        Node *node6 = new Node;
        node5->setChildren(node6);
        node6->setName("Find Me");
        Node *node7 = new Node;
        node4->setChildren(node7);
        node7->setName("B2");
        Node *node8 = new Node;
        node7->setChildren(node8);
        node8->setName("C1");
}

/* search Function:
   Iterates through the tree with an in-order traversal, stops when the 
   correct node is found. Utilizes a remainingNodesueue to track which nodes still need
   to be printed.
 */

void Tree::search()
{
        if(root == NULL)
            return;

        queue<Node*> remainingNodes;
        remainingNodes.push(root);
        while(!remainingNodes.empty()) {
            int size = remainingNodes.size();
            while (size > 0) {
                Node * currentNode = remainingNodes.front();
                remainingNodes.pop();
                cout << currentNode->Name << " ";
                if(currentNode->Name == "Find Me")
                    return;
                for(int i = 0;i<currentNode->children.size(); i++) {
                    remainingNodes.push(currentNode->children.at(i));
                }
                size--;
            }
        }
}

Tree::~Tree()
{
     if(root == NULL)
            return;

        queue<Node*> remainingNodes;
        remainingNodes.push(root);
        while(!remainingNodes.empty()) {
            int size = remainingNodes.size();
            while (size > 0) {
                Node * currentNode = remainingNodes.front();
                remainingNodes.pop();
                for(int i = 0;i<currentNode->children.size(); i++) {
                    remainingNodes.push(currentNode->children.at(i));
                }
                delete currentNode;
                size--;
            }
        }   
}