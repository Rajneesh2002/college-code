#include<iostream>
using namespace std;

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
       string s; cin>>s;
       if(s[0]=='a')
       {
           cout<<s[1]-s[0]<<endl;
       }
       else
       {
           int x=(abs(s[1]-s[0]))-1;
           int y=26-(s[0]-97);
           int z=sum(y)+1;
           cout<<z+x<<endl;
       }
    }
    return 0;
}