#include <iostream> 
using namespace std;
/**
 * 类的构造函数

   类的构造函数是类的一种特殊的成员函数，它会在每次创建类的新对象时执行。
   构造函数的名称与类的名称是完全相同的，并且不会返回任何类型，也不会返回 void。构造函数可用于为某些成员变量设置初始值。
   下面的实例有助于更好地理解构造函数的概念：
*/

class Line
{
    public:
        void setLength( double len );
        double getLength( void );
        Line();  // 这是构造函数

    private:
        double length;
};

// 成员函数定义，包括构造函数
Line::Line(void)
{
    cout << "Object is being created" << endl;
}

void Line::setLength( double len )
{
    cout << "setLength" << endl;
    length = len;
}
 
double Line::getLength( void )
{
    cout << "getLength" << endl;
    return length;
}

// 程序的主函数
int main( )
{
    Line line;

    // 设置长度
    line.setLength(6.0); 
    cout << "Length of line : " << line.getLength() <<endl;
 
    return 0;
}