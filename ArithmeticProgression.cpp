#include <iostream>

using namespace std;

int summation(int num)
{
    return num * (num + 1) / 2;
}

int main(void)
{
    int num = 2;
    cout << summation(num) << endl;

    cin.get();

    return 0;
}
