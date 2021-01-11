/*

struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }

*/

bool detectLoop(Node* head)
{
    Node* t1=head;
    Node* t2=head;
    while(t2!=NULL && t2->next!=NULL)
    {
        t1=t1->next;
        t2=t2->next->next;
        if(t1==t2)
        {
            return true;
        }
    }
    return false;
}
