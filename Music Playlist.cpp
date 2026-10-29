#include <iostream>
#include <string>

using namespace std;

class Node {
public:
    string title;
    int duration;
    Node* next;

    Node(string musicTitle, int songDuration) {
        title = musicTitle;
        duration = songDuration;
        next = nullptr;
    }

};

int main() {
    Node first("Track One", 180);
    Node second("Track Two", 240);
    Node third("Track Three", 210);

    Node* head = &first;
    Node* current = head;

    int total = 0;

     while (current != nullptr) {
        // Display the current song's title and duration.
        cout << current->title << " - "

             << current->duration << " seconds" << endl;

             // Add the current song's duration to total.
            total += current->duration;

        // Move current to the next node.
        current = current->next;
    }

    cout << "Total duration: " << total
         << " seconds" << endl;

    return 0;
}
