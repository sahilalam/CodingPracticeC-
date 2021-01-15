/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

// root: head node
Node *removeDuplicates(Node *root)
{
    Node* p=NULL;
    Node* ans=root;
    while(root!=NULL)
    {
        if(p)
        {
            if(root->data==p->data)
            {
                Node* tmp=root;
                root=root->next;
                p->next=root;
                delete tmp;
                tmp=NULL;
            }
            else
            {
                p=root;
                root=root->next;
            }
        }
        else
        {
            p=root;
            root=root->next;
        }
    }
    return ans;
}
