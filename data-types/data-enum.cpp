#include <iostream>

using namespace std;

/**
 * 创建枚举，需要使用关键字 enum。
 * */
int main()
{
    //enum enum-name { list of names } var-list;
    enum color { red = 20, green = 10, blue = 11 } c,b;

    c = blue;
    cout << c << endl;
    cout << color::red << endl;
    cout << color::green << endl;

    b = color::red;
    cout << b << endl;

    cout << color::green << endl;

    return 0;
}