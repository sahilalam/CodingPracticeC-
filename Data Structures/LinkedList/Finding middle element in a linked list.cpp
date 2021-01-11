/* Link list Node
struct Node {
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

}; */

/* Should return data of middle node. If linked list is empty, then  -1*/
int getMiddle(Node *head)
{
   Node* t1=head;
   Node* t2=head;
   while(t1!=NULL && t1->next!=NULL)
   {
       t1=t1->next->next;
       t2=t2->next;
   }
   return t2->data;
}
