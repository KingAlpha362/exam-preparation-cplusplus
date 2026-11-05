#include <iostream>  
using namespace std;  

struct Node {     
    int data;     
    Node* next; 
};  

class ScoreList { 
private:     
    Node* head;  

public:      
    ScoreList() {         
        head = nullptr;     
    }      

    // Destructor moved outside of display()
    ~ScoreList() {             
        while (head != nullptr) {                 
            deleteFront();             
        }         
    }

    // Renamed from addBack to match its actual O(1) behavior (inserting at the front)
    void addFront(int score) {         
        Node* newNode = new Node;          
        newNode->data = score;          
        newNode->next = head;          
        head = newNode;     
    }     

    void deleteFront() {         
        if (head == nullptr) {             
            cout << "List is empty" << endl; // Fixed typo "Lis"
        } else {             
            Node* temp = head;              
            head = head->next;              
            delete temp;         
        }     
    }     

    void display() {         
        if (head == nullptr) {             
            cout << "List is empty" << endl;         
        } else {             
            Node* current = head;              
            while (current != nullptr) {                 
                cout << current->data << " ";                  
                current = current->next;             
            }             
            cout << endl;         
        }                  
    } // Properly closed display() function block
};  

int main() {     
    ScoreList scores;      
    scores.addFront(15);     
    scores.addFront(25);     
    scores.addFront(35);     
    scores.display();      

    scores.deleteFront();     
    scores.display();      

    scores.addFront(45);     
    scores.display();      

    scores.deleteFront();     
    scores.deleteFront();     
    scores.deleteFront();      

    // Attempt removal from an empty list.     
    scores.deleteFront();      

    // Check that adding to the empty list works again.     
    scores.addFront(55);     
    scores.display();      

    return 0; 
}
