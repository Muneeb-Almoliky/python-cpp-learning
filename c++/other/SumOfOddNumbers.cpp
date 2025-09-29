#include <iostream>
#include <limits> // For handling invalid input
using namespace std;

int main() {
    int cumulativeTotal = 0; // Tracks the overall sum of odd numbers

    for (int i = 1; i <= 10; ++i) {
        int numberOfValues;

        // Ensure valid input for the number of values in the current set
        while (true) {
            cout << "Provide how many of numbers for group " << i << ": ";
            cin >> numberOfValues;

            if (cin.fail() || numberOfValues <= 0) { // Validate input
                cin.clear(); // Reset error flag
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Disregard invalid input
                cout << "Error: Please input a positive integer.\n";
            } else {
                break; // Input is acceptable
            }
        }

        int groupOddSum = 0; // Keeps track of the sum of odd numbers in the current group

        for (int j = 1; j <= numberOfValues; ++j) {
            int userNumber;

            // Ensure valid input for each individual number
            while (true) {
                cout << "Input a number: ";
                cin >> userNumber;

                if (cin.fail()) { // Check for invalid input
                    cin.clear(); // Reset error flag
                    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Disregard invalid input
                    cout << "Error: Please provide a valid integer.\n";
                } else {
                    break; // Input is acceptable
                }
            }

            // Add to the group sum if the number is odd
            if (userNumber % 2 != 0) {
                groupOddSum += userNumber;
            }
        }

        cout << "The sum of odd numbers in group " << i << " is: " << groupOddSum << "\n";
        cumulativeTotal += groupOddSum; // Add the group's sum to the total
    }

    cout << "The total sum of all odd numbers is: " << cumulativeTotal << endl;
    return 0;
}