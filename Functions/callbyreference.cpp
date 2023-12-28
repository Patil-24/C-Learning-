// C++ program to illustrate
// call by reference
// #include <iostream>
// using namespace std;

// void swapnum(int *i, int *j)
// {
//     int temp = *i;
//     *i = *j;
//     *j = temp;
// }

// int main(void)
// {
//     int a = 10, b = 20;

//     // passing parameters
//     swapnum(&a, &b);

//     cout << "a is " << a << " and b is " << b;
//     return 0;
// }

// this code is contributed by shivanisinghss2110

#include <iostream>
using namespace std;

int swap(int &a, int &b)
{
    // cout << a << endl;
    // cout << b << endl;

    int temp = a;
    a = b;
    b = temp;
}

int main()
{

    int a = 10, b = 20;

    swap(a, b);
    cout << a << endl;
    cout << b << endl;
    return 0;
}