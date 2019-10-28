#include <iostream>
#include <stack>
#include <queue>
using namespace std;

// Tree Node has data, left pointer, right pointer                                                           

struct TreeNode
{
  int datum;
  struct TreeNode* left;
  struct TreeNode* right;
};

// create a new node with given value, left and right pointers are nullptr                                   

struct TreeNode* newTreeNode(int value)
{
  struct TreeNode* node = new struct TreeNode;
  node->datum = value;
  node->left = nullptr;
  node->right = nullptr;
  return(node);
}

// Non-recursive traverse a binary tree                                                                      
// print out the values by inorder                                                                           
// it uses stack to store the nodes                                                                          

void noRecInorder(TreeNode *root)
{
  stack<TreeNode*> stack;

  while(true)
    {
      while(root != nullptr)
        {
          stack.push(root);
          root = root->left;
        }

      if(stack.empty() == true) break;

      root = stack.top();
      stack.pop();

      //print out the datum of root                                                                          

      cout << root->datum << endl;

      root = root->right;
    }
}

// level order traversal                                                                                     
// It uses queue to store the values of the next level                                                       

void levelOrder(TreeNode *root)
{
  queue<TreeNode*> queue;
  TreeNode* temp = new TreeNode;
  if(root != nullptr)
    {
      queue.push(root);
    }

  while(queue.empty() != true)
    {
      temp = queue.front();
      queue.pop();
      cout << temp->datum << endl;
      if(temp->left != nullptr)
	{
	  queue.push(temp->left);
	}
      if(temp->right != nullptr)
	{
	  queue.push(temp->right);
	}
    }
}

// Driver program to test above functions                                                                    

int main()
{
  /* Constructed binary tree is                                                                              
100                                                                                                          
/     \                                                                                                      
9      10                                                                                                    
/  \    /                                                                                                    
9   4  7                                                                                                     
  */

  struct TreeNode *root = newTreeNode(100);
  root->left        = newTreeNode(9);
  root->right       = newTreeNode(10);
  root->left->left  = newTreeNode(9);
  root->left->right = newTreeNode(4);
  root->right->left = newTreeNode(7);
  cout << "Inorder traversal result:" << endl;;
  noRecInorder(root);
  cout << "Level traversal result:" << endl;
  levelOrder(root);
  return 0;
}
