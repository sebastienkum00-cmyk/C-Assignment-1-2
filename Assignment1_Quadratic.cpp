#include <iostream>
#include <cmath>
using namespace std;

// Function to calculate the roots
void calculateRoots(double a, double b, double c)
{
    double d = (b * b) - (4 * a * c);

    if (a == 0)
    {
        cout << "This is not a quadratic equation.";
    }
    else if (d < 0)
    {
        cout << "The equation has no real roots.";
    }
    else
    {
        double root1 = (-b + sqrt(d)) / (2 * a);
        double root2 = (-b - sqrt(d)) / (2 * a);

        cout << "First root = " << root1 << endl;
        cout << "Second root = " << root2 << endl;
    }
}

int main()
{
    double a, b, c;

    cout << "Enter the value of a: ";
    cin >> a;

    cout << "Enter the value of b: ";
    cin >> b;

    cout << "Enter the value of c: ";
    cin >> c;

    calculateRoots(a, b, c);

    return 0;
