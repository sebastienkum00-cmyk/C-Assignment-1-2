#include <iostream>
using namespace std;

// Function to calculate factorial
long long calculateFactorial(int n)
{
    long long fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int main()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number < 0 || number > 20)
    {
        cout << "Please enter a number between 0 and 20.";
    }
    else
    {
        cout << "Factorial = "
             << calculateFactorial(number);
    }

    return 0;
}
