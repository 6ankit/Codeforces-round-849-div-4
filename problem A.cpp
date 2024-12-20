#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  string s="codeforces";
  while(t)
  {
    string ans="";
    char p;
    cin>>p;
    for(int i=0;i<s.size();i++)
    {
      if(s[i]==p)
      {
        ans=ans+"YES";
        break;
      }
    }
    if(ans.size()==0)
    {
      ans=ans+"NO";
    }
    cout<<ans<<endl;
    t-=1;
  }
}
