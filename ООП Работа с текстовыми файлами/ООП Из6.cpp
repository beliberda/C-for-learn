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
		setlocale(LC_ALL, "rus");
		char buff[50];
		ifstream File("New.txt");
		File >> buff;
		cout << buff << endl;
		File.getline(buff, 50);
		File.close();
		cout << buff << endl;
	}