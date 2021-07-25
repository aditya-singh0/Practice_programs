#include<bits/stdc++.h>
#define deb(x) cout << #x <<'	'<< x << endl
using namespace std;
const int size=9e7+1;
vector<int> prime();
bool ar[size];
void seive()
{
    //for 2 and 3
    ar[0]=ar[1]=true;
    for(int i=2;i*i<=size;i++){
        if(!ar[i])
        {
            for(int j=i*i;j<=size;j+=i)
            ar[j]=true;
        }
    }
    for(int i=2;i<=size;i++)
    {if(!ar[i])
    prime.push_back(i);}
}
int main()
{
    int t,n;
    cin>>t;
    seive();
    while (t--)
    {
        cin>>n;
        cout<<prime[n-1]<<endl;
    }
    
return 0;
}