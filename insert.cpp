#include <iostream>
using namespace std;

int main()
{
    int n, a[100], s = 0, v, p, i;

    cout << "Enter array Length =";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i + 1 << "'st" << " Array Element =";
        cin >> a[i];
    }

    cout << "Enter Your Data =";
    cin >> v;
    cout << "enter Position =";
    cin >> p;

    cout << "Given Array:" << endl;

    for (i = 0; i < n; i++)
    {
        cout << a[i] << "    ";
    }
    p = p - 1;
    for (i = n; i > p; i--)
    {
        a[i] = a[i - 1];
    }
    a[i] = v;

    cout << endl
         << "New Array" << endl;
    for (i = 0; i <= n; i++)
    {
        cout << a[i] << "    ";
    }
    cout << endl;
    return 0;
}