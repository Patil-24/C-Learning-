#include <iostream>
using namespace std;

int main()
{

    const int value = 10;

    // this below give error const can not modified once decleard you can only use that
    // value = 29;

    cout << value;
    return 0;
}