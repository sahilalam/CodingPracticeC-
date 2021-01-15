/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
/*You are required to complete this method */
int c(Node* head)
{
    int ans=0;
    while(head!=NULL)
    {
        ans++;
        head=head->next;
    }
    return ans;
}
bool isPalindrome(Node *head)
{
    int n=c(head);
    Node* t1=head;
    Node* t2=head;
    Node* prev=NULL;
    while(t2!=NULL && t2->next!=NULL)
    {
        prev=t1;
        t1=t1->next;
        t2=t2->next->next;
    }
    if(n%2!=0)
    {
        prev=t1;
        t1=t1->next;
    }
    Node* p=NULL;
    while(t1!=NULL)
    {
        Node* n=t1->next;
        t1->next=p;
        p=t1;
        t1=n;
    }
    prev->next=p;
    while(p!=NULL)
    {
        if(p->data!=head->data)
        {
            return false;
        }
        p=p->next;
        head=head->next;
    }
    return true;
}
