#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    int meals;
    double price;
    price = 45;
    double total;
    double final_amount;
    double discount = 0.1;


    cout << "How many meals do you want? " << endl;
    cin >> meals;

    if (meals <= 0) {
        cout << "Invalid quantity" << endl;
    } else if (meals >= 5) {
        total = meals * price;

        if (meals >= 5) {
            final_amount = total - (total * discount);
            cout << "Discount applied!!!" << endl;
        } else {
            final_amount = total;
        }

        cout << fixed << setprecision(2);
        cout << "Amount payable: R" << final_amount << endl;
    }
    return 0;
}