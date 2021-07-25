
#include <bits/stdc++.h> 
using namespace std; 
string removeDuplicates(string s,int& n){ 
unordered_map<char,int> m; 
int index = 0; 
for(int i=0;i<n;i++){ 
	if(m[s[i]]==0) 
	{ 
	s[index++] = s[i]; 
	m[s[i]]++; 
	} cout<<index<<" ";
} s.resize(index);
return s; 
} 

//driver code 
int main(){ 
string s = "geeksforgeeks"; 
int n = s.size(); 
cout<<removeDuplicates(s,n)<<endl; 
return 0; 
} 
