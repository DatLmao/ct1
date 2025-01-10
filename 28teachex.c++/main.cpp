#include <bits/stdc++.h>
using namespace std;

bool kt1c(int p, int q, int r){
  p=(bool)p;
  q=(bool)q;
  r=(bool)r;
  return (!p||q)&&r;
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int p,q,r;
    while(cin>>p>>q>>r){
      cout<<p<<' '<<q<<' '<<r<<' '<<kt1c(p,q,r)<<endl;
    }

}