#include <iostream>

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
 * extern 存储类

   extern 存储类用于提供一个全局变量的引用，全局变量对所有的程序文件都是可见的。
   当您使用 'extern' 时，对于无法初始化的变量，会把变量名指向一个之前定义过的存储位置。
   当您有多个文件且定义了一个可以在其他文件中使用的全局变量或函数时，
   可以在其他文件中使用 extern 来得到已定义的变量或函数的引用。
   可以这么理解，extern 是用来在另一个文件中声明一个全局变量或函数。

*/
 
int count ;

extern void write_extern();  //来自文件support.cpp的定义
 
int main()
{
   count = 5;
   write_extern();
}