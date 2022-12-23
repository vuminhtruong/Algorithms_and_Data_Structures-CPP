#include <iostream>
#include <queue>
#include <map>

using namespace std;

template <class T,class U>
void maximize(T &x,U y){
    if(x < y)x = y;
}
template <class T,class U>
void minimize(T &x,U y){
    if(x > y)x = y;
}
template <class T>
T Abs(T x){
    return (x < (T)0 ? -x : x);
}

#define len(c) (int)((c).size())
#define llong long long
#define MASK(i) ((1LL) << (i))
#define BIT(x,i) (((x) >> (i)) & 1)
#define all(c) (c).begin(),(c).end()
#define fn "test"    ///FILE_NAME_HERE

/*----------END_OF_TEMPLATE----------*/

namespace task{

    void solve(){
        int m;
        cin>>m;
        map <int,int> ma;
        queue <int> que;
        while(m--){
            char c;
            int cur;
            cin>>c;
            if(c == '+'){
                cin>>cur;
                que.emplace(cur);
                ++ma[cur];
            } else if(c == '-'){
                cur = que.front();
                que.pop();
                --ma[cur];
                if(ma[cur] == 0){
                    ma.erase(ma.find(cur));
                }
            } else {
                cout<<ma.begin() -> first<<'\n';
            }
        }
    }
}

int main(void){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    task::solve();
}
