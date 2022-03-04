#include <iostream>
#include <vector>

using namespace std;

int count_sheep(vector<bool> arr)
{
  int sum = 0;
  for (const bool &value : arr)
  {
    if (value)
    {
      sum += 1;
    }
  }
  return sum;
}

int main(void)
{
  vector<bool> array1 = {true, true, true, false,
                         true, true, true, true,
                         true, false, true, false,
                         true, false, false, true,
                         true, true, true, true,
                         false, false, true, true};
  cout << count_sheep(array1) << endl;

  cin.get();

  return 0;
}
