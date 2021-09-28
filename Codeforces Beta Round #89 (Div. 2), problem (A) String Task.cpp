#include<bits/stdc++.h>
using namespace std;
int main(){
	string s,s2;
	cin>>s;
	int count=0;
	int length=s.size();
	for(int i=0; i<length; i++){
		if(s[i]=='A'|| s[i]== 'E' || s[i]== 'Y' || s[i]== 'I'|| s[i]=='O'|| s[i]=='U'|| s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='y'||s[i]=='o'||s[i]=='u'){
			continue;}
			else{
				s2+=".";
				s2+=towlower(s[i]);
			}}
cout<<s2;}
