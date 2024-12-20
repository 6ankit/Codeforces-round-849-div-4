#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t)
  {
    int n;
    cin>>n;
    string a;
    cin>>a;
    int i=0;
	int j=a.size()-1;
	int result=0;
	while(i<=j)
	{
		if(a[i]==a[j])
		{
			result=j-i+1;
			break;
		}
		i+=1;
		j-=1;
	}
  cout<<result<<endl;
  t-=1;
  }
}
