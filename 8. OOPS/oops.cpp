#include <bits/stdc++.h>
using namespace std;

class Product
{
private:
    int id;
    char *name;
    int mrp;
    int selling_price;

public:

    // Constructor
    Product(){
        cout<<"Inside Constructor "<<endl;
    }
    // Parameterised Constructor
    Product(int id, char *n, int mrp, int selling_price){
        this->id = id;
        this->mrp = mrp;
        this->selling_price = selling_price;
        name = new char[strlen(n)+1];
        strcpy(name,n);
    }

    Product (Product &X){
        id = X.id;
        name = new char[strlen(X.name)+1];
        strcpy(name,X.name);
        mrp = X.mrp;
        selling_price = X.selling_price;
    }



    // setters-> setting the properties of Objects or Product
    void setMRP(int price)
    {
        mrp = price;
    }
    void setSellingPrice(int price)
    {
        if (price > mrp)
        {
            selling_price = mrp;
        }
        else
        {
            selling_price = price;
        }
    }

    // getters-> returns the property of Objects or Product
    int getMrp()
    {
        return mrp;
    }
    int getSellingPrice()
    {
        return selling_price;
    }

    void showDetails(){
        cout<<"Name : "<<name<<endl;
        cout<<"Id : "<<id<<endl;
        cout<<"Selling Price : "<<selling_price<<endl;
        cout<<"MRP : "<<mrp<<endl;
        cout<<"------------------------------*_*"<<endl;
    }

    void setName(string){
        strcpy(this->name,name);
    }


};

int main()
{

    Product camera(2, "GoProHero", 28000, 26000);
    Product old_camera(camera);

    old_camera.setName("GoPro8");
    old_camera.setSellingPrice(1000);

    old_camera.showDetails();
    camera.showDetails();

    // camera.setMRP(100);
    // camera.setSellingPrice(120);

    // cout << sizeof(camera) << endl;
    // cout << "MRP " << camera.getMrp() << endl;
    // cout << "Selling Price " << camera.getSellingPrice() << endl;

    return 0;
}