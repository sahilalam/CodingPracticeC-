/* The structure of the Linked list Node is as follows:

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

*/

Node* findIntersection(Node* head1, Node* head2)
{
    Node* ans=NULL;
    Node* tmp=NULL;
    while(head1!=NULL && head2!=NULL)
    {
        if(head1->data==head2->data)
        {
            Node* n=new Node(head1->data);
            head1=head1->next;
            head2=head2->next;
            if(tmp)
            {
                tmp->next=n;
                tmp=tmp->next;
            }
            else
            {
                ans=tmp=n;
            }

        }
        else
        {
            if(head1->data<head2->data)
            {
                head1=head1->next;
            }
            else
            {
                head2=head2->next;
            }
        }
    }
    return ans;
}
