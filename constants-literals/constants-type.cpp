#include <iostream>

using namespace std;

int main()
{
    //整数常量
    cout << " 整数常量--" << endl;
    cout << 212 << endl;  // 合法的
    cout << 215u << endl;  // 合法的
    cout << 0xFeeL << endl;  // 合法的
    //cout << 078 << endl;  // 非法的：8 不是八进制的数字
    //cout << 032UU << endl;  // 非法的：不能重复后缀
    cout << 85 << endl;         // 十进制
    cout << 0213 << endl;       // 八进制
    cout << 0x4b << endl;       // 十六进制
    cout << 30 << endl;         // 整数
    cout << 30u << endl;        // 无符号整数
    cout << 30l << endl;        // 长整数
    cout << 30ul << endl;       // 无符号长整数

    //浮点常量
    cout << " 浮点常量--" << endl;
    cout << 3.14159 << endl;       // 合法的
    cout << 314159E-5L << endl;    // 合法的
    //cout << 510E << endl;          // 非法的：不完整的指数
    //cout << 210f << endl;          // 非法的：没有小数或指数
    //cout << .e55 << endl;          // 非法的：缺少整数或分数

    //布尔常量
    cout << " 布尔常量--" << endl;
    cout << true << endl;
    cout << false << endl;

    //字符常量
    cout << " 字符常量" << endl;
    cout << "Hello\tWorld\n\n";
    cout << "\072" << endl;
    cout << "\x72" << endl;
    //cout << "\u02c1" << endl; //没有输出

    //字符串常量
    cout << " 字符串常量" << endl;
    cout << "hello, dear" << endl; // 合法的
    cout << "hello, \
    dear" << endl; // 合法的
    cout << "hello, " "d" "ear" << endl; // 合法的

    return 0;
}