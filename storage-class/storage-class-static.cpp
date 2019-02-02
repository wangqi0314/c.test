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
   static 存储类

   static 存储类指示编译器在程序的生命周期内保持局部变量的存在，而不需要在每次它进入和离开作用域时进行创建和销毁。
   因此，使用 static 修饰局部变量可以在函数调用之间保持局部变量的值。
   static 修饰符也可以应用于全局变量。当 static 修饰全局变量时，会使变量的作用域限制在声明它的文件内。
   在 C++ 中，当 static 用在类数据成员上时，会导致仅有一个该成员的副本被类的所有对象共享

*/

// 函数声明 
void func(void);

static int count = 10; //全局变量 

int main()
{
   while(--count)
   {
      func();
   }
   
   return 0;
}

// 函数定义
void func( void )
{
    static int i = 5; // 局部静态变量
    i++;
    cout << "variable  i is " << i ;
    cout << " , variable count is " << count << endl;
}