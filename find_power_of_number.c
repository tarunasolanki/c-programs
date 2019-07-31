#include <iostream>

using namespace std;

int main()
{
    int n , p ;
    int count = 1 ;
    int count1 = n ;

    cout << "Program to find power of any number" << endl;
    cout << "====================================" << endl ;
    cout << " Enter number: " <<  endl ;
    cin >> n ;
    cout << "Enter power:"<< endl ;
    cin >> p ;
    count1 = n ;
    while (count<p)
    {
        count1 = n * count1 ;
        count++ ;
    }
    cout << n << "^" << p << " = " << count1 ;
    return 0;
}
