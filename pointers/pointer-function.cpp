#include <iostream>
#include <ctime> 
using namespace std;

/**
 * C++ 传递指针给函数
 * C++ 允许您传递指针给函数，只需要简单地声明函数参数为指针类型即可。
*/

void getSeconds(unsigned long *par);

int main ()
{
    unsigned long sec;

    getSeconds( &sec );

    //输出实际值
    cout << "Number of seconds :" << sec << endl;

    return 0;
}
 
void getSeconds(unsigned long *par)
{
    // 获取当前的秒数
    *par = time( NULL );
    return;
}