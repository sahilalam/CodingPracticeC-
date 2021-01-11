/*

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

// Your task is to complete the function this function
// function should return the size of the loop

int countNodesinLoop(struct Node *head)
{
    Node* t1=head;
    Node* t2=head;
    bool loop=false;
    while(t2!=NULL && t2->next!=NULL)
    {
        t1=t1->next;
        t2=t2->next->next;
        if(t1==t2)
        {
            t1=head;
            loop=true;
            break;
        }
    }
    if(!loop)
    {
        return 0;
    }
    while(t1!=t2)
    {
        t1=t1->next;
        t2=t2->next->next;
    }
    Node* start=t1->next;
    t1=t1->next;
    int ans=1;
    while(t1->next!=start)
    {
        t1=t1->next;
        ans++;
    }
    return ans;

}
