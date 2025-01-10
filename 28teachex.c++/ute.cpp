#include<bits/stdc++.h>
using namespace std;
bool dx(const string &s) {
    int n = s.length();
   
    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n - i - 1]) {
            return false; 
        }
    }
    return true;
}

int main(){
    int n;cin>>n;
    string s;cin>>s;
    string tmp;
    for(int i=s.size()-1;i>=0;i--){
        if(dx(s.substr(0,i))){
            tmp=s.substr(0,i);
            cout<<tmp;
        }
    }
    
}
