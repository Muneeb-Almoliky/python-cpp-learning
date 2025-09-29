#include <iostream>
#include <limits> // For input validation
using namespace std;

int main() {
    int totalSum = 0; // Initialize the cumulative sum

    for (int i = 1; i <= 10; ++i) {
        int count;

        // Input validation for count of numbers
        while (true) {
            cout << "Enter the number of values in set " << i << ": ";
            cin >> count;

            if (cin.fail() || count <= 0) { // Check if input is invalid or non-positive
                cin.clear(); // Clear the error flag
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
                cout << "Invalid input. Please enter a positive integer.\n";
            } else {
                break; // Valid input
            }
        }
        
        int setSum = 0; // Sum of odd numbers in the current set
        for (int j = 1; j <= count; ++j) {
            int number;

            // Input validation for each number
            while (true) {
                 cout << "Enter a number: ";
                cin >> number;

                if (cin.fail()) { // Check if input is invalid
                    cin.clear(); // Clear the error flag
                    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
                    cout << "Invalid input. Please enter an integer.\n";
                } else {
                    break; // Valid input
                }
            }

            if (number % 2 != 0) { // Check if the number is odd
                setSum += number;
            }
        }

        cout << "Sum of odd numbers in set " << i << ": " << setSum << "\n";
        totalSum += setSum; // Add current set sum to the total sum
    }

    cout << "The total sum of odd numbers across all sets is: " << totalSum << endl;
    return 0;
}