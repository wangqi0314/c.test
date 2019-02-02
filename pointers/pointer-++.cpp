#include <iostream> 
using namespace std;

/**
 * 递增一个指针

   在程序中使用指针代替数组，因为变量指针可以递增，而数组不能递增，因为数组是一个常量指针。下面的程序递增变量指针，以便顺序访问数组中的每一个元素：
*/

const int MAX = 3;
 
int main ()
{
    int  var[MAX] = {10, 100, 200};
    int  *ptr;

    /**  指针中的数组地址*/
    // ptr = &var[0]; 此句和下面的结果一致
    ptr = var;

    for (int i = 0; i < MAX; i++)
    {

        cout << "Address of var[" << i << "] = ";
        cout << ptr << endl;
         
        cout << "Value of var[" << i << "] = ";
        cout << *ptr << endl;
        // cout << *(ptr + i) << endl;
        
        //移动到下一个位置
        ptr++; // ptr++ 和 *（ptr + i) 是等价的，都是指针位置在移动一位
        
    }
    return 0;
}