#include <iostream>
using namespace std;

/**赋值运算符*/

main()
{
    int a = 21;
    int c ;

    c =  a;
    cout << "Line 1 - =  example,c value = : " <<c<< endl ;
    c +=  a;
    cout << "Line 2 - += example,c value = : " <<c<< endl ;
    c -=  a;
    cout << "Line 3 - -= example,c value = : " <<c<< endl ;
    c *=  a;
    cout << "Line 4 - *= example,c value = : " <<c<< endl ;
    c /=  a;
    cout << "Line 5 - /= example,c value = : " <<c<< endl ;
    c  = 200;
    c %=  a;
    cout << "Line 6 - %= example,c value = : " <<c<< endl ;
    c <<=  2;
    cout << "Line 7 - <<= example,c value = : " <<c<< endl ;
    c >>=  2;
    cout << "Line 8 - >>= example,c value = : " <<c<< endl ;
    c &=  2;
    cout << "Line 9 - &= example,c value = : " <<c<< endl ;
    c ^=  2;
    cout << "Line 10 - ^= example,c value = : " <<c<< endl ;
    c |=  2;
    cout << "Line 11 - |= example,c value = : " <<c<< endl ;
    return 0; 
}