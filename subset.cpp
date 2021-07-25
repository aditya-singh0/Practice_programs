#include<bits/stdc++.h>
#define deb(x) cout << #x <<'	'<< x << endl
using namespace std;
#include <bits/stdc++.h> 
using namespace std; 
  
// Function to generate permutations 
void permute(string ip,string op) 
{ 
  //base
  if(ip.size()==0)
  {
      cout<<op<<" ";
      return;
  }
  string op1,op2;
  if(isdigit(ip[0]))
  {
    op2=op;
    op2.push_back(ip[0]);
   ip.erase(ip.begin());
     permute(ip,op2);
 // permute(ip,op2);
  return;
  }
   op1=op+ip[0];
   op2=op;
   if(isupper(ip[0]))
  op2.push_back(tolower(ip[0]));
  else  op2.push_back(toupper(ip[0]));
  ip.erase(ip.begin());
  permute(ip,op1);
  permute(ip,op2);

} 
  
// Driver code 
int main() 
{ 
    permute("C"," "); 
    return 0; 
} 

