#include<bits/stdc++.h>
using namespace std;
int main()
{  
    string s;
    cin >> s;
    unordered_set<char>str;
    for(int i =0;i<s.size();i++)
    {
      str.insert(s[i]);
    }
    for(auto i :str)     
    {    
        cout <<i;
    }    
  cout<<'\n';
  return 0;  
}