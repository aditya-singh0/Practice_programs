#include<bits/stdc++.h>
using namespace std;

#define itr(i,v)        for(auto i=v.begin();i!=v.end();i++)
template<class T> T power(T N,T P){ return (P==0)?  1: N*power(N,P-1); }
#define all(x)          x.begin(), x.end()
#define ff               first
#define ss               second
#define int             long long
#define pb              push_back
#define pii             pair<int,int>
#define vi              vector<int>
#define vvi             vector<vi>
#define mii             map<int,int>
#define maxh             priority_queue<int>
#define minh             priority_queue<int,vi,greater<int> >
#define inf             1e18
#define f(i,n)          for(int i=0;i<n;i++)
#define deb(x)          cout << #x << "=" << x << '\n';
#define ps(x,y)         fixed<<setprecision(y)<<x
#define rep(i,a,b)        for(int i=a;i<b;i++)
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
const char ln='\n';
const char sp=' ';
const int mod=1000000007;
int modpow(int x, int y, int p);
bool isodd(int a);
void soe(int size,bool arr[]);
bool isprime(int a);
int modinv(int a, int m);
int lcm(int a, int b);
bool po2 (int x);
struct comp;


void solve() {
    int k;
	cin >> k;
	vector<int> ans(1 << (k + 1));
	rep(i,(1<<k),(1<<(k+1))){
		ans[i] = 1;
	}
	

	string s;
	cin >> s;
	
	s.pb('&');
	reverse(all(s));
	
	for(int i = (1 << k) - 1; i > 0; i--){
		if(s[i] == '0'){
			ans[i] = ans[2 * i + 1];
		}
		else if(s[i] == '1'){
			ans[i] = ans[2 * i];
		}
		else{
			ans[i] = ans[2 * i] + ans[2 * i + 1];
		}
	}
    	for(int i:ans){
        cout<<i<<sp;
    }
	
	int q;
	cin >> q;
	
	while(q--){
		int p;
		char c;
		cin >> p >> c;
		p = (1 << (k)) - p;
		
		s[p] = c;
		
		while(p){
			if(s[p] == '0'){
				ans[p] = ans[2 * p + 1];
			}
			else if(s[p] == '1'){
				ans[p] = ans[2 * p];
			}
			else{
				ans[p] = ans[2 * p] + ans[2 * p + 1];
			}
			p /= 2;
		}
		
		//cout << ans[1] << "\n";
	}
	
	
}

int32_t main() {
    FIO;
    int t = 1;
    //cin >> t;
    while(t--) {
        solve();
         cout<<ln;
    }
    return 0;
}


int lcm(int a, int b) {
    return (a * b) / __gcd(a, b);
}

bool po2(int x) {
    return x && (!(x&(x-1)));
}

int modpow(int x, int y, int p) {
    int res = 1;
    x = x % p;
    if (x == 0)
        return 0;
    while (y > 0) {
        if (y & 1)
            res = (res * x) % p;
        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}

int modinv(int a, int m) {
    int g = __gcd(a, m);
    if (g != 1)
        return -1;
    else {
        return modpow(a, m - 2, m);
    }
}

bool isodd(int a)
{ if ( a % 2 != 0)
return 1; else return 0;}

void soe(int n,bool sieve[])
{
     f(i,n)  sieve[i]=1;
      sieve[0]=0;sieve[1]=0;
      for (int x = 2; x <= n; x++) {
       if (!sieve[x]) continue;
           for (int u = 2*x; u <= n; u += x) 
                  sieve[u] = 0;
         }
}
bool isprime(int a)
{ if(a<=1)
 return 0;
    for (int  i = 2; i <=sqrt(a); i++)
    { if(a%i==0)
      return 0; } 
   return 1;  
}
struct comp {
    bool operator()(pii const& p1, pii const& p2) {
        if(p1.first>p2.first) return true;
        else if(p1.first<p2.first) return false;
        else return p1.second>p2.second;
    }
};