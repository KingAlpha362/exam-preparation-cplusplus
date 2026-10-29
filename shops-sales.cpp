#include <iostream>
#include <string>

using namespace std;

int main() {
    double sales[5] = {850.0, 1200.0, 650.0, 1500.0, 1000.0};

    double total = 0;
    int targetDays = 0;
    double highest = sales[0];

    cout << "Each days sales: " << endl;

    for (int i = 0; i < 5; i++) {
        cout << sales[i] << endl;
    

    total += sales[i];

    if (sales[i] >= 1000) {
        targetDays++;
    } 
    
    if (sales[i] > highest) {
        highest = sales[i];
    }
}
    cout << "The total is: " << total << endl;
    cout << "Target days: " << targetDays << endl;
    cout << "Failures: " << highest << endl;

    return 0;

}