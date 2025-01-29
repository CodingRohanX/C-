#include <iostream>

int main() {
    // Define a 2D array of size 3x3
    int array[3][3];

    // Take input for the 2D array
    std::cout << "Enter elements for the 3x3 array:" << std::endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout << "Enter element at position " << i + 1 << ", " << j + 1 << ": ";
            std::cin >> array[i][j];
        }
    }

    // Print the 2D array
    std::cout << "The 3x3 array is:" << std::endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}

/*
Enter elements for the 3x3 array:
Enter element at position 1, 1: 1
Enter element at position 1, 2: 2
Enter element at position 1, 3: 3
Enter element at position 2, 1: 4
Enter element at position 2, 2: 5
Enter element at position 2, 3: 6
Enter element at position 3, 1: 7
Enter element at position 3, 2: 8
Enter element at position 3, 3: 9
The 3x3 array is:
1 2 3
4 5 6
7 8 9
*/