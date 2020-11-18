// implementations files
#include "arithmetics.h" // redifines everything!!!

int sum(int a, int b){
    return a+b;
}
int subtract(int a, int b){
    return a-b;
}
int multiply(int a, int b){
    return a*b;
}
int devide(int a, int b){
    return a/b;
}

void duplicateExistingValues(int * num){
    *num = *num * 2;
}