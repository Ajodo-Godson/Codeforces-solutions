#include<bits/stdc++.h> 
using namespace std;
 int main(){    
 int n;   
  cin>>n;
     string s;    
 for(int i=0; i<n; i++){   
  cin>>s;    
 int length= s.size();    
 if(length>10){     
    s.erase(1, length-2);    
 cout<<s[0]<<(length-2)<<s[length-1]; } 
else{   
  cout<<s; }
cout<<endl;}}