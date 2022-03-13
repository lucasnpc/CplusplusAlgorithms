#include <iostream>
#include <vector>

using namespace std;

int basicOp(char op, int val1, int val2)
{
    switch (op)
    {
    case '+':
        return val1 + val2;
    case '-':
        return val1 - val2;
    case '*':
        return val1 * val2;
    case '/':
        return val2 != 0 ? val1 / val2 : 0;
    }
    return 0;
}

int main(void)
{
    char op = '+';
    int n1 = 2;
    int n2 = 5;
    cout << basicOp(op, n1, n2) << endl;

    cin.get();

    return 0;
}
