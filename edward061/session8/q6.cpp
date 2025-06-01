#include <iostream>
using namespace std;

struct NODE {

    union {
        double data;
        struct {             
            NODE* left;      
            NODE* right;     
        };
    };
    bool isLeaf;              
};

NODE* createLeafNode(double value) {
    NODE* newNode = new NODE;   
    newNode->data = value;      
    newNode->isLeaf = true;     
    return newNode;
}

NODE* createInternalNode(NODE* leftChild, NODE* rightChild) {
    NODE* newNode = new NODE;   
    newNode->left = leftChild;  
    newNode->right = rightChild;
    newNode->isLeaf = false;    
    return newNode;
}

void printTree(NODE* root) {
    if (root == nullptr) return;
    
    if (root->isLeaf) {

        cout << root->data << " ";
    } else {

        printTree(root->left);
        cout << "-> ";
        printTree(root->right);
    }
}

int main() {

    NODE* leaf1 = createLeafNode(5.0);
    NODE* leaf2 = createLeafNode(10.0);
    NODE* leaf3 = createLeafNode(15.0);

    NODE* internal1 = createInternalNode(leaf1, leaf2);
    NODE* internal2 = createInternalNode(leaf3, nullptr); 

    NODE* root = createInternalNode(internal1, internal2);

    cout << "Binary Tree: ";
    printTree(root); 
    cout << endl;
    
    return 0;
}
