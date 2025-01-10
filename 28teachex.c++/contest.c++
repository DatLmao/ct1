#include<bits/stdc++.h>
using namespace std;
using ll=long long;
bool thuannt1(ll n){
   if(n<2) return false;
   for(int i=2;i<=sqrt(n);i++){
    if(n%i==0) return false;
    
   }
   return true;
}

bool thuannt2(ll n){
    int sum=0;
    while(n){
        int du=n%10;
        sum+=du;
        if(du!=2 && du!=3&& du!=5 && du!=7) return false;
        n/=10;
    }
    if(thuannt1(sum)) return true;
    else return false;
}



  
int main(){
    ll a, b; cin>>a>>b;
    int dem=0;
    for(int i =a; i<=b;i++){
        if(thuannt2(i) && thuannt1(i) )
        ++dem;
    }
    cout<<dem;
 }    


