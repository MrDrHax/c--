#include"articulos.h"

#include<iostream>
#include<string>
#include<vector>
#include<fstream>

using namespace std;

/*


         _______                   _____                    _____                    _____                _____                   _______         
        /::\    \                 /\    \                  /\    \                  /\    \              /\    \                 /::\    \        
       /::::\    \               /::\    \                /::\    \                /::\    \            /::\    \               /::::\    \       
      /::::::\    \             /::::\    \               \:::\    \              /::::\    \           \:::\    \             /::::::\    \      
     /::::::::\    \           /::::::\    \               \:::\    \            /::::::\    \           \:::\    \           /::::::::\    \     
    /:::/~~\:::\    \         /:::/\:::\    \               \:::\    \          /:::/\:::\    \           \:::\    \         /:::/~~\:::\    \    
   /:::/    \:::\    \       /:::/__\:::\    \               \:::\    \        /:::/__\:::\    \           \:::\    \       /:::/    \:::\    \   
  /:::/    / \:::\    \     /::::\   \:::\    \              /::::\    \      /::::\   \:::\    \          /::::\    \     /:::/    / \:::\    \  
 /:::/____/   \:::\____\   /::::::\   \:::\    \    _____   /::::::\    \    /::::::\   \:::\    \        /::::::\    \   /:::/____/   \:::\____\ 
|:::|    |     |:::|    | /:::/\:::\   \:::\ ___\  /\    \ /:::/\:::\    \  /:::/\:::\   \:::\    \      /:::/\:::\    \ |:::|    |     |:::|    |
|:::|____|     |:::|    |/:::/__\:::\   \:::|    |/::\    /:::/  \:::\____\/:::/__\:::\   \:::\____\    /:::/  \:::\____\|:::|____|     |:::|    |
 \:::\    \   /:::/    / \:::\   \:::\  /:::|____|\:::\  /:::/    \::/    /\:::\   \:::\   \::/    /   /:::/    \::/    / \:::\    \   /:::/    / 
  \:::\    \ /:::/    /   \:::\   \:::\/:::/    /  \:::\/:::/    / \/____/  \:::\   \:::\   \/____/   /:::/    / \/____/   \:::\    \ /:::/    /  
   \:::\    /:::/    /     \:::\   \::::::/    /    \::::::/    /            \:::\   \:::\    \      /:::/    /             \:::\    /:::/    /   
    \:::\__/:::/    /       \:::\   \::::/    /      \::::/    /              \:::\   \:::\____\    /:::/    /               \:::\__/:::/    /    
     \::::::::/    /         \:::\  /:::/    /        \::/    /                \:::\   \::/    /    \::/    /                 \::::::::/    /     
      \::::::/    /           \:::\/:::/    /          \/____/                  \:::\   \/____/      \/____/                   \::::::/    /      
       \::::/    /             \::::::/    /                                     \:::\    \                                     \::::/    /       
        \::/____/               \::::/    /                                       \:::\____\                                     \::/____/        
         ~~                      \::/____/                                         \::/    /                                      ~~              
                                  ~~                                                \/____/                                                       
                                                                                                                                                  

*/

articulo::articulo(string name, string descriptionOfObj, float setPrice){
    articulo::nameOfObj = name;
    articulo::description = descriptionOfObj;
    articulo::price = setPrice;
}

float articulo::getPrice(){
    return articulo::price;
}
string articulo::getName(){
    return articulo::nameOfObj;
}
string articulo::getDescription(){
    return articulo::description;
}


/*


          _____            _____                    _____                _____                    _____          
         /\    \          /\    \                  /\    \              /\    \                  /\    \         
        /::\____\        /::\    \                /::\    \            /::\    \                /::\    \        
       /:::/    /        \:::\    \              /::::\    \           \:::\    \              /::::\    \       
      /:::/    /          \:::\    \            /::::::\    \           \:::\    \            /::::::\    \      
     /:::/    /            \:::\    \          /:::/\:::\    \           \:::\    \          /:::/\:::\    \     
    /:::/    /              \:::\    \        /:::/__\:::\    \           \:::\    \        /:::/__\:::\    \    
   /:::/    /               /::::\    \       \:::\   \:::\    \          /::::\    \      /::::\   \:::\    \   
  /:::/    /       ____    /::::::\    \    ___\:::\   \:::\    \        /::::::\    \    /::::::\   \:::\    \  
 /:::/    /       /\   \  /:::/\:::\    \  /\   \:::\   \:::\    \      /:::/\:::\    \  /:::/\:::\   \:::\    \ 
/:::/____/       /::\   \/:::/  \:::\____\/::\   \:::\   \:::\____\    /:::/  \:::\____\/:::/  \:::\   \:::\____\
\:::\    \       \:::\  /:::/    \::/    /\:::\   \:::\   \::/    /   /:::/    \::/    /\::/    \:::\  /:::/    /
 \:::\    \       \:::\/:::/    / \/____/  \:::\   \:::\   \/____/   /:::/    / \/____/  \/____/ \:::\/:::/    / 
  \:::\    \       \::::::/    /            \:::\   \:::\    \      /:::/    /                    \::::::/    /  
   \:::\    \       \::::/____/              \:::\   \:::\____\    /:::/    /                      \::::/    /   
    \:::\    \       \:::\    \               \:::\  /:::/    /    \::/    /                       /:::/    /    
     \:::\    \       \:::\    \               \:::\/:::/    /      \/____/                       /:::/    /     
      \:::\    \       \:::\    \               \::::::/    /                                    /:::/    /      
       \:::\____\       \:::\____\               \::::/    /                                    /:::/    /       
        \::/    /        \::/    /                \::/    /                                     \::/    /        
         \/____/          \/____/                  \/____/                                       \/____/         
                                                                                                                 


*/

void listaDeArticulos::readJSON(){
    std::ifstream file("articulos/articulosLista.txt");
    std::string str; 
    int counter = 0;

    string title;
    string description;
    float price;
    while (std::getline(file, str))
    {
        counter ++;
        switch (counter)
        {
        case 1:
            title = str;
            break;

        case 2:
            description = str;
            break;

        case 3:
            price = stof(str);
            listaDeArticulos::articleList.push_back(articulo(title, description, price));
            counter = 0;
            break;

        default:
            break;
        }
    }
}

listaDeArticulos::listaDeArticulos(){
    listaDeArticulos::readJSON();
}

listaDeArticulos::listaDeArticulos(bool readArticles){
    if (readArticles){
        listaDeArticulos::readJSON();
    }else{
        //codigo para hacer una lista vacia osea nada creo?
    }
}

void listaDeArticulos::print(){
    for (int i = 0; i < listaDeArticulos::articleList.size(); i++)
    {
        cout << "\u001b[36m" << listaDeArticulos::articleList[i].getName() << "\u001b[37m" << endl;
        cout << "   $ " << listaDeArticulos::articleList[i].getPrice() << endl << endl;
        cout << "   " << listaDeArticulos::articleList[i].getDescription() << endl;
    }
    
}

void listaDeArticulos::print(bool withAmmounts){
    if (withAmmounts){
        for (int i = 0; i < listaDeArticulos::articleList.size(); i++)
        {
            cout << "\u001b[36m" << listaDeArticulos::articleList[i].getName() << "\u001b[37m" << endl;
            cout << "   $ " << listaDeArticulos::articleList[i].getPrice() << endl << endl;
            cout << "   " << listaDeArticulos::articleList[i].getDescription() << endl;
            cout << "   Cantidad: " << listaDeArticulos::amountList[i] << "Kg" << endl << endl << endl;
        }
    }else{
        for (int i = 0; i < listaDeArticulos::articleList.size(); i++)
        {
            cout << "\u001b[36m" << listaDeArticulos::articleList[i].getName() << "\u001b[37m" << endl;
            cout << "   $ " << listaDeArticulos::articleList[i].getPrice() << endl << endl;
            cout << "   " << listaDeArticulos::articleList[i].getDescription() << endl;
        }
    }
}

void listaDeArticulos::print(int id){
    cout << "\u001b[36m" << listaDeArticulos::articleList[id].getName() << "\u001b[37m" << endl;
    cout << "   $ " << listaDeArticulos::articleList[id].getPrice() << endl << endl;
    cout << "   " << listaDeArticulos::articleList[id].getDescription() << endl << endl << endl;
}

void listaDeArticulos::print(int start, int end){
    if (start >= end) return;
    for (int i = start; i < end; i++)
    {
        cout << "\u001b[36m" << listaDeArticulos::articleList[i].getName() << "\u001b[37m" << endl;
        cout << "   $ " << listaDeArticulos::articleList[i].getPrice() << endl << endl;
        cout << "   " << listaDeArticulos::articleList[i].getDescription() << endl << endl << endl;
    }
}

articulo listaDeArticulos::returnArticle(int id){
    return listaDeArticulos::articleList[id];
}

articulo listaDeArticulos::returnArticle(string name){
    for (int i = 0; i < listaDeArticulos::articleList.size(); i++)
    {
        if (listaDeArticulos::articleList[i].getName() == name) return listaDeArticulos::articleList[i];
    }

    return listaDeArticulos::articleList[0];
}

void listaDeArticulos::addArticle(string name, int amount, listaDeArticulos * pointerToAdd){
    listaDeArticulos::articleList.push_back(pointerToAdd->returnArticle(name));
    listaDeArticulos::amountList.push_back(amount);
}

void listaDeArticulos::Checkout(){
    float precioFinal = 0.0f;
    for (int i = 0; i < listaDeArticulos::articleList.size(); i++)
    {
        precioFinal += listaDeArticulos::articleList[i].getPrice() * listaDeArticulos::amountList[i];
    }

    cout << "Procesando pagos...." << endl;

    cout << "precio sin impuestos: $" << precioFinal << endl;
    cout << "Precio con impuestos: $" << precioFinal * 1.10f << endl;
}

