#include <iostream>

using namespace std;

int main()
{

    int i , j , n ;
    char name[50] ;
    int len ;

    cout << "ENTER NAME  :" << endl;
    cin >> name ;

    cout << "ENTER NUMBER  :" << endl ;
    cin >> n ;


    // Print upper part of the heart shape
    for(i=n/2 ; i<= n ; i+=2)
    {
        for (j=1 ; j < n-i ; j += 2)
        {
            cout << " " ;
        }
        for(j = 1 ; j <= i ; j++)
        {
            cout << "*";
        }
        for(j = 1 ; j <= n-i ; j++)
        {
            cout << " " ;
        }
        for(j = 1 ; j <= i ; j++)
        {
            cout << "*" ;
        }
        cout << endl ;
    }
    // prints lower triangular part of the pattern
    for ( i = n ; i >= 1 ; i--)
    {
        for (j = i ; j < n ; j++)
        {
            cout << " " ;
        }
        // Print the name
        if ( i == n )
        {
            for ( j = 1 ; j <= ( n * 2-len)/2 ; j++)
            {
                cout << "*" ;
            }
            cout << name ;
            for ( j = 1 ; j <(n*2-len)/2 ; j++)
            {
                cout << "*" ;
            }
        }
            else
            {
                  for ( j = 1 ; j <= (i*2)-1 ; j++)
                  {
                      cout << "*" ;
                  }
            }
            cout << endl ;
    }
    return 0;
 }
