#include <iostream>

using namespace std;

/** 
 * C++ 传值调用

   C++ 函数
   向函数传递参数的传值调用方法，把参数的实际值复制给函数的形式参数。
   在这种情况下，修改函数内的形式参数不会影响实际参数。
   默认情况下，C++ 使用传值调用方法来传递参数。
   一般来说，这意味着函数内的代码不会改变用于调用函数的实际参数。
   
*/
 
// 函数声明
void swap(int x, int y);

int main ()
{

   // 局部变量声明
   int a = 100;
   int b = 200;
 
   cout << " 交换前，a 的值：" << a << endl;
   cout << " 交换前，b 的值：" << b << endl;
 
   // 调用函数来交换值
   swap(a, b);
 
   cout << " 交换后，a 的值：" << a << endl;
   cout << " 交换后，b 的值：" << b << endl;
 
   return 0;
}
 
// 函数定义
void swap(int x, int y)
{
   int temp;

   temp = x; /* 保存 x 的值 */
   x = y;    /* 把 y 赋值给 x */
   y = temp; /* 把 x 赋值给 y */
  
   return;
}

/**
 * 上面的实例表明了，虽然在函数内改变了 a 和 b 的值，但是实际上 a 和 b 的值没有发生变化。
*/