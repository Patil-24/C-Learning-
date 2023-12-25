// 1. Global Scope in C
// The global scope refers to the region outside any block or function.

// The variables declared in the global scope are called global variables.
// Global variables are visible in every part of the program.
// Global is also called File Scope as the scope of an identifier starts at the beginning of the file and ends at the end of the file.

// 2. Local Scope in C
// The local scope refers to the region inside a block or a function. It is the space enclosed between the { } braces.

// The variables declared within the local scope are called local variables.
// Local variables are visible in the block they are declared in and other blocks nested inside that block.
// Local scope is also called Block scope.
// Local variables have internal linkage.

#include <iostream>
using namespace std;

// declaration of global variable top of the program
int val3 = 100;

void func1()
{
    int val2 = 20;
}

int main()
{

    int val1 = 10;
    cout << val1 << endl;

    // gives error because this is scope related
    // cout << val2 << endl;

    // use of global scope
    cout << val3 << endl;
}