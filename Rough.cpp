#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;
// * Decimal to any Number System
void decToX(int n, int base)
{
    int q = n, ans = 0, j=0;
    char res[50];

    if (base == 16)
    {
        for (int i = 0; q != 0; i++)
        {
            int rem = q % base;
            if (rem >= 10)
            {
                res[i] = (rem + 55); // 65(A) - 10 = 55
            }
            else
            {
                res[i] = (rem + 48); // 48 = ASCII for '0'
            }
            // cout << res[i]<<endl;

            // ❌ res[i] = ...; → invalid without allocating space to the string during initialization which we cannot know that kitna bada hoga woh number
            // ✅ res.push_back(...); → dynamically appends characters

            q /= base;
            j++;
        }
        // reverse(res.begin(), res.end());
        for(int i=j-1;i>=0;i--)
        cout<<res[i];
    }
    else
    {
        for (int i = 0; q != 0; i++)
        {
            ans += ((q % base) * pow(10, i));
            q /= base;
        }
        cout << ans;
    }
}
int main()
{
    // string n;
    // cout << "Enter a string: ";
    // cin >> n;
    // cout << n;
    // cout << n[0];

    // string a = "25";
    // // cout<<a[0]*10+ 0
    // //
    // cout << (a[0] - 48) * pow(16, a.length() - (0 + 1)) * pow(10, a.length() - (0 + 1)) << endl;
    // cout << (a[0] - 48) << endl;
    // cout << a.length() - (0 + 1) << endl;
    // cout << pow(16, a.length() - (0 + 1)) << endl;
    // cout << pow(10, a.length() - (0 + 1)) << endl;

    // int k = 10;
    // string a;
    // a = 10 + 55;
    // a = k + 55;
    // cout << a;

    decToX(845, 16);

    return 0;
}