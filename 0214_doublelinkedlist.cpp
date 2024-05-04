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
    // if the list is empty, make the new node is START
    newNode->next = START; //step 3: make the new node point to the first node
    if (START != NULL){
        START->prev = newNode; // step 4: make the first node point to the new node
    }
    newNode->prev = NULL; // step 5: make the new node to NULL
    START = newNode; // step 6: make the new node the first node
 }

else {
		Node* current = START;
		Node* previous = NULL;

		while (current != NULL && current->noMhs < newNode->noMhs) { // step 1.c: treverse
            previous = current; // step 1.d: move the previous to the current node
            current = current->next;    // step 1.e: move the current to the next node
        }