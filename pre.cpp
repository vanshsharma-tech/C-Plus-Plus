#include <iostream>
using namespace std;

class Counter
{
private:
    int count;

public:
    // Constructor
    Counter(int c = 0) : count(c) {}

    // Overload the post-increment operator
    Counter operator++(int)
    {
        Counter temp = *this; // Store the current state
        count++;              // Increment the count
        return temp;         // Return the old value (before increment)
    }

    // Display function to show the count
    void display() const
    {
        cout << "Count: " << count << endl;
    }
};

int main()
{
    Counter c1(10);

    cout << "Original count: ";
    c1.display();

    Counter c2 = c1++; // Calls the overloaded post-increment operator
    cout << "After post-increment: ";
    c1.display();

    cout << "Returned count from post-increment: ";
    c2.display();

    return 0;
}
