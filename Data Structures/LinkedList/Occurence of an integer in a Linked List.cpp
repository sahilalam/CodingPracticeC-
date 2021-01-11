/*
  Return the no. of times search_for value is there in a linked list.
  The input list will have at least one element

  Node is defined as
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

int count(struct node* head, int search_for)
{
    if(head==NULL)
    {
        return 0;
    }
    int tmp=count(head->next,search_for);
    if(head->data==search_for)
    {
        return 1+tmp;
    }
    return tmp;
}
