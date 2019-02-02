#include <iostream>

using namespace std;

/**
 * C++ 修饰符类型
 */
int main()
{
    short int i;           // 有符号短整数
    short unsigned int j;  // 无符号短整数

    j = 50000;

    i = j;
    cout << " 有符号短整数 50000 " << i << endl;
    cout << " 无符号短整数 50000 " << j << endl;

    return 0;
}