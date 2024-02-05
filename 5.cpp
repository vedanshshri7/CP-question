#include<bits/stdc++.h>
using namespace std;
int main()
{  
    int n,m;
    cin >> n >> m;
    int arr[n];
    int a[m];
    for(int i = 0;i<n;i++)
      cin >> arr[i];
    for(int i = 0;i<n;i++)
      cin >> a[i];
    int ans[m+n];
    for(int i = 0;i<n;i++)
    {
      ans[i] = arr[i];
    }
    int k = n;
     for(int i = 0;i<n;i++)
    {
      ans[k] = a[i];
      k++;
    }
    sort(ans,ans+m+n);
    for(int i = 0;i<n+m;i++)
    {
      cout << ans[i] << ' ';
    }
  return 0;  
}