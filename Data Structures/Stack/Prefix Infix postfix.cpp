#include<iostream>
#include<stack>
#include<unordered_map>
using namespace std;
void rev(string &s)
{
    int i=0;
    int j=s.size()-1;
    while(i<=j)
    {
        swap(s[i],s[j]);
        i++;j--;
    }
}
int getpriority(char s)
{
    if(s=='^')
    {
        return 4;
    }
    else if(s=='/' || s=='*')
    {
        return 3;
    }
    else if(s=='+' || s=='-')
    {
        return 2;
    }
    else
    {
        return 0;
    }
}
void ipr()
{
    string s;
    cin>>s;
    rev(s);
    stack<char> st;
    string ans;
    for(int i=0;i<s.size();i++)
    {
        int p=getpriority(s[i]);

        if((st.empty() && p>0) || (!st.empty() && p>getpriority(st.top())) || s[i]==')')
        {
            st.push(s[i]);
        }
        else if(s[i]=='(')
        {
            while(!st.empty() && st.top()!=')')
            {
                char tmp=st.top();
                st.pop();
                ans.push_back(tmp);
            }
            st.pop();
        }
        else if(p==0)
        {
            ans.push_back(s[i]);
        }
        else
        {
            while(!st.empty() && p<=getpriority(st.top()))
            {
                char tmp=st.top();
                st.pop();
                ans.push_back(tmp);
            }
            st.push(s[i]);
        }

    }
    while(!st.empty())
    {
        char tmp=st.top();
        st.pop();
        ans.push_back(tmp);
    }
    rev(ans);
    cout<<ans<<endl;
}
void ipo()
{
    string s;
    cin>>s;
    stack<char> st;
    string ans;
    for(int i=0;i<s.size();i++)
    {
        int p=getpriority(s[i]);
        if((st.empty() && p>0) || (!st.empty() && p>getpriority(st.top())) || (s[i]=='('))
        {
            st.push(s[i]);
        }
        else if(s[i]==')')
        {
            while(!st.empty() && st.top()!='(')
            {
                char tmp=st.top();
                st.pop();
                ans.push_back(tmp);
            }
            st.pop();
        }
        else if(p==0)
        {
            ans.push_back(s[i]);
        }
        else
        {
            while(!st.empty() && p<=getpriority(st.top()))
            {
                char tmp=st.top();
                st.pop();
                ans.push_back(tmp);
            }
            st.push(s[i]);
        }
    }
    while(!st.empty())
    {
        char tmp=st.top();
        st.pop();
        ans.push_back(tmp);
    }
    cout<<ans<<endl;
}
void pri()
{
    string s;
    cin>>s;
    stack<string> st;
    for(int i=s.size()-1;i>=0;i--)
    {
        if(s[i]=='+' || s[i]=='-' || s[i]=='/' || s[i]=='*' || s[i]=='^')
        {
            string op1=st.top();
            st.pop();
            string op2=st.top();
            st.pop();
            string tmp="("+op1+s[i]+op2+")";
            st.push(tmp);
        }
        else
        {
            string tmp;
            tmp.push_back(s[i]);
            st.push(tmp);
        }
    }
    string ans=st.top();
    st.pop();
    cout<<ans<<endl;
}
void prp()
{
    string s;
    cin>>s;
    stack<string> st;
    for(int i=s.size()-1;i>=0;i--)
    {
        if(s[i]=='+' || s[i]=='-' || s[i]=='/' || s[i]=='*' || s[i]=='^')
        {
            string op1=st.top();
            st.pop();
            string op2=st.top();
            st.pop();
            string tmp=op1+op2+s[i];
            st.push(tmp);
        }
        else
        {
            string tmp;
            tmp.push_back(s[i]);
            st.push(tmp);
        }
    }
    string ans=st.top();
    st.pop();
    cout<<ans<<endl;
}
void poi()
{
    string s;
    cin>>s;
    stack<string> st;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='+' || s[i]=='-' || s[i]=='/' || s[i]=='*' || s[i]=='^')
        {
            string op2=st.top();
            st.pop();
            string op1=st.top();
            st.pop();
            string tmp;
            tmp.push_back('(');
            tmp=tmp+op1;
            tmp.push_back(s[i]);
            tmp=tmp+op2;
            tmp.push_back(')');
            st.push(tmp);
        }
        else
        {
            string tmp;
            tmp.push_back(s[i]);
            st.push(tmp);
        }
    }
    string ans=st.top();
    st.pop();

    cout<<ans<<endl;
}
void pop()
{
    string s;
    cin>>s;
    stack<string> st;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='+' || s[i]=='-' || s[i]=='/' || s[i]=='*' || s[i]=='^')
        {
            string op2=st.top();
            st.pop();
            string op1=st.top();
            st.pop();
            string tmp=s[i]+op1+op2;
            st.push(tmp);
        }
        else
        {
            string tmp;
            tmp.push_back(s[i]);
            st.push(tmp);
        }
    }
    string ans=st.top();
    st.pop();

    cout<<ans<<endl;
}
int display()
{

    cout<<"Enter your choice:"<<endl<<"1. Infix to Prefix"<<endl<<"2. Infix to Postfix"<<endl<<"3. Prefix to Infix"<<endl<<"4. Prefix to Postfix"<<endl<<"5. Postfix to Infix"<<endl<<"6. Postfix to Prefix"<<endl;
    int choice;
    cin>>choice;
    return choice;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int choice=display();
        switch(choice)
        {
            case 1:{ipr();break;};
            case 2:{ipo();break;};
            case 3:{pri();break;};
            case 4:{prp();break;};
            case 5:{poi();break;};
            case 6:{pop();break;};
            default:{cout<<"INVALID!!"<<endl<<"Try Again"<<endl;t++;}
        }
    }

}
