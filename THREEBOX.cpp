#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d, t;
    cin >> t;
    while (t>0)
    {
        int count = 1;
        cin >> a >> b >> c >> d;
        if (a + b + c <= d)
        {
            cout << count<<endl;
        }
        else if (a + b + c >= d)
        {
            if (a + b <= d || a + c <= d || b + c <= d)
            {
                count++;
                cout << count<<endl;
            }
            else if (a + b > d && b + c > d && c + a > d)
            {
                ++count;
                count++;
                cout << count<<endl;
            }
        }
        t--;
    }
}