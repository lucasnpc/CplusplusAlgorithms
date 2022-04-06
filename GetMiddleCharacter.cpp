#include <iostream>
#include <string>

using namespace std;

std::string get_middle(std::string input)
{
    int length = input.length();

    if (length % 2 == 0)
    {
        return input.substr((length / 2) - 1, 2);
    }
    else
    {
        return input.substr(length / 2, 1);
    }
}

int main(void)
{

    cout << get_middle("a") << endl;

    cin.get();

    return 0;
}