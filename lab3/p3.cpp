#include<iostream>
#include<math.h>
using namespace std;

int isa(string p)
{
    int x=0;
    for(int i=0;i<p.length();i++)
    {
        if(p[i]=='a') return 1;
    }
    return 0;
}
int sum(int p)
{
    int s=0;
    for(int i=p;i<=25;i++) s+=i;
    return s;
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
       string s,t; cin>>s>>t;
       if(t[0]=='a'&&t.length()==1)
       {
           cout<<1<<endl;


       }
       else if(isa(string t))
       {
           cout<<-1<<endl;

       }
       else
       {
           cout<<pow(2,s.length())<<endl;
       }
       
    }
    return 0;
}