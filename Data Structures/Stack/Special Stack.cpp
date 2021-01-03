stack<int> st;
void push(stack<int> &s,int a)
{
    if(s.empty())
    {
        s.push(a);
        st.push(a);
    }
    else
    {
        s.push(a);
        if(a<=st.top())
        {
            st.push(a);
        }
    }
}

bool isFull(stack<int> &s,int n)
{
     return s.size()==n;
}

bool isEmpty(stack<int> &s)
{
    return s.empty();
}

int pop(stack<int> &s)
{
    int tmp=s.top();
    s.pop();
    if(tmp==st.top())
    {
        st.pop();
    }
    return tmp;
}

int getMin(stack<int> &s)
{
    return st.top();
}
