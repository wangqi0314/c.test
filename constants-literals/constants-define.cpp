#include <iostream>

using namespace std;

/**
 * #define 预处理器
 */

#define LENGTH 10
#define WIDTH  5
#define NEWLINE '\n'

int main()
{

    int area;  

    area = LENGTH * WIDTH;
    cout << area;
    cout << NEWLINE;

    return 0;
}
