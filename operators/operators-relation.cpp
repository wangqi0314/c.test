#include <iostream>
using namespace std;

/** 关系运算符 */
 
int main()
{
   int a = 21;
   int b = 10;
   int c ;

   if( a == b ){

      cout << "Line 1 - a equal b" << endl ;
   }   else{

      cout << "Line 1 - a not equal b" << endl ;
   }

   if ( a < b ) {

      cout << "Line 2 - a less than  b" << endl ;
   }   else{

      cout << "Line 2 - a not less than  b" << endl ;
   }

   if ( a > b ){

      cout << "Line 3 - a greater than b" << endl ;
   }else{

      cout << "Line 3 - a not greater than b" << endl ;
   }
   
   /* 改变 a 和 b 的值 */
   a = 5;
   b = 20;

   if ( a <= b ){
      
      cout << "Line 4 - a less or equal b" << endl ;
   }

   if ( b >= a ){
      
      cout << "Line 5 - b greeter or equal b" << endl ;
   }
     
   return 0;
}