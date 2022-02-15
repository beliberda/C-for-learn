/*Определить два класса с иерархией наследования в соответствии с предметной областью «Удостоверение личности», 
«Паспорт».Каждый класс снабдить свойствами и методами, определяющими их специфику.Предусмотреть метод info(), выводящий информацию об объекте.
Предусмотреть конструкторы с параметрами и без параметров.Написать демонстрационную программу, создающую 4 - 5 объектов и демонстрирующую вызов их методов.
*/
#include <iostream>
using namespace std;
class human {
public:
    char name[20];
    string surname;
    string patronymic;
    int day;
    int month;
    int year;
    string gender;
    string city;
    string country;
    
};
class passport : public human {
public:
    string code;
    int serial;
    int number;
    string citizen;
    int day_issue;
    int month_issue;
    int year_issue;
    passport();//конструктор по умолчанию
    passport(char* name, string surname, string patronymic, int day, int month, int year, string gender, string city, string country, string code, int serial, int number,
        string citizen, int day_issue, int month_issue, int year_issue);//конструктор с параметрами
    void info()
    {
        cout << '\n' << surname << " " << name << " " << patronymic << " " << endl << number << " " << serial << code << " "
            << endl << day_issue << "." << month_issue << "." << year_issue << endl
            << day << "." << month << "." << year << endl << country << " " << city << " " << gender << endl;
    };
    
};
passport::passport()
{
    strcpy_s(name, "Name");
    code = "000";
    serial = 0;
    number = 0;
    citizen = "none";
    day_issue = 0;
    month_issue = 0;
    year_issue = 0;
    day = 0;
    month = 0;
    year = 0;
    surname = "surname";
    patronymic = "patronimyc";
    gender = "none";
    city = "none";
    country = "none";
    
}

passport::passport(char* name, string surname, string patronymic, int day, int month, int year, string gender, string city, string country, string code, int serial, int number,
    string citizen, int day_issue, int month_issue, int year_issue)
{
    strcpy_s(this->name, name);
    this->surname = surname;
    this->patronymic = patronymic;
    this->gender = gender;
    this->country = country;
    this->city = city;
    this->citizen = citizen;
    this->day = day;
    this->month = month;
    this->year = year;
    this->code = code;
    this->serial = serial;
    this->number = number;
    this->day_issue = day_issue;
    this->month_issue = month_issue;
    this->year_issue = year_issue;
}

int main()
{
    setlocale(LC_ALL, "ru");
    
    passport first((char*)"Александр", "Буря", "Владимирович", 23, 12, 1998, "муж", "Владимир", "Россия", "270-00", rand() % 10000 + 1000, rand() % 1000000 + 100000, "russian", 01, rand()%12+1, rand()%2020+2000),
        second((char*)"Анна", "Березкина", "Игоревна", rand() % 30 + 0, 12, 1970, "жен", "Орел", "Россия", "200-00", rand()%10000+1000, rand()%1000000+100000, "russian", 01, 1, 23),
        third((char*)"Александр", "Буря", "Владимирович", rand()%30+0, 12, 2004, "муж", "Владимир", "Россия", "270-00", rand() % 10000 + 1000, rand() % 1000000 + 100000, "russian", 01, rand() % 12 + 1, rand() % 2020 + 2000),
        fourth((char*)"Тарантайка", "Безымянный", "Олегович", rand() % 30 + 0, 12, 1990, "муж", "Казань", "Россия", "270-00", rand() % 10000 +1000, rand() % 1000000 + 100000, "russian", 01, rand() % 12 + 1, rand() % 2020 + 2000);

    first.info();
    second.info();
    third.info();
    fourth.info();
    return 0;
}

