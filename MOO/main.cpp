#include "assets/car.h"

#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int main(){
    cochesitoBruummmmmmmmmmm coche1 = cochesitoBruummmmmmmmmmm("Honda", "Civic", "Gasolina", 4, 1000, 2020, 300);
    cochesitoBruummmmmmmmmmm coche2 = cochesitoBruummmmmmmmmmm("Tesla", "Roadster", "Electrico", 20, 2000, 2021, 400);

    coche1.print();
    coche2.print();
}