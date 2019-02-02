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
 * auto 存储类
 * 
 * auto 存储类是所有局部变量默认的存储类。
 * 
 * 自 C++ 11 以来，auto 关键字用于两种情况：声明变量时根据初始化表达式自动推断该变量的类型、声明函数时函数返回值的占位符。
   C++98标准中auto关键字用于自动变量的声明，但由于使用极少且多余，在C++11中已删除这一用法。
   
*/
int main()
{
   auto f=3.14;      //double
   auto s("hello");  //const char*
   auto z = new auto(9); // int*
   //auto x1 = 5, x2 = 5.0, x3='r'; //错误，必须是初始化为同一类型
   
   cout << f << endl;
   cout << s << endl;
   cout << z << endl;

   int mount = 11;
   // auto int mount = 11; //auto 存储类 定义变量时，不需要特别知道 变量类型，具体原因，见上部注释讲解
   cout << mount << endl;  

   return 0;
}