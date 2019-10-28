#include <iostream>
using namespace std;

int main()
{
  char input[50];

  cin >> input;

  int number;

  cin >> number;


  for(int i = 0; i < strlen(input); i++)
    {
      if(i == number)
	{
	  input[number] = i + 1;
	  i++;
	}
    }

  cout << input;
}
