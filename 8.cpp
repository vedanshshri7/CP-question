#include<bits/stdc++.h>
using namespace std;
int main()
{  
   int n;
   cin >> n;
   int arr[n];
   for(int i = 0;i<n;i++)
   {
    cin >> arr[i];
   }
   int k,cnt=0,ans=0,j;
   cin >> k;
   sort(arr,arr+n);
   for(int i = 0;i<n;i++)
   {
      for(int j = i; j<k ; j++)
      {
        if(arr[j]+1==arr[j+1])
        {
          cnt++;
        }
        if(cnt==k-1)
        {
          ans = j;
          cnt=0;
          break;
        }
        else{
          cnt=0;
          break;
        }
      }
      if(ans==j)
      {
        break;
      }
   }
   for(int i = j;i<k;i++)
   {
    cout << arr[i] << ' ';
   }
  return 0;  
}