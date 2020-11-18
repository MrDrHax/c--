#include "arithmetics.h"
#include <iostream>

using namespace std;

int main(){
    cout << sum(10,35) << endl; // note that sum makes new variables, that will be local

    // to make a change in an existing variables:

    int number = 10;

    duplicateExistingValues(&number); // pass the reference

    cout << number << endl;
}

