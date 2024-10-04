#include <iostream>
#include <vector>
using namespace std;

class BinaryTree {
private:
    vector<int> tree; // Array representation of the binary tree

public:
    BinaryTree(int size) {
        tree.resize(size, -1);  // Initialize the array with -1 (assuming -1 as an empty value)
    }

    // Insert element at the root if it's empty
    void insertRoot(int key) {
        if (tree[0] == -1)
            tree[0] = key;
        else
            cout << "Root already exists!\n";
    }

    // Insert element at left child of node at index i
    void insertLeft(int key, int i) {
        int leftIndex = 2 * i + 1;
        if (leftIndex >= tree.size()) {
            cout << "Index out of bounds.\n";
            return;
        }
        if (tree[i] == -1) {
            cout << "Parent does not exist.\n";
            return;
        }
        if (tree[leftIndex] == -1)
            tree[leftIndex] = key;
        else
            cout << "Left child already exists!\n";
    }

    // Insert element at right child of node at index i
    void insertRight(int key, int i) {
        int rightIndex = 2 * i + 2;
        if (rightIndex >= tree.size()) {
            cout << "Index out of bounds.\n";
            return;
        }
        if (tree[i] == -1) {
            cout << "Parent does not exist.\n";
            return;
        }
        if (tree[rightIndex] == -1)
            tree[rightIndex] = key;
        else
            cout << "Right child already exists!\n";
    }

    // Display the tree
    void displayTree() {
        cout << "Binary Tree Array Representation: \n";
        for (int i = 0; i < tree.size(); i++) {
            if (tree[i] != -1)
                cout << tree[i] << " ";
            else
                cout << "- ";
        }
        cout << endl;
    }
};

int main() {
    BinaryTree bt(7);  // Array size large enough to hold 7 nodes

    // Insert root
    bt.insertRoot(1);

    // Insert left and right children of root
    bt.insertLeft(2, 0);
    bt.insertRight(3, 0);

    // Insert children of node 2
    bt.insertLeft(4, 1);
    bt.insertRight(5, 1);

    // Insert children of node 3
    bt.insertLeft(6, 2);
    bt.insertRight(7, 2);

    // Display the tree
    bt.displayTree();

    return 0;
}
