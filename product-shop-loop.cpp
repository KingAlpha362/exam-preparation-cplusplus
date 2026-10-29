#include <iostream>
#include <string>

using namespace std;

int main() {
    // An array holding 5 product names. Arrays have a fixed size,
    // so we can't truly "delete" an item, only shuffle things around.
    string products[5] = {
        "Bread",
        "Milk",
        "Brown Rice",
        "Eggs",
        "Sugar"
    };

    // Where the target product is found in the array.
    // -1 means "not found yet" (valid positions are 0 to 4).
    int position = -1;

    // How many items are currently in use in the array.
    // Starts at 5, and goes down by 1 when we remove something.
    int count = 5;

    // Will store the product name the user types in.
    string target;

    cout << "What product do you want to remove?" << endl;

    // getline reads the whole line, so names with spaces
    // (like "Brown Rice") are read correctly. cin >> would stop at the space.
    getline(cin, target);

    // LINEAR SEARCH: check each item one by one from the start
    // until we find one that matches what the user typed.
    for (int i = 0; i < count; i++) {
        if (products[i] == target) {
            position = i;   // Remember where we found it
            break;          // Stop searching, we already have what we need
        }
    }

    // If position is still -1, the loop never found a match.
    if (position == -1) {
        cout << "Product not found" << endl;
    } else {
        // SHIFT LEFT: starting at the removed item's position, copy each
        // next item into the spot before it. This overwrites the removed
        // item and closes the gap.
        // Example: removing "Milk" (position 1):
        //   Bread, Milk, Brown Rice, Eggs, Sugar
        //   becomes: Bread, Brown Rice, Eggs, Sugar, Sugar
        // We stop at count - 1 so we never read past the end of the array.
        for (int i = position; i < count - 1; i++) {
            products[i] = products[i + 1];
        }

        // Shrink the count by 1. The leftover duplicate at the end
        // (the extra "Sugar") is now ignored because it's outside the count.
        count--;

        cout << "Product Suucessfully removed." << endl;
    }

    // Print the list. We loop up to count (not 5), so removed items
    // and the leftover duplicate are not displayed.
    for (int i = 0; i < count; i++) {
        cout << products[i] << endl;
    }

    return 0;
}