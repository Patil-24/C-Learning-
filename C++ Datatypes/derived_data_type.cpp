// FOur types of derived data types

// 1 function
// 2 array
// 3 pointer
// 4 reference

// function as derived data type
// #include <iostream>
// using namespace std;

// int min_max(int x, int y)
// {

//     if (x > y)
//     {
//         return x;
//     }
//     else
//     {
//         return y;
//     }
// }

// int main()
// {

//     int a = 10, b = 20;

//     int val = min_max(a, b);
//     cout << val << endl;
//     return 0;
// }

// Array as derived data type
// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[6] = {2, 3, 4, 5, 6, 7};

//     for (int i = 0; i < 6; i++)
//     {
//         cout << arr[i] << endl;
//     }
//     return 0;
// }

// Pointer as a derived datat type
// #include <iostream>
// using namespace std;

// int main()
// {
//     int val = 10;
//     int *ptr = &val;

//     cout << ptr << endl;
//     cout << *ptr << endl;
// }

// Refernce as a derived data type
#include <iostream>
using namespace std;

int main()
{
    int x = 10;

    // Reference Derived Type
    // ref is a reference to x.
    int &ref = x;

    // Value of x is now changed to 20
    ref = 20;
    cout << "x = " << x << endl;

    // Value of x is now changed to 30
    x = 30;
    cout << "ref = " << ref << endl;

    return 0;
}