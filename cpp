#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef double dl;

#define PB push_back
#define F first
#define S second
#define MP make_pair
#define endl '\n'
#define all(a) (a).begin(),(a).end()
#define sz(x) (int)x.size()
#define mid(l,r) ((r+l)/2)
#define left(node) (node*2)
#define right(node) (node*2+1)
#define mx_int_prime 999999937
#define mod 1000000007

const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;

#define mem(a,b) memset(a, b, sizeof(a))
#define gcd(a,b) __gcd(a,b) // GCD
ll lcm(ll a, ll b) { return (a / gcd(a, b) * b); } // LCM
#define sqr(a) ((a) * (a))

#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);

typedef vector<int>::iterator vit;
typedef set<int>::iterator sit;

int dx[] = { 0, 0, +1, -1 };
int dy[] = { +1, -1, 0, 0 };
//int dx[] = {+1, 0, -1, 0, +1, +1, -1, -1};
//int dy[] = {0, +1, 0, -1, +1, -1, +1, -1};


// Squared Distance between two point
struct Point { ll x, y; };
ll dist2(const Point& a, const Point& b) {
    ll dx = a.x - b.x;
    ll dy = a.y - b.y;
    return dx * dx + dy * dy;
}
// String Palindrome
bool isPalindrome(const string& s) {
    ll i = 0, j = s.size() - 1;
    while (i < j) {
        if (s[i++] != s[j--]) return false;
    }
    return true;
}
// Prime Number
bool isPrime(ll n) {
    if (n <= 1) { return false; }
    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0) { return false; }
    }
    return true;
}
// Prime Generator
vector<ll> prime_gen(ll n) {
    vector<ll> primes;
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (ll i = 2; i <= n; i++) {
        if (is_prime[i]) {
            primes.push_back(i);
            for (ll j = i * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }
    return primes;
}
// SemiPrime
ll semiPrime(ll a) {
    ll ct = 0;
    for (ll i = 2; ct < 2 && i * i <= a; i++) {
        while (a % i == 0) {
            a /= i;ct++;
        }
    }
    if (a > 1) ct++;
    return ct == 2;
}
// CoPrime
bool isCoprime(ll a, ll b) {
    return gcd(a, b) == 1;
}
//pair comparator
bool cmp(const pll& p1, const pll& p2) {
    if (p1.first < p2.first) {
        return 1;
    }
    else if (p1.first == p2.first) {
        return(p1.second < p2.second);
    }
    return 0;
}
// Factorial
ll fact(ll n) {
    if (n == 0) { return 1; }
    ll res = ((n % mod) * (fact(n - 1) % mod)) % mod; // (n * fact(n - 1)) % mod;
    return res;
}
// Prefix Sum
//preSum[i] = preSum[i - 1] + arr[i];


template < typename F, typename S >
ostream& operator << (ostream& os, const pair< F, S >& p) {
    return os << "(" << p.first << ", " << p.second << ")";
}

template < typename T >
ostream& operator << (ostream& os, const vector< T >& v) {
    os << "{";
    for (auto it = v.begin(); it != v.end(); ++it) {
        if (it != v.begin()) os << ", ";
        os << *it;
    }
    return os << "}";
}

template < typename T >
ostream& operator << (ostream& os, const set< T >& v) {
    os << "[";
    for (auto it = v.begin(); it != v.end(); ++it) {
        if (it != v.begin()) os << ", ";
        os << *it;
    }
    return os << "]";
}

template < typename F, typename S >
ostream& operator << (ostream& os, const map< F, S >& v) {
    os << "[";
    for (auto it = v.begin(); it != v.end(); ++it) {
        if (it != v.begin()) os << ", ";
        os << it->first << " = " << it->second;
    }
    return os << "]";
}

#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)

void faltu() {
    cerr << endl;
}

template <typename T>
void faltu(T a[], int n) {
    for (int i = 0; i < n; ++i) cerr << a[i] << ' ';
    cerr << endl;
}

template <typename T, typename ... hello>
void faltu(T arg, const hello &... rest) {
    cerr << arg << ' ';
    faltu(rest...);
}

void solve() {

    return;
}
int main() {
    fast_io;
    ll t;cin >> t;
    while (t--) { solve(); }
    return 0;
}
