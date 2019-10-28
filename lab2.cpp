#include <iostream>
#include <cstring>
#include <vector>
#include <cstdlib>
using namespace std;

bool check(vector< vector<char> > &matrix, char *word, int x, int y)
{
  char *tempWord;
  return true;
}

int main(int argc, char *argv[])
{
  int x, y;
  char word;
  cin >> x;
  cin >> y;
  vector<vector<char> > test;
  test.resize(x);
  for(int i = 0; i < test.size(); i++)
    {
      test[i].resize(y);
    }

  for(int i = 0; i < test.size(); i++)
    {
      for(int j = 0; j < test[0].size(); j++)
	{
	  cin >> word;
	  test[i][j] = word;
	}
    }
}

