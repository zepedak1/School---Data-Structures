#include <iostream>
#include <fstream>
using namespace std;

struct Node{
  string SSN;
  string name;
  Node* next;
};

void append(Node*& head, string S, string K)
{
  Node* newPtr = new Node;
  newPtr->SSN = S;
  newPtr->name = K;
  if(head == NULL)
    {
      head = newPtr;
    }
  else{
    Node* temp = head;
    while(temp->next != NULL)
      {
	temp = temp->next;
      }
    temp->next = newPtr;
  }
}

void search(Node* head, string S, int &index)
{
  if(head == NULL) index = -1;
  if(head->SSN == S) return;
  search(head->next, S, ++index);
}
    

int main(int argc, char* argv[])
{
  Node* headPtr1 = NULL;
  string s1, s2, s3, s4, Social;
  int location = 0;
  fstream input(argv[1]);
  while(!input.eof()){
    input >> s1 >> s2 >> s3 >> s4;
    append(headPtr1, s2, s3 + s4);
    if(!input) break;
  }
  input.close();
  cout << "Input a SSN:" << endl;
  cin >> Social;
  search(headPtr1, Social, location);
  if(location == -1)
    {
      cout << "Location not found";
    }
  else
    {
      cout << "Found at location: " << location;
    }
  cout << endl;
}
