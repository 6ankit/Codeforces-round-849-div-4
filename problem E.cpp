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
  vector<int> arr(n);
  long long result=0;
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  int negative=0;
   for(int i=0;i<n;i++)
  {
    if(arr[i]<0)
    {
      negative+=1;
    }
  }
  if(negative%2==0)
  {
  for(int i=0;i<n;i++)
  {
    result+=abs(arr[i]);
  }
  }
  else 
  {
      for(int i=0;i<n;i++)
      {
        if(arr[i]<0&&negative>1)
        {
          arr[i]=abs(arr[i]);
          negative-=1;
        }
    }
    int bachahuanumber=0;
    int mini=INT_MAX;
    int idx=0;
    for(int i=0;i<n;i++)
    {
      if(arr[i]<0)
      {
        bachahuanumber=i;
      }
      else 
      {
        if(arr[i]<mini)
        {
          idx=i;
          mini=arr[i];
        }
      }
    }
    if(abs(arr[bachahuanumber])>arr[idx])
    {
      for(int i=0;i<n;i++)
      {
        if(i!=idx) result+=abs(arr[i]);
      }
      result=result-arr[idx];
    }
    else 
    {
      for(int i=0;i<n;i++)
      {
       if(i!=bachahuanumber) result=result+abs(arr[i]);
      }
      result=result-abs(arr[bachahuanumber]);
    }
  }
  cout<<result<<endl;
t-=1;
}
}
