#include <iostream>
using namespace std;

/**
 * 参数的默认值

   定义一个函数，可以为参数列表中后边的每一个参数指定默认值。
   当调用函数时，如果实际参数的值留空，则使用这个默认值。
   
   这是通过在函数定义中使用赋值运算符来为参数赋值的。
   调用函数时，如果未传递参数的值，则会使用默认值，如果指定了值，则会忽略默认值，使用传递的值。
*/
 
int sum(int a, int b=20)
{
  int result;

  result = a + b;
  
  return (result);
}

int main ()
{
    // 局部变量声明
    int a = 100;
    int b = 200;
    int result;
 
    // 调用函数来添加值
    result = sum(a, b);
    cout << "Total value is :" << result << endl;     // 再次调用函数
    result = sum(a); 
    cout << "Total value is :" << result << endl;
    return 0;
}