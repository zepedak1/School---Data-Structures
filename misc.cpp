#include <iostream>
using namespace std;

void reverse(char *p)
{
  for(int i = strlen(p); i > -1; i--)
    {
      cout << *(p+i);
      if(i == 0)
	{
	  cout << endl;
	}
    }
}
