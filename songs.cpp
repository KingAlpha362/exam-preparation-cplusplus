#include <iostream>
#include <string>
using namespace std;

    // Define a class called Node with two public members:
    // string title
    // Node* next

class Node {
public:
    string title;
    Node* next;

    // Write a constructor that receives a song title,
    // stores it in title, and sets next to nullptr.

    Node(string songTitle) {
        title = songTitle;
        next = nullptr;
    }
};

    // In main, create three node objects named first, second, and third.

int main() {
    Node first("Track One");
    Node second("Track Two");
    Node third("Track Three");

    // Connect first to second, then second to third.

    first.next = &second;
    second.next = &third;

    // Declare a pointer called head that points to first.

    Node* head = &first;

    // Using head, display all three titles, each on a new line.
    
    cout << "1st Node: " << head->title << endl;
    cout << "2nd Node: " << head->next->title << endl;
    cout << "3rd Node: " << head->next->next->title << endl;

    return 0;
}