#include <iostream> 
using namespace std;

/**
 * 指针是一个变量，其值为另一个变量的地址，即内存位置的直接地址。
 * 指针变量声明的一般形式为： type *var-name;
 * 在这里，type 是指针的基类型，它必须是一个有效的 C++ 数据类型，var-name 是指针变量的名称。用来声明指针的星号 * 与乘法中使用的星号是相同的。
 * 但是，在这个语句中，星号是用来指定一个变量是指针。以下是有效的指针声明：
   int    *ip;    // 一个整型的指针
   double *dp;    // 一个 double 型的指针
   float  *fp;    // 一个浮点型的指针
   char   *ch     // 一个字符型的指针
   所有指针的值的实际数据类型，不管是整型、浮点型、字符型，还是其他的数据类型，都是一样的，都是一个代表内存地址的长的十六进制数。
   不同数据类型的指针之间唯一的不同是，指针所指向的变量或常量的数据类型不同。
   
*/
 
int main ()
{
   int  var = 20;   /**  实际变量的声明*/
   int  *ip;        /**  指针变量的声明*/
 
   ip = &var;       /**  在指针变量中存储 var 的地址*/
 
   cout << "Value of var variable: ";
   cout << var << endl;
 
   /**  输出在指针变量中存储的地址*/
   cout << "Address stored in ip variable: ";
   cout << ip << endl;
 
   /**  访问指针中地址的值*/
   cout << "Value of *ip variable: ";
   cout << *ip << endl;

   int m1 = 10;
   int m2 = 30;
   int m3[2];
   m3[0] = m1;
   m3[1] = m2;

   int *m0 ;
   m0 = m3;

   for(int i = 0; i < 2; i++){

       cout << "*(m0 + " << i << ") : ";
       cout << *(m0 + i) << endl;
       cout << " (m0 + " << i << ") : ";
       cout << (m0 + i) << endl;
   }
 
   return 0;
}
