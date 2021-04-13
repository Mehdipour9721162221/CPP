#include <iostream>
using namespace std;
void fasele(int n)
{
    for (int i = 1; i <= n; i++)
        cout << " ";
    return;
}
int main()
{
    int n;
    cout << "Enter n\n";
    cin >> n;
    int a = n, b = n - 1, c = n - 1;
    for (int i = 1; i <= 2 * n - 1; i += 2)
    {
        fasele(a);
        for (int j = 1; j <= i; j++)
            cout << "*";
        fasele(2 * n - i);
        //fasele(n);
        for (int k = 1; k <= i; k++)
            cout << "*";
        cout << endl;
        a--;
    }
    int d = 2, e = 1, f = 1;
    for (int i = 2 * n - 3; i >= 1; i -= 2)
    {
        fasele(d);
        for (int j = 1; j <= i; j++)
            cout << "*";
        fasele(2 * n - i);
        for (int j = 1; j <= i; j++)
            cout << "*";
        cout << endl;
        d++;
    }
    return 0;
}


