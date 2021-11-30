#include <iostream>
#include "std_lib_facilities.h"

/*
Can we declare a non-reference function argument const (e.g., void f(const int);)?
 What might that mean? Why might we want to do that? Why don’t people do that often?
 Try it; write a couple of small programs to see what works.


 A function argument would be declared const if it is not being modified in the function. Const int would mean
 that the variable. If the argument being passed is modified, it will result in an error
 People don't do it often because they may want to modify what is being passed in.


*/


//This function does not result in an error
//because x is not modified
//it is being added to another constant and that
//value is being returned
int add(const int x)
{
    return x+5;
}

/*
 * This function results in an error
 * because x is being modified
int subOne(const int x)
{
    x--;

    return x;
}*/

int main() {

    cout << add(5);
    return 0;
}


