#include <iostream>

using namespace std;

int main()
{
    int i = 10;
    cout << "i: " << i << endl;

    int *i_ptr = &i;
    cout << "*i_ptr: " << *i_ptr << endl;
    
    int *i_heap_ptr = new int;
    i_heap_ptr = i_ptr;
    cout << "*i_heap_ptr: " << *i_heap_ptr << endl;

    delete *i_heap_ptr;
    cout << "*i_ptr: " << *i_ptr << endl;

return 0;
}
