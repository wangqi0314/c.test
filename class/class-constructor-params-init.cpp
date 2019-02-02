#include <iostream> 
using namespace std;

/**
 * 使用初始化列表来初始化字段

   使用初始化列表来初始化字段：
   Line::Line( double len): length(len)
{
    cout << "Object is being created, length = " << len << endl;
}
上面的语法等同于如下语法：
Line::Line( double len)
{
    cout << "Object is being created, length = " << len << endl;
    length = len;
}
假设有一个类 C，具有多个字段 X、Y、Z 等需要进行初始化，同理地，您可以使用上面的语法，只需要在不同的字段使用逗号进行分隔，如下所示：
C::C( double a, double b, double c): X(a), Y(b), Z(c)
{
  ....
}
*/

class Line
{
    public:
        void setLength( double len );
        double getLength( void );
        Line(double len);  // 这是构造函数

    private:
        double length;
};

Line::Line( double len): length(len)
{
    cout << "Object is being created, length = " << len << endl;
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
    Line line(10.0);

    // 获取默认设置的长度
    cout << "Length of line : " << line.getLength() <<endl;
    // 再次设置长度
    line.setLength(6.0); 
    cout << "Length of line : " << line.getLength() <<endl;

    return 0;
}