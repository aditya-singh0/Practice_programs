#include<bits/stdc++.h>
#define deb(x) cout << #x <<'	'<< x << endl
using namespace std;

long long minCost(long long arr[], long long n) {
    // Your code here
  priority_queue<int,vector<int>,greater<int>>pq(arr,arr+n);
 n=0;
while(pq.size()>1)
{arr[0]=pq.top();
pq.pop();
arr[1]=pq.top();
pq.pop();
 n+=arr[0]+arr[1];
pq.push(arr[0]+arr[1]);
}
return n;  
}
int main()
{int n = 4;
long long arr[] = {4, 3, 2, 6};
cout<<minCost(arr,n);

return 0;
}