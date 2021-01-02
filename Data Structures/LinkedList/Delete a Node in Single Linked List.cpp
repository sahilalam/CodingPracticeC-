/* Link list Node
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

/*You are required to complete below method*/
Node* deleteNode(Node *head,int x)
{
    if(x==1)
    {
        Node* tmp=head->next;
        delete head;
        head=NULL;
        return tmp;
    }
    head->next=deleteNode(head->next,x-1);

}
