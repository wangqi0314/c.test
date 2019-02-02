#include <iostream>
using namespace std;

/**
 * C++ 指向数组的指针
 * 
 * 数组名是一个指向数组中第一个元素的常量指针
 * 
 * 声明 ： double balance[50]; double *p;
 *        p = balance； //这里的地址符号 '&' 可以省略，因为，数组变量名默认就是第一个元素的地址
 *        *(p + i) ;  *(balance + i); //这两种表示方式，是相同的结果， 原理就是在指针的上一个位置加一；
 *  
 */
 
int main ()
{
   // 带有 5 个元素的整型数组
   double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};
   double *p;

   p = balance;
 
   // 输出数组中每个元素的值
   cout << " 使用指针的数组值 " << endl; 
   for ( int i = 0; i < 5; i++ )
   {
       cout << "*(p + " << i << ") : ";
       cout << *(p + i) << endl;
       cout << " (p + " << i << ") : ";
       cout << (p + i) << endl;
   }

   cout << " 使用 balance 作为地址的数组值 " << endl;
   for ( int i = 0; i < 5; i++ )
   {
       cout << "*(balance + " << i << ") : ";
       cout << *(balance + i) << endl;
       cout << " (balance + " << i << ") : ";
       cout << (balance + i) << endl;
   }
 
   return 0;
}

// #include <stdio.h>

// int main ()
// {
//    /* 带有 5 个元素的整型数组 */
//    double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};
//    double *p;
//    int i;

//    p = balance;
 
//    /* 输出数组中每个元素的值 */
//    printf( "使用指针的数组值\n");
//    for ( i = 0; i < 5; i++ )
//    {
//        printf("*(p + %d) : %f\n",  i, *(p + i) );
//    }

//    printf( "使用 balance 作为地址的数组值\n");
//    for ( i = 0; i < 5; i++ )
//    {
//        printf("*(balance + %d) : %f\n",  i, *(balance + i) );
//    }
 
//    return 0;
// }