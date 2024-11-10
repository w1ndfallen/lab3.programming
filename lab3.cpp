#include <iostream>
using namespace std;

int main() {
    int month;
    cout << "Enter the month number (1-12): ";
    cin >> month;

    switch (month) {
        case 12:
        case 1:
        case 2:
            cout << "This is winter." << endl;
            break;
        case 3:
        case 4:
        case 5:
            cout << "This is spring." << endl;
            break;
        case 6:
        case 7:
        case 8:
            cout << "This is summer." << endl;
            break;
        case 9:
        case 10:
        case 11:
            cout << "This is autumn." << endl;
            break;
        default:
            cout << "Uncorrect month number. Enter number from 1 to 12" << endl;
    }

    return 0;
}
