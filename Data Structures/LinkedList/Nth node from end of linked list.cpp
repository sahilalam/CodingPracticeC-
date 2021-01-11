/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

/* Should return data of n'th node from the end of linked list.
*  head: head of the linked list
*  n: nth node from end to find
*/
int getNthFromLast(Node *head, int n)
{
       Node* t1=head;
       Node* t2=head;
       while(n>0 && t1!=NULL)
       {
           t1=t1->next;
           n--;
       }
       if(n>0)
       {
           return -1;
       }
       while(t1!=NULL)
       {
           t1=t1->next;
           t2=t2->next;
       }
       return t2->data;
}
