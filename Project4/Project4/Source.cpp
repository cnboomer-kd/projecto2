#include <iostream>
using namespace std;

int NOD(int n1, int n2)
{
    int div;
    if (n1 == n2)  return n1;
    int d = n1 - n2;
    if (d < 0) {
        d = -d;  div = NOD(n1, d);
    }
    else
        div = NOD(n2, d);
    return div;
}
int NOK(int n1, int n2)
{
    return n1 * n2 / NOD(n1, n2);
}
int main()
{
    setlocale(LC_ALL, "Russian");
    int n1, n2;
    cout << "×èñëî 1 = ";
    cin >> n1;
    cout << "×èñëî 2 = ";
    cin >> n2;
    cout << "ÍÎÄ = " << NOD(n1, n2) << endl;
    cout << "ÍÎÊ = " << NOK(n1, n2);
    return 0;
}