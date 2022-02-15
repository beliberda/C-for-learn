/*Описать класс в соответствии с предметной областью «Телевизор».  
В классе предусмотреть несколько свойств и методов. Предусмотреть метод info(), выводящий на экран информацию об объекте. 
Предусмотреть конструкторы, инициализирующие свойства объектов переданными данными и значениями по умолчанию. 
Программу снабдить комментариями. Написать демонстрационную программу, создающую 4-5 объектов и выводящую на экран информацию о них.*/


#include <iostream>
#pragma once
using namespace std;
class TV
{
public:
    char modelNumber[20];
    double size;
    double weight;
    double price;

    TV();
    TV(char* modelNumber, double size, double weight, double price);
    void info();
    void print(char* page);
};



TV::TV()
{
    strcpy_s(modelNumber, "KOV2020");
    size = 9.0;
    weight = 6.0;
    price = 10000.0;
}

TV::TV(char* modelNumber, double size, double weight, double price)
{
    strcpy_s(this->modelNumber, modelNumber);
    this->size = size;
    this->weight = weight;
    this->price = price;
}

void TV::info()
{
    cout <<"Model " << modelNumber << " , Size " << size << " , Weight " << weight << " , Price " << price << "\n";
}

void TV::print(char* page)
{
    cout << page << "\n";
}
int main()
{
    TV tv1((char*)"Cov2020 ", 19.5, 2.1, 5200),
        tv2((char*)"HP2000 ", 19.5, 2.1, 5200),
        tv3((char*)"Kur8010 ", 15.5, 5.1, 7200),
        tv4((char*)"b10 ", 10.5, 3.2, 4100.999), 
        tv5;

    tv1.info();
    tv2.info();
    tv3.info();
    tv4.info();
    tv5.info();
    return 0;
}

