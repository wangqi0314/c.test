#include <iostream>
using namespace std;

/**
 * C++ 重载运算符和重载函数

    C++ 允许在同一作用域中的某个函数和运算符指定多个定义，分别称为函数重载和运算符重载。

    重载声明是指一个与之前已经在该作用域内声明过的函数或方法具有相同名称的声明，但是它们的参数列表和定义（实现）不相同。
    
    当您调用一个重载函数或重载运算符时，编译器通过把您所使用的参数类型与定义中的参数类型进行比较，决定选用最合适的定义。选择最合适的重载函数或重载运算符的过程，称为重载决策。

    C++ 中的函数重载
    在同一个作用域内，可以声明几个功能类似的同名函数，但是这些同名函数的形式参数（指参数的个数、类型或者顺序）必须不同。您不能仅通过返回类型的不同来重载函数。

    下面的实例中，同名函数 print() 被用于输出不同的数据类型：

*/
 
class printData
{
    public:
        void print(int i) {
            cout << " 整数为: " << i << endl;
        }

        void print(double  f) {
            cout << " 浮点数为: " << f << endl;
        }

        void print(char c[]) {
            cout << " 字符串为: " << c << endl;
        }
};

int main(void)
{
    printData pd;

    /**  输出整数*/
    pd.print(5);
    /**  输出浮点数*/
    pd.print(500.263);
    /**  输出字符串*/
    char c[] = "Hello C++";
    pd.print(c);

    return 0;

}