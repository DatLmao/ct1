#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int dem = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << dem << " ";
            ++dem;
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        int cot = i;
        for (int j = 1; j <= n; j++)
        {

            cout << cot << " ";
            cot++;
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        int cot = i;
        for (int j = 1; j <= n; j++)
        {
            if (j <= n - i)
            {
                cout << "~";
            }
            else
                cout << cot;
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 1; i <= n; i++){
        int cot = i;
        for (int j = 1; j <= n; j++)
        {
           if(j>i){
            cout<<" ";
           }
           else {
            cout<<cot<<" ";cot=cot+n-j;
           }
    }
    cout<<endl;
    }
    cout << endl;
    for (int i = 1; i <= n; i++){
        int dem=i+96;
        for (int j = 1; j <= n; j++) {
            cout<<(char)dem<<" ";
            ++dem;
            
        }
        cout<<endl;
    }
        
}