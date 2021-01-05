/* A binary tree node has data, pointer to left child
   and a pointer to right child
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

// root: root node of the tree
vector<int> verticalOrder(Node *root)
{
    queue<pair<Node*,int>> q;
    map<int,list<int>> m;
    vector<int> ans;
    q.push(make_pair(root,0));
    while(!q.empty())
    {
        pair<Node*,int> p=q.front();
        Node* n=p.first;
        int d=p.second;
        q.pop();
        m[d].push_back(n->data);
        if(n->left)
        {
            q.push(make_pair(n->left,d-1));
        }
        if(n->right)
        {
            q.push(make_pair(n->right,d+1));
        }
    }
    for(auto p:m)
    {
        for(auto d:p.second)
        {
            ans.push_back(d);
        }
    }
    return ans;
}
