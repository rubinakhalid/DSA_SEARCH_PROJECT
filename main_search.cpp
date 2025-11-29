#include <iostream>
using namespace std;

// Sequential Search Procedure
void SequentialSearch(int arr[], int size, int target) {
    int comparisons = 0;
    int index = -1;

    for (int i = 0; i < size; i++) {
        comparisons++;
        if (arr[i] == target) {
            index = i;
            cout << "\n--- Sequential Search Result ---\n";
            cout << "Number FOUND!\n";
            cout << "Index position: " << index << endl;
            cout << "Comparisons made: " << comparisons << endl;
            return;
        }
    }

    // If not found
    cout << "\n--- Sequential Search Result ---\n";
    cout << "Number NOT FOUND.\n";
    cout << "Index position: -1\n";
    cout << "Comparisons made: " << comparisons << endl;
}

// Binary Search Procedure
void BinarySearch(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;
    int comparisons = 0;
    int index = -1;

    // Repeat while low <= high
    while (low <= high) {
        int mid = (low + high) / 2;
        comparisons++;

        if (arr[mid] == target) {
            index = mid;
            cout << "\n--- Binary Search Result ---\n";
            cout << "Number FOUND!\n";
            cout << "Index position: " << index << endl;
            cout << "Comparisons made: " << comparisons << endl;
            return;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    // Not found
    cout << "\n--- Binary Search Result ---\n";
    cout << "Number NOT FOUND.\n";
    cout << "Index position: -1\n";
    cout << "Comparisons made: " << comparisons << endl;
}

// Main
int main() {
    int arr[] = {3, 7, 12, 18, 25, 31, 42, 56, 64, 73, 88, 95};
    int size = sizeof(arr) / sizeof(arr[0]);

    int choice = 0;
    int target;

    // Repeat until user chooses to exit
    do {
        // Display menu
        cout << "\n===== Search Menu =====" << endl;
        cout << "1. Sequential Search" << endl;
        cout << "2. Binary Search" << endl;
        cout << "3. Exit" << endl;

        // Ask for choice
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter a number to search for: ";
            cin >> target;
            SequentialSearch(arr, size, target);
        }
        else if (choice == 2) {
            cout << "Enter a number to search for: ";
            cin >> target;
            BinarySearch(arr, size, target);
        }
        else if (choice == 3) {
            cout << "Program exiting... Goodbye!\n";
        }
        else {
            cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 3); // Repeat until exit

    return 0;
}
