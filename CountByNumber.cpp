#include <iostream>
#include <vector>

using namespace std;

vector<int> countBy(int x, int n)
{
    vector<int> counter;
    for (int i = 1; i <= n; i++)
    {
        counter.push_back(i*x);
    }

    return counter;
}

int main(void)
{
    int x = 2;
    int n = 5;
    vector<int> count = countBy(x, n);
    for (int i = 0; i < 5; i++)
    {
        cout << count[i] << endl;
    }

    cin.get();

    return 0;
}
