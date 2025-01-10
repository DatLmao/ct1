#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;

    float tb = (x + y) / 2.0;

    if (tb >= 8.0 && x >= 7 && y >= 7)
    {
        cout << 1;
    }
    else if (tb >= 6.5 && tb < 8.0 && x >= 6 && y >= 6)
    {
        cout << 2;
    }
    else if (tb >= 5.0)
    {
        cout << 3;
    }
    else if (tb >= 8.0 && (x < 7 || y < 7))
    {
        cout << 2;
    }
    else if (tb >= 6.5 && tb < 8.0 && (x < 6 || y < 6))
    {
        cout << 3;
    }
    else
    {
        cout << 4 * 235000<<endl;
    }
    cout<<tb;

    return 0;
}
