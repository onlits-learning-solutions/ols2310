#include <iostream>
using namespace std;

int main(void)
{
    int n, f = 1;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = n; i >= 1; i--)
    {
        f *= i;
    }
    cout << "Factorial is " << f << endl;
    return 0;
}