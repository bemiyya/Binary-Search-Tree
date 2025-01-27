/*
	Name: In-order traversal on array based BST
	Copyright: 2024
	Author: Jakhongir Mirzayev
	Date: 14/11/24 21:07
	Description: Traverses in-order through an array based binary tree recursively
*/
#include <iostream>
using namespace std;

// Recursive function to traverse through an array
template<class ItemType>
void inOrderTraversal(ItemType nodes[], int leftChild[], int rightChild[], int index) {
    
	// Base case
    if (index == -1) {
        return;
    }

    // Traverses left
    inOrderTraversal(nodes, leftChild, rightChild, leftChild[index]);

    // Visits the node and prints it
    cout << nodes[index] << endl;

    // Traverses right 
    inOrderTraversal(nodes, leftChild, rightChild, rightChild[index]);
}

// Main driver
int main() {
	
    // Node values of a tree data
    char data[] = {'F', 'E', 'R', '7', 'S', 'O', 'C', 'V', '3', 'A'};

    // Indices of the left and right children
	int leftChildren[] = {8, 2, -1, -1, -1, -1, -1, 1, 6, -1};
	int rightChildren[] = {5, -1, -1, -1, -1, 7, 4, 9, 3, -1};
	
	// starting index
    int index = 0;
	
	// Number of elements in an array
    int size = sizeof(data) / sizeof(data[0]);

    // Checks if the tree is empty
    if (size == 0) {
        cout << "Tree is empty!" << endl;
        return 0;
    }

    // Implementing the in-order traversal function
    cout << "In-order traversal " << endl;
    inOrderTraversal(data, leftChildren, rightChildren, index);
    return 0;
}
