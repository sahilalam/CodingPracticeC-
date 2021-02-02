/*
The structure of linked list is the following

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

// Function to remove duplicates from the linked list
// root: root of the linked list
Node * removeDuplicates( Node *head)
{
    int *freq=new int[10001];
    for(int i=0;i<10001;i++)
    {
        freq[i]=0;
    }
    Node* tmp=head;
    Node* p=NULL;
    while(tmp)
    {
        if(freq[tmp->data]==0)
        {
            freq[tmp->data]++;
            p=tmp;
            tmp=tmp->next;
        }
        else
        {
            Node* n=tmp;
            tmp=tmp->next;
            p->next=tmp;
            delete n;
            n=NULL;
        }

    }

    return head;
}
