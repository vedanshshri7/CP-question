#include<bits/stdc++.h>

using namespace std;
 int sum = 0;
int fact(int n)
{
    if(n>1)
      return n * fact(n-1);
    else
        return 1;
}

bool specialnumber(int N) 
{ 
    int arr[N]; 
    int i = 0; 
    int j, r;   
    int ans1 = N;
    while (N != 0) {  
        r = N % 10;  
        arr[i] = r; 
        sum = sum + fact(arr[i]) ;
        i++;  
        N = N / 10; 
    } 
    if(sum==ans1)
    {
      return true;
    }
    else {
      return false;
    }
} 
int main()
{
    int n;
    cin >> n;
     int sum = 0;
  bool ans = specialnumber(n);
  if(ans)
  {
    cout << "Yes" << '\n';
  }
  else{
    cout << "NO" << '\n';
  }
}