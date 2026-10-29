#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int choice;
    int bundles;
    double price;

    cout << "1: 1GB, price: R30" << endl;
    cout << "2: 2GB, price: R75" << endl;
    cout << "3: 3GB, price R100" << endl;

    cout << "Enter your choice: " << endl;
    cin >> choice;
    
    switch (choice) {
        case 1:
            cout << "You chose 1GB" << endl;
            price = 30;

            cout << "The price is: " << price << endl;
            break;
        case 2:
            cout << "You chose 3GB" << endl;
            price = 75;

            cout << "The price is: " << price << endl;
            break;
        case 3:
            cout << "You chose 5GB" << endl;
            price = 100;

            cout << "The price is: " << price << endl;
            break;

            default:
                cout << "Invalid choice" << endl;
                break;
    }

    cout << "How many bundles? ";
    cin >> bundles;

    if (bundles <= 0) {
        cout << "Invalid quantity" << endl;
    } else {
        double total = price * bundles;
        cout << "Total cost: R" << total << endl;
    }

    return 0;
}