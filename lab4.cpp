#include <iostream>
#include <fstream>
using namespace std;

struct SocialSecurity
{
  string SSN;
  string name;
};

int main(int argc, char* argv[])
{
  bool g = false;
  string social;
  SocialSecurity s[1000];
  int x = 0, t;
  string s1, s2, s3, s4;
  fstream input(argv[1]);
  while(!input.eof()){
    SocialSecurity w;
    input >> s1 >> s2 >> s3 >> s4;
    w.SSN = s2;
    w.name = s3 + " " + s4;
    s[x] = w;
    x++;
    if(!input) break;
  }
  input.close();
  cout << "Input a SSN:" << endl;
  cin >> social;
  for(int i = 0; i <= x; i++){
    if(social.compare(s[i].SSN) == 0){
      g = true;
      t = i;
      break;
      }
  }
  if(g)
    {
      cout << "Found at location " << t << endl;
    }
  else
    {
      cout << "Location not found" << endl;
    }
}
