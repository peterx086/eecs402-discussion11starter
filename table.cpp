#include <iostream>
using namespace std;

class Node {
private:
    int value;
    Node* next;

public:
    Node(int v) : value(v), next(nullptr) {}

    // TODO: allow HashTable to access private members

};

class HashTable {
private:
    Node** table;
    int size;

public:
    // TODO: Constructor: size always 10
    HashTable() {
        
    }

    /*
    TODO: Destructor. Should implement all of big 3 but for this exercise,
    we are just going to implement the destructor to ensure functionality
    and save time.
    */
    ~HashTable() {
        
    }

    // TODO: Insert at head
    void insert(int val) {
        
    }

    // TODO: Check if a value exists
    bool contains(int val) const {
        return false;
    }

    // TODO: Print the hash table
    void print() const {
        for (int i = 0; i < size; i++) {
           cout << i << ": ";
           Node* curr = table[i];
           while (curr) {
               cout << curr->value << " -> ";
               curr = curr->next;
           }
           cout << "nullptr\n";
       }
    }
};

int main() {
    HashTable table;

    return 0;
}