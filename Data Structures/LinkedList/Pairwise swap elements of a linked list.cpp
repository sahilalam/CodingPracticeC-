/*
  Pairwise swap a linked list
  The input list will have at least one element
  node is defined as

struct node
{
    int data;
    struct node* next;

    node(int x){
        data = x;
        next = NULL;
    }

}*head;
*/

Node* pairWiseSwap(struct Node* head) {
    Node* c=head;
    Node* pt=NULL;
    while(c!=NULL && c->next!=NULL)
    {
        Node* n=c->next;
        Node* tmp=n->next;
        n->next=c;
        if(pt)
        {
            pt->next=n;
        }
        else
        {
            head=n;
        }
        pt=c;
        c=tmp;
    }
    if(pt)
    {
         pt->next=c;
    }

    return head;
}
