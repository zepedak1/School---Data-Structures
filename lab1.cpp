#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  int x, y;
  cin >> x;
  cin >> y;
  char array[x][y];
  for(int i = 0; i < x; i++)
    {
      for(int j = 0; j < y; j++)
	{
	  cin >> array[i][j];
	}
    }
  for(int i = 0; i < x; i++)
    {
      for(int j = 0; j < y; j++)
	{
	  cout << array[i][j] << " ";
	}
      cout << '\n';
    }
}
