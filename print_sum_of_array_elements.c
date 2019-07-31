#include <iostream>

using namespace std;

int main()
{   int i , a[5] , sum ;
    cout << "Program to print sum of all elements of array" << endl;
    cout << "Enter 5 elements:" << endl ;
    for(i = 0 ; i < 5 ; i++)
    {
        cin >> a[i] ;
    }
  cout << "Elements are :" << endl ;
    for(i = 0 ; i < 5 ; i++)
    {
      cout << a[i] << endl ;
    }

    for (i = 0 ; i < 5 ; i++)
    {
        sum = a[0] + a[1] + a[2] + a[3] + a[4];
    }
    cout << " Sum of elements of array is :"<< endl ;
    cout << sum << endl ;
    return 0;
}
