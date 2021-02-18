/*
                       _oo0oo_
                      o8888888o
                      88" . "88
                      (| -_- |)
                      0\  =  /0
                    ___/`---'\___
                  .' \\|     |// '.
                 / \\|||  :  |||// \
                / _||||| -:- |||||- \
               |   | \\\  -  /// |   |
               | \_|  ''\---/''  |_/ |
               \  .-\__  '-'  ___/-. /
             ___'. .'  /--.--\  `. .'___
          ."" '<  `.___\_<|>_/___.' >' "".
         | | :  `- \`.;`\ _ /`;.`/ - ` : | |
         \  \ `_.   \_ __\ /__ _/   .-` /  /
     =====`-.____`.___ \_____/___.-`___.-'=====
                       `=---='
 
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ 
 SHAMELESLLY COPIED TEMPLATE FROM MULTIPLE SOURCES - baba_yaga
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/  
// Acceptance and tolerance for all religions, including absence of beleif, pagans, spiritualism.
// Democratic scientechnocracy.
// Free and quality education for all.

#pragma GCC optimize ("O3")
#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
 
#define ll                    long long int
#define loop(i,a,b)           for(int i=(int)a;i<(int)b;++i)
#define rloop(i,a,b)          for(int i=(int)a;i<=(int)b;++i)
#define loopl(i,a,b)          for(ll i=(ll)a;i<(ll)b;++i)
#define loopr(i,a,b)          for(int i=(int)a;i>=(int)b;--i)
#define count_1(n)            __builtin_popcountll(n)
#define pb                    push_back
#define eb                    emplace_back
#define ab(a)                 (a<0)?(-1*a):a
#define pc                    putchar_unlocked
#define gc                    getchar_unlocked
#define mset(a,b,c)           loop(i,0,b) a[i]=c
#define SET(x) memset(x, 0, sizeof(x))
#define CLR(x) memset(x, -1, sizeof(x))
#define X                     first
#define Y                     second
#define mp                    make_pair
#define clr(x)                x.clear()
#define MOD                   1000000007
#define MAX                   1e9
#define MIN                   -1e9
#define itoc(c)               ((char)(((int)'0')+c))
#define vi                    vector<int>
#define vvi                   vector<vi>
#define pll                   pair<ll,ll>
#define pii                   pair<int,int>
#define all(p)                p.begin(),p.end()
#define max(x,y)              (x>y)?x:y
#define min(x,y)              (x<y)?x:y
#define mid(s,e)              (s+(e-s)/2)
#define mini                  INT_MIN
#define BUG(x) cout << '>' << #x << ':' << x << endl;
#define MOD 1000000007
#define sortX(n,x) 	    sort(n,n+x);
#define sortF(s)  	    sort(s.begin(), s.end());
#define sortR(s)  	    sort(s.rbegin(), s.rend());
#define sortG(n)	    sort(n.begin(), n.end(), greater<int>());
#define bsearch(n,k,i)    binary_search(n.begin()+i,n.end(),k);
const int MX=10010896;
const int lmt=3164;
const int N=10000001;
int flag[MX>>6];
#define ifc(i)                (flag[i>>6]&(1<<((i>>1)&31)))
#define isc(i)                (flag[i>>6]|=(1<<((i>>1)&31)))
#define chk(n)                (n==2||(n>2&&(n&1)&&!ifc(n)))
#define sv()                  int t; scanf("%d",&t); while(t--)
using namespace std;
ll extgcd(ll a,ll b,ll& x,ll& y){if(b==0){x=1;y=0;return a;}else{int g=extgcd(b,a%b,y,x);y-=a/b*x;return g;}}
ll modpow(ll a,ll b) {ll res=1;a%=MOD;for(;b;b>>=1){if(b&1)res=res*a%MOD;a=a*a%MOD;}return res;}
void sieve(){ int i,j,k; for(i=3;i<lmt;i+=2) if(!ifc(i)) for(j=i*i,k=i<<1;j<MX;j+=k) isc(j);}
     /* Fast Input-Output */
inline void rdi(int &n) { n=0; char c=gc(); while(c<'0' or c>'9') c=gc(); while(c>='0' and c<='9') { n=(n<<3)+(n<<1)+c-'0'; c=gc(); }}
inline void rdl(ll &n) { n=0; char c=gc(); while(c<'0' or c>'9') c=gc(); while(c>='0' and c<='9') { n=(n<<3)+(n<<1)+c-'0'; c=gc(); }}
inline void print(int a) { char s[20]; int i=0; do { s[i++]=a%10+'0'; a/=10; } while(a); i--; while(i>=0) pc(s[i--]); pc('\n'); }
inline void prlong(ll a) { char s[20]; int i=0; do { s[i++]=a%10+'0'; a/=10; } while(a); i--; while(i>=0) pc(s[i--]); pc('\n'); }
 
const static auto ioSpeedUp = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return NULL;
}();
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,int> mp;
        vector<vector<string>> ans;
        for(int i = 0 ; i < strs.size() ; i++){
            string x(strs[i]);
            sort(x.begin(),x.end());
            if(!mp.count(x)){
                mp[x] = ans.size();
                ans.push_back({});
            }
            ans[mp[x]].push_back(strs[i]);
        }
        return ans;
    }
};