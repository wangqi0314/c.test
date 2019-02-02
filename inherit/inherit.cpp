/**
 * C++ 继承

   面向对象程序设计中最重要的一个概念是继承。
   继承允许我们依据另一个类来定义一个类，这使得创建和维护一个应用程序变得更容易。这样做，也达到了重用代码功能和提高执行时间的效果。

   当创建一个类时，您不需要重新编写新的数据成员和成员函数，只需指定新建的类继承了一个已有的类的成员即可。这个已有的类称为基类，新建的类称为派生类。

   继承代表了 is a 关系。例如，哺乳动物是动物，狗是哺乳动物，因此，狗是动物，等等。

   基类 & 派生类
   一个类可以派生自多个类，这意味着，它可以从多个基类继承数据和函数。
   定义一个派生类，我们使用一个类派生列表来指定基类。类派生列表以一个或多个基类命名，形式如下：
      class derived-class: access-specifier base-class
      其中，访问修饰符 access-specifier 是 public、protected 或 private 其中的一个，
           base-class 是之前定义过的某个类的名称。如果未使用访问修饰符 access-specifier，则默认为 private。

    假设有一个基类 Shape，Rectangle 是它的派生类，如下所示：
*/
#include <iostream> 
using namespace std;

// 基类
class Shape 
{
    public:
        void setWidth(int w)
        {
            width = w;
        }
      
        void setHeight(int h)
        {
            height = h;
        }

    protected:
        int width;
        int height;
};

// 派生类
class Rectangle: public Shape    //class derived-class: access-specifier base-class
{
    public:
        int getArea()
        { 
            return (width * height); 
        }
};

int main(void)
{
    Rectangle Rect;

    Rect.setWidth(5);
    Rect.setHeight(7);

    // 输出对象的面积
    cout << "Total area: " << Rect.getArea() << endl;

   return 0;
}

/**
 * 一个派生类继承了所有的基类方法，但下列情况除外：
   1.基类的构造函数、析构函数和拷贝构造函数。
   2.基类的重载运算符。
   3.基类的友元函数。
   
*/