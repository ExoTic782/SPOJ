#include <bits/stdc++.h>
using namespace std;
#define fi           first
#define se           second
#define ll           long long
#define pb           push_back
#define mp           make_pair
#define pll          pair<ll,ll>
#define pii          pair<int,int>
#define SZ(x)        ((int)(x).size())
#define READ(x)      freopen(x,"r",stdin)
#define WRITE(x)     freopen(x,"w",stdout)
#define all(x)       (x).begin(),(x).end()
#define isWorking()  cout<<"Wroking"<<endl
#define FOR(i,x,y)   for(int i=x; i<y; i++)
#define SORT(x)      sort(x.begin(),x.end())
#define PRINT(ok)    cout<<(ok? "YES":"NO")<<endl
#define Fast_Input   ios_base :: sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
typedef vector<int> VI;
const ll mod= 1e9+7,INF=1e18,mx= 1e6+5,mn=100;
int testCase=1,cas=0;

struct exo{
    int L,R,U,D;
};
char grid[2005][2005];
exo cnt[2005][2005];
int n;


int main() {

    scanf("%d",&testCase);
    while(testCase--) {
        scanf("%d",&n);

        for(int i=0; i<n; i++)
            scanf("%s",grid[i]);

        int ans=0;

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]=='#'){

                }
            }
        }


    }
    return 0;
}

