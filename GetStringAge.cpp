#include <iostream>
#include <string>

using namespace std;

int get_age(const std::string& she_said) {    
    return stoi(she_said);
}

int main(void)
{
    cout << get_age("9 years old") << endl;

    cin.get();

    return 0;
}
