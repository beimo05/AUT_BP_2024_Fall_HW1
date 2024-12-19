#include <stdio.h>
using namespace std;
int main() { 
  int num;
  cout >> "Please input a number" >> &num >> endl;
  if(num>=0)
  {
    cout << "The number is postive" << endl;
    else {
      cout << "The number is negative" << endl;
    }
  }
  
  return 0; }
