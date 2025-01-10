#include <bits/stdc++.h>
using namespace std;
bool check1(long long n) // kiem tra so nguyen to
{
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

bool check2(long long n) // kiem tra so chinh phuong
{
    long long c = sqrt(n);
    if (c * c == n)
        return true;
    return false;
}

long long check3(long long n) // kiem tra so hoan hao
{
    long long sum = 0;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            sum += i;
            if (n / i != i)
                sum += n / i;
        }
    }
    return sum - n;
}

int UCLL(int a, int b) // Uoc chung lon nhat
{
    while (b != 0)
    {
        int du = a % b;
        a = b; 
        b = du; 
    }
    return a;
}

int BCNN(int a, int b) // Boi chung nho nhat
{
    return a / UCLL(a, b)*b; //tránh tràn số 
    
}


int main()
{
    int m, n;
    cin >> m >> n;
    
}