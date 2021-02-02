/*
  Sort the list of 0's,1's and 2's
  The input list will have at least one element
  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

// This function is to segregate the elememtns in the linked list
// This will do the required arrangement by changing the links
Node* segregate(Node *head) {

    Node* i=head;
    Node* z=head;
    Node* t=head;
    int n=0;
    int nt=0;
    while(i!=NULL)
    {
        n++;
        if(i->data==2)
        {
            nt++;
        }
        i=i->next;
    }
    int d=(n-nt);
    while(d)
    {
        t=t->next;
        d--;
    }
    Node* e=t;
    i=head;
    while(i!=e)
    {
        if(i->data==0)
        {
            swap(i->data,z->data);
            i=i->next;
            z=z->next;
        }
        else if(i->data==2)
        {
            swap(i->data,t->data);
            t=t->next;
        }
        else
        {
            i=i->next;
        }
    }
    return head;

}
