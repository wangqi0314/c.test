#include <iostream>

using namespace std;
/**
 * 函数声明
*/
int func();

int main()
{
    //函数调用
    int i = func();
}

//函数定义
int func()
{
    cout << " 调用函数 func" << endl;
    return 0;
}