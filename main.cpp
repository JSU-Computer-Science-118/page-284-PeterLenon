#include <ctime>
#include <cstdlib>
#include <iostream>

using namspace std;

int main()
{
  int num;
  cin>>num;
  seed = time(0);
  srand(seed);
  for (int i =0; i< num; i++)
  {
    cout<<rand()<<" "<<endl;
  }
  return 0;
}
  
    
  
