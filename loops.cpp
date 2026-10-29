#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    string books[5] = {
        "Hamlet",
        "Romeo and Juliet",
        "Macbeth",
        "Things Fall Apart",
        "The Great Gatsby"
    };

    int count = 5;
    int position = -1;
    string target;

    cout << "Enter the title to remove: ";

    // A: Read the full title, including spaces.
    getline(cin, target);

    // Search through the books.
    for (int i = 0; i < count; i++) {
        if (books[i] == target) {
            position = i;
            break;
        }
    }

    // B: Check whether the title was not found.
    if (position == -1) {
        cout << "Book not found" << endl;
    } else {
        // C: Start at the matching position.
        for (int i = position; i < count - 1; i++) {

            // E: Copy the next title into this position.
            books[i]= books[i + 1]; 
        }

        // F: Reduce the number of active books by one.
        count--;

        cout << "Book removed successfully." << endl;
    }

    cout << "\nCurrent books:" << endl;

    // Display only active books.
    for (int i = 0; i < count; i++) {
        cout << books[i] << endl;
    }
    return 0;
}