#include <iostream>
#include <string>

using namespace std;

string even_or_odd(int number)
{
    return (number % 2 == 0) ? "Even" : "Odd";
}

int main(void)
{
    int num = 20;
    cout << even_or_odd(num) << endl;

    cin.get();

    return 0;
}
