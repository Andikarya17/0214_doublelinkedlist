#include <iostream>
#include <string>
using namespace std;

struct Node
{
    int noMhs;
    string name;
    Node* next;
    Node* prev;
};

Node* START = NULL;

void addNode() {
    Node* newNode = new Node(); // step 1: create a new node
    cout << "\nEnter the roll number of the student: "; // assign value to the data pf the new node
    cin >> newNode->noMhs;
    cout << "\nEnter the name of the student: "; // assign value to the data pf the new node
    cin >> newNode->name; 
}
 //insert the new node in the list
 if (START == NULL || newNode->noMhs <= START->noMhs) {
    
    if (START !=NULL && newNode->noMhs == START->noMhs) {
        cout << "\033[31mDuplicate roll numbers not allowed\033[0m" << endl;
        return;
    }
    
 }
