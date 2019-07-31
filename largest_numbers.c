#include <iostream>

using namespace std;

int main()
{   int a,b,c;
    cout << "PROGRAM TO PRINT LARGEST NUMBER << endl ;
    cout << "Enter the value of a" << endl;
    cin >> a;
    cout << "Enter the value of b" << endl;
    cin >> b;
    cout << "Enter the value of c" << endl;
    cin >> c;

    if(a>=b && a>=c)
    {
      cout << a << " is the largest number" << endl;
    }

    if(b>c && b>a)
    {
     cout <<b << " is the largest number" << endl;
    }
    if(c>a && c>b)
    {
        cout << c << " is the largest number" << endl;
    }

    return 0;
}
