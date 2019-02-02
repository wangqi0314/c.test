#include <iostream>
using namespace std;

/**逻辑运算符*/

main()
{
    int a = 5;
    int b = 20;
    int c ;

    if ( a && b )
    {
      cout << "Line 1 - if true "<< endl ;
    }
    if ( a || b )
    {
        cout << "Line 2 - if true "<< endl ;
    }  
    
    /* 改变 a 和 b 的值 */
    a = 0;
    b = 10;
    if ( a && b )
    {
        cout << "Line 3 - if false "<< endl ;
    }else{
        cout << "Line 4 - if not true "<< endl ;
    }

    if ( !(a && b) ){
        cout << "Line 5 - if true "<< endl ;
    }
    
    return 0;
}