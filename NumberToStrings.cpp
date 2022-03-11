#include <iostream>
#include <string>

using namespace std;

string number_to_string(int num)
{
    return to_string(num);
}

int main(void)
{
    int number = 123;
    cout << number_to_string(number) << endl;

    cin.get();

    return 0;
}
