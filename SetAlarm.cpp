#include <iostream>

using namespace std;

bool set_alarm(const bool& employed,const bool& vacation){
  return (employed && !vacation);
}

int main(void)
{
    cout << set_alarm(true, false) << endl;

    cin.get();

    return 0;
}
