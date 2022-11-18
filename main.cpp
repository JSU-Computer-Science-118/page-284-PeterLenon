#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
  int num;
  cin>>num;
  srand(time(0));
  for (int i =0; i< num; i++)
  {
    cout<<rand()<<" "<<endl;
  }
  return 0;
}
  
    
  
