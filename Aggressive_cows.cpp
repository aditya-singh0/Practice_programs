#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define ll long long
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define vi vector<int>
#define vvi vector<vi>
#define mii map<int, int>
#define pqb priority_queue<int>
#define pqs priority_queue<int, vi, greater<int>>
#define inf 1e18
#define deb(x) cout << #x << "=" << x << '\n';
#define ps(x, y) fixed << setprecision(y) << x
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
const char ln = '\n';
const char sp = ' ';
const int mod = 1000000007;
int modpow(int x, int y, int p);
bool isodd(int a);
int soe(int size, int arr[], int a);
bool isprime(int a);
int modinv(int a, int m);
int lcm(int a, int b);
int gcd(int a, int b);
bool po2(int x);
struct comp;

void solve()
{
    int n, c;
    cin >> n >> c;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    //sort(a,a+n);
    int lb = 1;
    int ub = 1e9;
    int ans = 0;
    while (lb <= ub)
    {
        int mid = (lb + ub) / 2;
        int cow = 1;
        int prev = a[0];
        for (int i = 1; i < n; i++)
        {
            if (a[i] - prev >= mid)
            {
                cow++;
                prev = a[i];

                if (cow == c)
                    break;
            }
        }
        if (cow == c)
        {
            ans = mid;
            lb = mid + 1;
        }
        else
            ub = mid - 1;
    }
    cout << ans << endl;
}

int32_t main()
{
    FIO;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

bool po2(int x)
{
    return x && (!(x & (x - 1)));
}

int modpow(int x, int y, int p)
{
    int res = 1;
    x = x % p;
    if (x == 0)
        return 0;
    while (y > 0)
    {
        if (y & 1)
            res = (res * x) % p;
        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}

int modinv(int a, int m)
{
    int g = gcd(a, m);
    if (g != 1)
        return -1;
    else
    {
        return modpow(a, m - 2, m);
    }
}

bool isodd(int a)
{
    if (a % 2 != 0)
        return 1;
    else
        return 0;
}
int soe(int size, int arr[], int a)
{
    arr[0] = 0;
    for (int i = 1; i < size; i++)
        arr[i] = 1;
    for (int i = 1; i <= sqrt(size); i++)
        for (int j = 2; j <= size / (i + 1); j++)
        {
            arr[(i + 1) * (j)-1] = 0;
        }
    return arr[a - 1];
}
bool isprime(int a)
{
    if (a <= 1)
        return 0;
    for (int i = 2; i <= sqrt(a); i++)
    {
        if (a % i == 0)
            return 0;
    }
    return 1;
}
struct comp
{
    bool operator()(pii const &p1, pii const &p2)
    {
        if (p1.first > p2.first)
            return true;
        else if (p1.first < p2.first)
            return false;
        else
            return p1.second > p2.second;
    }
};