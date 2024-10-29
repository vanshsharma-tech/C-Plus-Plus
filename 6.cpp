#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()
using namespace std;

void generateRandomNumbers() {
    bool used[10] = {false}; // To keep track of used numbers
    srand(time(0));          // Seed the random number generator
    
    for (int i = 0; i < 10; i++) {
        int randomNum;
        do {
            randomNum = rand() % 10; // Generate a random number between 0 and 9
        } while (used[randomNum]);    // Repeat if the number is already used
        
        used[randomNum] = true;       // Mark the number as used
        cout << randomNum << " ";     // Output the random number
    }
    cout << endl;
}

int main() {
    generateRandomNumbers();
    return 0;
}
