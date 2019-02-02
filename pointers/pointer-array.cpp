#include <iostream> 
using namespace std;

/**
 * C++ 指针数组
*/

const int MAX = 3;
 
int main ()
{
    int  var[MAX] = {10, 100, 200};
    int *ptr[MAX];

    for (int i = 0; i < MAX; i++)
    {
        ptr[i] = &var[i]; // 赋值为整数的地址
    }
    for (int i = 0; i < MAX; i++)
    {
        cout << "Value of var[" << i << "] = ";
        cout << *ptr[i] << endl;
    }



    const int _MAX = 4;
    const char *names[_MAX] = {
                   "Zara Ali",
                   "Hina Ali",
                   "Nuha Ali",
                   "Sara Ali",
    };

    for (int i = 0; i < _MAX; i++)
    {
        cout << "Value of names[" << i << "] = ";
        cout << names[i] << endl;
        cout << *names[i + 1] << endl;
    }

    // string *var2[MAX] = {"12", "15", "18"};
    // for(int i = 0; i < MAX; i++){
    //     cout << var2[i] << endl;
    // }
    return 0;
}