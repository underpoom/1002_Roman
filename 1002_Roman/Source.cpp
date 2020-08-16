//https://programming.in.th/task/rev2_problem.php?pid=1002
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string a[] = { "", "i", "ii", "iii", "iv", "v", "vi", "vii", "viii", "ix" };
    string b[] = { "", "x", "xx", "xxx", "xl", "l", "lx", "lxx", "lxxx", "xc" };
    string c[] = {
        "",
        "c",
        "cc",
        "ccc",
    };
    int i;
    int x;
    cin >> x;
    string vv;
    int data[5] = {};
    for (i = 1; i <= x; i++)
    {
        string v;
        v = a[i % 10] + b[(i / 10) % 10] + c[(i / 100) % 10];
        vv += v;
    }
    for (i = 0; i < vv.size(); i++)
    {
        switch (vv[i])
        {
        case 'i':
        {
            data[0]++;
            break;
        }
        case 'v':
        {
            data[1]++;
            break;
        }
        case 'x':
        {
            data[2]++;
            break;
        }
        case 'l':
        {
            data[3]++;
            break;
        }
        case 'c':
        {
            data[4]++;
            break;
        }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        cout << data[i] << " ";
    }
}