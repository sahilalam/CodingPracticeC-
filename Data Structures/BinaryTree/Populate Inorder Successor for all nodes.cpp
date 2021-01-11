/* Set next of p and all descendents of p by traversing them in reverse Inorder */

/*
Node Structure

struct node
{
	int data;
	struct node *left;
	struct node *right;
	struct node *next;

	node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	    next = NULL;
	}
};
*/
void revinorder(node* p,node* &tmp)
{
    if(p==NULL)
    {
        return ;
    }
    revinorder(p->right,tmp);
    p->next=tmp;
    tmp=p;
    revinorder(p->left,tmp);
}
void populateNext(struct node* p)
{
    node* tmp=NULL;
    revinorder(p,tmp);
}
