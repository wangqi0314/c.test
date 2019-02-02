#include <iostream>
using namespace std;

int main()
{
   int i = 1000, m = 1001;
   int *ptr = NULL;
   ptr = &i;
   cout << ptr << "：" << i << ":" << *ptr << endl;

   ptr++;   
   cout << ptr << "：" << i << ":" << *ptr << endl;
   
}
