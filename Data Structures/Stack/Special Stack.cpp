#include<iostream>
#include<stack>
using namespace std;
void push(stack<int>& s,int a);
bool isFull(stack<int>& s,int n);
bool isEmpty(stack<int>& s);
int pop(stack<int>& s);
int getMin(stack<int>& s);
//This is the STL stack (http://quiz.geeksforgeeks.org/stack-container-adaptors-the-c-standard-template-library-stl/).
stack<int> s;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a;
		cin>>n;
		while(!isEmpty(s)){
		    pop(s);
		}
		while(!isFull(s,n)){
			cin>>a;
			push(s,a);
		}
		cout<<getMin(s)<<endl;
	}
}

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
