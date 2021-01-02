

/* Link list node */
/*
struct Node
{
    int data;
    Node* next;
    Node(int x) {  data = x;  next = NULL; }
}; */

// head : reference to head of linked list
int getCount(struct Node* head){

    if(head==NULL)
    {
        return 0;
    }
    return 1+getCount(head->next);

}
