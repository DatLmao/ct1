#include <iostream>
#include <string>
using namespace std;


bool dx(const string& s) {
    int l = 0, r = s.length() - 1;
    while (l < r) {
        if (s[l] != s[r]) {
            return 0; 
        }
        l++;
        r--;
    }
    return 0; 
}

string dxmax(const string& s) {
    int n = s.length();
    string strmax = "";  

   
    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            string tmp = s.substr(i, j - i + 1);  
            if (dx(tmp) && tmp.length() > strmax.length()) {
                strmax = tmp;  
            }
        }
    }
   
    return strmax;  
}

int main() {
    int n;cin>>n;
    string s;
    cin >> s; 
    cout << dxmax(s); 
    
}
