#include <iostream>
#include <string>

using namespace std;

class Node {
public:
    string title;
    Node* next;

    Node(string bookTitle) {
        title = bookTitle;
        next = nullptr;
    }
};

int main () {
    Node first("Hamlet");
    Node second("Romeo and Juliet");
    Node third("Macbeth");

    first.next = &second;
    second.next = &third;

    Node* head = &first;
    Node* current = head;

    cout << "Books: " << endl;

    while (current != nullptr) {
        cout << current->title << endl;
        current = current->next;
    }

    string target;

    cout << "Please give a book title: " << endl;
    getline(cin, target);

    current = head;
    bool found = false;

    while (current != nullptr) {
        if (current->title == target) {
            found = true;
            break;
        }
        current = current->next;
    }

    if (found) {
        cout << "Book found" << endl;
    } else {
        cout << "Book not found" << endl;
    }

    return 0;
}