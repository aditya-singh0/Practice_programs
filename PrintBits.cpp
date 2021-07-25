#include<bits/stdc++.h>
#define deb(x) cout << #x <<'	'<< x << endl
using namespace std;
void printbits(int value){
    for(int i=31;i>=0;i--)
    cout<<((value>>i)&1);
    //cout<<((1<<i)&value);
}
int main()
{int a=27;
printbits(a);
return 0;
}