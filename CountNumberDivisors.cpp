#include <iostream>
#include <math.h>

using namespace std;

//Divisor with better algorithm performance
int divisors(int n)
{
    int counter = 0;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)
                counter++;
            else
                counter += 2;
        }
    }

    return counter;
}

int main(void)
{

    cout << divisors(100) << endl;

    cin.get();

    return 0;
}