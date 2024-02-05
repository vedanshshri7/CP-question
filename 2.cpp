#include<bits/stdc++.h>
using namespace std;
int main() {  
  int a=0,b=1,ans,n;    
    
 cin>>n;    
 cout<<a<<" "<<b<<" ";     
 for(int i=2;i<n;++i)     
 {    
  ans = a+b;    
  cout<<ans<<" ";    
  a = b;    
  b = ans;    
 }    
   return 0;  
}
