//Задание: 
/*
Написать программу, позволяющую считать данные из текстового файла, содержащего две строки, объединить строки и вывести на консоль результат.

Результат объединения двух строк записать в новый текстовый файл.
*/

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;
int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "RUS");
	char buff[50];
	string path = "New.txt";
	ifstream fin;
	ofstream fout;
	fout.open("Second.txt");
	fin.open(path);
	if (!fin.is_open())
	{
		cout << "Error" << endl;
	}
	else
	{
		cout << "Файл открыт" << endl;
		while (!fin.eof()) {
			fin.getline(buff,50);
			//getline(fin, path);
			cout << buff << " ";
			fout << buff << " ";
		}
	}  
	fin.close();
	fout.close();
	
	


	
	return 0;
}