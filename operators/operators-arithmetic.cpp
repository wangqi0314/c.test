#include <iostream>
using namespace std;

/** 算术运算符 */
 
int main()
{
   int a = 21;
   int b = 10;
   int c ;
 
   c = a + b;
   cout << "Line 1 - c value " << c << endl ;
   c = a - b;
   cout << "Line 2 - c value " << c << endl ;
   c = a * b;
   cout << "Line 3 - c value " << c << endl ;
   c = a / b;
   cout << "Line 4 - c value " << c << endl ;
   c = a % b;
   cout << "Line 5 - c value " << c << endl ;
   c = a++;
   cout << "Line 6 - c value " << c << endl ;
   c = a--;
   cout << "Line 7 - c value " << c << endl ;
 
   return 0;
}