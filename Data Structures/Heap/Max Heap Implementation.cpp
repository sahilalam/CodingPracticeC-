#include<iostream>
#include<vector>
using namespace std;
class MaxHeap
{
    vector<int> v;
    void heapify(int p)
    {
        int l=2*p+1;
        int r=2*p+2;
        int ind=p;
        if(l<v.size())
        {
            if(v[l]>v[ind])
            {
                ind=l;
            }
        }
        else
        {
            return;
        }
        if(r<v.size() && v[r]>v[ind])
        {
            ind=r;
        }
        if(ind==p)
        {
            return;
        }
        swap(v[ind],v[p]);
        heapify(ind);
    }
public:

    void push(int x)
    {
        v.push_back(x);
        int c=v.size()-1;
        int p=(c-1)/2;
        while(p>=0 && v[c]>v[p])
        {
            swap(v[c],v[p]);
            c=p;
            p=(p-1)/2;
        }
    }
    void pop()
    {
        swap(v[0],v[v.size()-1]);
        v.pop_back();
        heapify(0);
    }
    int top()
    {
        return v[0];
    }
    bool isempty()
    {
        return (v.size()==0);
    }
};
int main()
{
    MaxHeap *m=new MaxHeap;
    for(int i=10;i>=1;i--)
    {
        m->push(i);
    }
    while(!m->isempty())
    {
        cout<<m->top()<<" ";
        m->pop();
    }
    return 0;
}
