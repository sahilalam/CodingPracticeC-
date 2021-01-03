#include<bits/stdc++.h>
using namespace std;

class QueueStack{
private:
    queue<int> q1;
    queue<int> q2;
public:
    void push(int);
    int pop();
};


int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        QueueStack *qs = new QueueStack();

        int Q;
        cin>>Q;
        while(Q--){
        int QueryType=0;
        cin>>QueryType;
        if(QueryType==1)
        {
            int a;
            cin>>a;
            qs->push(a);
        }else if(QueryType==2){
            cout<<qs->pop()<<" ";

        }
        }
        cout<<endl;
    }
}
/* The method push to push element into the stack */
void QueueStack :: push(int x)
{
        if(q1.empty())
        {
            q1.push(x);
        }
        else
        {
            while(!q1.empty())
            {
                int tmp=q1.front();
                q1.pop();
                q2.push(tmp);
            }
            q1.push(x);
            while(!q2.empty())
            {
                int tmp=q2.front();
                q2.pop();
                q1.push(tmp);
            }
        }
}

/*The method pop which return the element poped out of the stack*/
int QueueStack :: pop()
{
        if(q1.empty())
        {
            return -1;
        }
        int ans=q1.front();
        q1.pop();
        return ans;
}
