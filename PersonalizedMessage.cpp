#include<iostream>
#include <string>

using namespace std;

std::string greet(const std::string& name, const std::string& owner) {
  if (name == owner)
  {
    return "Hello boss";
  }
  
  return "Hello guest";
}

int main(void){

    cout << greet("Daniel", "Daniel") << endl;

    cin.get();
    
    return 0;
}