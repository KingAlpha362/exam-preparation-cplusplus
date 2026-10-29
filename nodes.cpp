#include <iostream>
#include <string>
using namespace std;

class Node {
public:
    string title;
    Node* next;

    Node(string bookTitle) {
        // A: Store bookTitle in title.
           title = bookTitle;

        // B: Set next to point to nothing.
        next = nullptr;
        ;
    }
};

int main() {
    Node first("Hamlet");
    Node second("Romeo and Juliet");
    Node third("Macbeth");

    // C: Connect first to second.
    first.next = &second;

    // D: Connect second to third.
    second.next = &third;

    // E: Declare a Node pointer called head
    //    pointing to first.
    Node* head = &first;

    // F: Use head to display the FIRST book's title.
    cout << head->title << endl;

    return 0;
}