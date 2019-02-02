#include <iostream>

using namespace std;

/** 
 * C++ 存储类

   存储类定义 C++ 程序中变量/函数的范围（可见性）和生命周期。这些说明符放置在它们所修饰的类型之前。下面列出 C++ 程序中可用的存储类：
   auto
   register
   static
   extern
   mutable 说明符仅适用于类的对象

   从 C++ 11 开始，auto 关键字不再是 C++ 存储类说明符，且 register 关键字被弃用。
*/
 
/**
 * register 存储类

   register 存储类用于定义存储在寄存器中而不是 RAM 中的局部变量。这意味着变量的最大尺寸等于寄存器的大小（通常是一个词），且不能对它应用一元的 '&' 运算符（因为它没有内存位置）。
   {
      register int  miles;
   }
   寄存器只用于需要快速访问的变量，比如计数器。还应注意的是，定义 'register' 并不意味着变量将被存储在寄存器中，它意味着变量可能存储在寄存器中，这取决于硬件和实现的限制。

*/
int main()
{
   register int  miles;

   cout << miles << endl; // 打印出了7位随机值

   return 0;
}