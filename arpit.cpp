        #include<bits/stdc++.h>
       using namespace std;
       using ll = long long;
       #define gc getchar_unlocked
       #define minf INT_MIN
       #define ff first
       #define ss second
       #define mpp make_pair
       #define nl "\n"
       #define pb push_back
       #define sz(x) ((int)(x).size())
       #define len(x) ((int)(x).length())
       #define all(x) x.begin(), x.end()
       #define sortall(x) sort(all(x))
       #define PI 3.1415926535897932384626
       #define msb(x) (31 - __builtin_clz(x))      
       #define msbll(x) (63 - __builtin_clzll(x))  
       #define NoSetbitsll(x) __builtin_popcountll(x)
       #define setminus(x) memset(x, -1, sizeof(x))
       #define setzero(x) memset(x, 0, sizeof(x))
       #define f(i, n) for (ll i = 0; i < n; i++)
       #define fe(i,n) for (ll i = 1; i <=n; i++)
       #define fos(i, s, n, k) for (i = s; i < n; i = i + k)
       #define fom(i, s, n, k) for (i = s; i < n; i = i * k)
       #define uniq(x) (x).erase(unique(all(x)), (x).end())
       #define getunique(v) {sort(all(v)); v.erase(unique(all(v)), v.end());} // for Vector v
       #define printPrecision(p, Value) cout << fixed << setprecision(p) << Value
       #define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
       typedef long long ll;
       using uint = unsigned;
       using ull = uint64_t;
       //typedef unsigned long long ull;
       typedef long double lld;
       typedef pair<int, int> pi;
       typedef pair<ll, ll> pl;
       typedef vector<int> vi;
       typedef vector<ll> vl;
       typedef vector<pi> vpi;
       typedef vector<pl> vpl;
       typedef vector<vi> vvi;
       typedef vector<vl> vvl;
       typedef vector<vpi> vvpi;
       typedef vector<vpl> vvpl;
       typedef vector<bool> vb;
       void _print(ll t) { cerr << t; }
       void _print(int t) { cerr << t; }
       void _print(string t) { cerr << t; }
       void _print(char t) { cerr << t; }
       void _print(lld t) { cerr << t; }
       void _print(double t) { cerr << t; }
       void _print(ull t) { cerr << t; }

       const int MOD2 = 1000000007;
       const int MOD1 = 1e9 + 7;
       const int mod = 998244353;

       int pow(int a , int b, int m)
       {
           ll ans = 1;
           while(b)
           {
    
                 if(b & 1)
                   ans = (ans * a) % m;
               b/=2;
    
               a = (a*a)% m;
    
           }
    
           return ans;
    
       }
    
       int add(int a , int b)
       {
    
           int res = a+ b;
    
           if(res >= mod)
    
               return res - mod;
           return res;
    
       }
    
       int mult(int a , int b)
       {
    
            ll res = a;
            res *= b;
            if(res >= mod)
    
               return res % mod;
           return res;
    
    
       }


       void comder()
       {

       }

       signed main()
       {
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        int T;
        while(T--) comder();
        return 0;

       }
