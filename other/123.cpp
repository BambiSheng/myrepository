#include <iostream>
using namespace std;
int main()
{
  int a,b,c;
  cin >>a>>b>>c;
   if(c==0)
  {
  cout << "error";
  return 0;
  }
  int d=(a+b)/c;
  cout << d;
  return 0;
}