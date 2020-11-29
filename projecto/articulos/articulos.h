#include<iostream>
#include<string>
#include<vector>
#include<fstream>

#pragma once

using namespace std;

class articulo{
    private:
    string nameOfObj;
    string description;

    float price;
    
    public:
    articulo(string name, string descriptionOfObj, float setPrice);

    float getPrice();
    string getName();
    string getDescription();
};

class listaDeArticulos{
    private:
    vector<articulo> articleList;
    vector<int> amountList;
    void readJSON();

    public:
    listaDeArticulos();
    listaDeArticulos(bool readArticles);
    void print();
    void print(int id);
    void print(int start, int end);
    articulo returnArticle(int id);
    articulo returnArticle(string name);
    void addArticle(string name, int amount, listaDeArticulos * pointerToAdd);
};
