#include <iostream>
#include <string>
using namespace std;

int main() {
    int choice;
    do {
        cout << "\n=== Interactive Math & String Utility ===\n";
        cout << "1. Factorial Calculator (while loop)\n";
        cout << "2. Number Pyramid (for + nested loops)\n";
        cout << "3. Sum of Even or Odd Numbers (do-while loop)\n";
        cout << "4. Reverse a String (while loop)\n";
        cout << "5. Exit Program\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            int n;
            cout << "Enter a number: ";
            cin >> n;
            int fact = 1, i = 1;
            while (i <= n) {
                fact *= i;
                i++;
            }
            cout << "Factorial of " << n << " = " << fact << endl;
        }
        else if (choice == 2) {
            int rows;
            cout << "Enter number of rows: ";
            cin >> rows;
            for (int i = 1; i <= rows; i++) {
                for (int j = 1; j <= i; j++) {
                    cout << j << " ";
                }
                cout << endl;
            }
        }
        else if (choice == 3) {
            int n, sum = 0;
            char type;
            cout << "Enter a positive integer: ";
            cin >> n;
            cout << "Sum (E for even, O for odd)? ";
            cin >> type;

            int i = 1;
            do {
                if (type == 'E' || type == 'e') {
                    if (i % 2 == 0) sum += i;
                } else if (type == 'O' || type == 'o') {
                    if (i % 2 != 0) sum += i;
                }
                i++;
            } while (i <= n);

            cout << "Sum = " << sum << endl;
        }
        else if (choice == 4) {
            string str;
            cout << "Enter a string: ";
            cin.ignore();
            getline(cin, str);

            int i = str.length() - 1;
            cout << "Reversed string: ";
            while (i >= 0) {
                cout << str[i];
                i--;
            }
            cout << endl;
        }
        else if (choice == 5) {
            cout << "Exiting program... Goodbye!\n";
        }
        else {
            cout << "Invalid choice, try again!\n";
        }
    } while (choice != 5);

    return 0;
}