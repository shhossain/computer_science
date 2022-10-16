#include<bits/stdc++.h>

using namespace std;

#define int long long
#define pb push_back
#define ppb pop_back
#define mp make_pair
using pi = pair<int,int>;
using vi = vector<int>;
using vvi = vector<vector<int> >;
#define ff first
#define ss second
#define all(x) x.begin(),x.end()
#define sz(x) (int)(x).size()

template<typename T, typename Y> istream& operator>>(istream& is,  pair<T,Y> &p){ is >> p.first >> p.second; return is;}
template<typename T, typename Y> ostream& operator<<(ostream& os,  pair<T,Y>  p){ os << p.first << ' ' << p.second  << ' '; return os;}
template<typename T> istream& operator>>(istream& is,  vector<T> &v){for (auto& i : v) is >> i; return is;}
template<typename T> ostream& operator<<(ostream& os,  vector<T>  v){for (auto& i : v) os << i << ' '; return os;}

//const int inf = 9e18;
const int NUM=1000030;
const int N = 10000000;
vector<int> lp, sieve;
vector<int> pr;
void primefactor();
int binpow(int a, int b);
int binpow(int a, int b, int mod);
int gcd(int a, int b);
int lcm (int a, int b);
bool comp(int a, int b);
int inversemod(int a, int mod);
void calc_sieve();
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

struct dsu {
  public:
    dsu() : _n(0) {}
    dsu(int n) : _n(n), parent_or_size(n, -1), connected_components(n) {
        for(int i=0;i<n;i++) componenets.insert(i);
    }

    int merge(int a, int b) {
        assert(0 <= a && a < _n);
        assert(0 <= b && b < _n);
        int x = leader(a), y = leader(b);
        if (x == y) return x;
        if (-parent_or_size[x] < -parent_or_size[y]) std::swap(x, y);
        parent_or_size[x] += parent_or_size[y];
        parent_or_size[y] = x;
        componenets.erase(y);
        connected_components--;
        return x;
    }

    bool same(int a, int b) {
        assert(0 <= a && a < _n);
        assert(0 <= b && b < _n);
        return leader(a) == leader(b);
    }

    int leader(int a) {
        assert(0 <= a && a < _n);
        if (parent_or_size[a] < 0) return a;
        return parent_or_size[a] = leader(parent_or_size[a]);
    }

    int size(int a) {
        assert(0 <= a && a < _n);
        return -parent_or_size[leader(a)];
    }

    set<int>& get_components()
    {
        return componenets;
    }

    std::vector<std::vector<int>> groups() {
        std::vector<int> leader_buf(_n), group_size(_n);
        for (int i = 0; i < _n; i++) {
            leader_buf[i] = leader(i);
            group_size[leader_buf[i]]++;
        }
        std::vector<std::vector<int>> result(_n);
        for (int i = 0; i < _n; i++) {
            result[i].reserve(group_size[i]);
        }
        for (int i = 0; i < _n; i++) {
            result[leader_buf[i]].push_back(i);
        }
        result.erase(
            std::remove_if(result.begin(), result.end(),
                           [&](const std::vector<int>& v) { return v.empty(); }),
            result.end());
        return result;
    }

  private:
    int _n;
    set<int> componenets;
    // root node: -1 * component size
    // otherwise: parent
    std::vector<int> parent_or_size;
    int connected_components;
};

void test()
{
    int n, m;
    cin>>n>>m;
    vector<vector<int> > edges(n);
    for(int i=0;i<m;i++) {
        int a, b;
        cin>>a>>b;
        a--;
        b--;
        if(a>b) swap(a, b);
        edges[b].push_back(a);
        // edges[a].push_back(b);
    }
    set<int> parents;
    parents.insert(0);
    dsu temp(n);
    for(int i=1;i<n;i++) {
        // vector<int> parent;

        map<int, int> count1;
        for(int j=0;j<edges[i].size();j++) {
            count1[temp.leader(edges[i][j])]++;
        }

        set<int> &pre=temp.get_components();
        vector<int> to_merge;
        for(auto it:pre)
        {
            if(it>=i) break;
            if(temp.size(it)>count1[it]) to_merge.push_back(it);
        }

        for(int j=0;j<to_merge.size();j++) temp.merge(to_merge[j], i);
    }

    vector<vector<int> > gr=temp.groups();
    cout<<gr.size()<<endl;
    vector<int> finans;
    for(int i=0;i<gr.size();i++) 
    {
        finans.push_back(temp.size(gr[i][0]));
    }
    sort(finans.begin(), finans.end());
    cout<<finans<<endl;
    // cout<<endl;
}

signed main()
{
//    freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t=1;
    // cin>>t;
    while(t--) test();
    return 0;
}

//    1. Take care of the corner cases, write one or two tests that seem to be the cases.
//    2. Check the bounds on the intput and decide the algorithm.
//    3. Make the test cases for the bounds, try to include 0, 1, 2 cases in the new test cases, and if possible, scale the cases.
//    4. Check for overflow and the array bounds carefully, always take care of the decreasing loop.

void calc_sieve() //credits: Anish_Sofat
{
    sieve.resize(NUM+1,0);
    for (int x = 2; x <= NUM; x++)
        {
            if (sieve[x]) continue;
            for (int u = x; u <= NUM; u += x)
            {
                    sieve[u] = x ;
            }
        }
}

void primefactor()
{
    lp.resize(N+1,0);
    for (int i=2; i<=N; ++i) {
        if (lp[i] == 0) {
            lp[i] = i;
            pr.push_back (i);
        }
        for (int j=0; j<(int)pr.size() && pr[j]<=lp[i] && i*pr[j]<=N; ++j)
            lp[i * pr[j]] = pr[j];
    }
}

int binpow(int a, int b)
{
    int res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}

int binpow(int a, int b, int mod)
{
    int res = 1;
    while (b > 0) {
        if (b & 1)
            res = (res * a)%mod;
        a = (a * a)%mod;
        b >>= 1;
    }
    return res%mod;
}

int gcd(int a, int b)
{
    if(b==0) return a;
    else return gcd(b,a%b);
}

int lcm (int a, int b)
{
    return ((a / gcd(a, b)) * b);
}

bool comp(int a, int b)
{
    return a>b;
}

int inversemod(int a, int mod)
{
    return binpow(a,mod-2, mod);
}
