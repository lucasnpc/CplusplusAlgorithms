#include <iostream>

using namespace std;

int makeNegative(int num)
{
   return num <= 0 ? num : (num * -1);
}

int main(void)
{
    int number = 123;
    cout << makeNegative(1) << endl;

    cin.get();

    return 0;
}
