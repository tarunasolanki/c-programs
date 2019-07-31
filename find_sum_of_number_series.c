#include <iostream>

using namespace std;

int main()
{
    int n , sum ;
    cout << "To find sum of first n numbers 5 7 9 11 13 ...." << endl;
    cout <<" Enter value n : " << endl ;
    cin >> n ;
    sum = 5 * n + n * n - n;
    cout << "Sum of first "<<n << " numbers is :" << sum << endl ;
    return 0;
}
