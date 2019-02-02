/**
 * C++ 日期 & 时间
 * 
 * C++ 标准库没有提供所谓的日期类型。
 * C++ 继承了 C 语言用于日期和时间操作的结构和函数。
 * 为了使用日期和时间相关的函数和结构，需要在 C++ 程序中引用 <ctime> 头文件。
 * 
 * 有四个与时间相关的类型：clock_t、time_t、size_t 和 tm。
 * 类型 clock_t、size_t 和 time_t 能够把系统时间和日期表示为某种整数。
 * 结构类型 tm 把日期和时间以 C 结构的形式保存，tm 结构的定义如下： 
 * 
 *  struct tm {
        int tm_sec;   // 秒，正常范围从 0 到 59，但允许至 61
        int tm_min;   // 分，范围从 0 到 59
        int tm_hour;  // 小时，范围从 0 到 23
        int tm_mday;  // 一月中的第几天，范围从 1 到 31
        int tm_mon;   // 月，范围从 0 到 11
        int tm_year;  // 自 1900 年起的年数
        int tm_wday;  // 一周中的第几天，范围从 0 到 6，从星期日算起
        int tm_yday;  // 一年中的第几天，范围从 0 到 365，从 1 月 1 日算起
        int tm_isdst; // 夏令时
    }
 */

#include <iostream>
#include <ctime>

using namespace std;

int main( )
{
    // 基于当前系统的当前日期/时间
    time_t now = time(NULL);

    // 把 now 转换为字符串形式

    cout << " time_t：" << now << endl;
    cout << " ctime：" << ctime(&now) << endl;

    char *dt;
    dt = ctime(&now);
    cout << " ctime：" << dt << endl;


    
    tm *ddt;
    ddt = localtime(&now);
    cout << " tm：" << ddt->tm_mday << endl;
    char l[] ={'w','a','n','g','q','i','\0'};
    char *i;
    i = l;
    // *l = &l;
    // cout << " 本地日期和时间：" << i << endl;


    // 把 now 转换为 tm 结构
    // tm *gmtm = gmtime(&now);
    // dt = asctime(gmtm);
    // cout << " UTC 日期和时间："<< dt << endl;
}