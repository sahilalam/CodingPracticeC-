
/* A binary tree Node

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

//You are required to complete this method
vector<int> levelOrder(Node* node)
{
  queue<Node*> q;
  vector<int> ans;
  q.push(node);
  while(!q.empty())
  {
      Node* n=q.front();
      q.pop();
      if(n!=NULL)
      {
          ans.push_back(n->data);
          if(n->left)
          {
              q.push(n->left);
          }
          if(n->right)
          {
              q.push(n->right);
          }

      }
  }
  return ans;
}
