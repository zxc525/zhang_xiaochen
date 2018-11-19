#include <iostream>

using namespace std;

int main()
{
  int passes=0;
  int failures=0;
  int studentCounter=1;

  while (studentCounter<=10)
  {
      int result=0;
      cout<<"Enter result(1=pass,2=fail):";
      cin>>result;

      if(result==1)
      {
           passes++;
           studentCounter++;
      }

      if(result==2)
      {
          failures++;
          studentCounter++;
      }

      if(result!=1||result!=2)
      {
          passes=passes;
          failures=failures;
          studentCounter=studentCounter;
      }


  }

  cout<<"Passes:"<<passes<<"\nFailed:"<<failures<<endl;
  return 0;
}
