#include <iostream>

using namespace std;

/**
 * 文件中的 extern 关键字用于声明已经在文件 storage-class-extern.cpp 中定义的 count。
*/
extern int count; //来自write.cpp文件
 
void write_extern(void)
{
   cout << "Count is " << count << endl;
}

// 执行的命令 g++ .\storage-class-extern.cpp .\support.cpp -o .\storage-class-extern.exe