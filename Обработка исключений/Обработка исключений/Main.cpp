#include <iostream>
#include<string>
#include "MyClass.h"
using namespace std;




template<typename T>
T& List<T>::operator[](const int index)
{
	int counter = 0;
	Node<T>* current = this->head;
	while (current != nullptr)
	{
		if (counter == index)
		{
			return current->data;
		}
		current = current->pNext;
		counter++;
	}
}
int input;
int main()
{
	setlocale(LC_ALL, "ru");
	List < int> lst;
	cout << "Введите количество элементов" << " ";
	int numberCount;
	if (cin >> numberCount) {
		cout << endl;
		cout << endl;
		cout << "1. Посмотреть список\n";
		cout << "2. Добавить элемент в конец\n";
		cout << "3. Удалить из начала\n";
		cout << "4. Поиск по номеру\n";
		cout << "5. Добавлять перед каждым нечетным по значению\n";
		cout << "6. Удалять перед каждым нечетным по значению\n";
		cout << "7. Очистить список\n";
		for (int i = 0; i < numberCount;i++)
		{
			
		}
	Choose:
		cout << endl;
		cin >> input;

		switch (input)
		{
		case 1:
			cout << "1. Посмотреть список\n";
			for (int i = 0; i < lst.GetSize();i++)
			{
				cout << lst[i] << "  ";
			}
			break;
		case 2:
			cout << "2. Добавить элемент в конец\n";

			int num;
			cin >> num;
			lst.push_back(num);

			for (int i = 0; i < lst.GetSize();i++)
			{
				cout << lst[i] << "  ";
			}
			break;
		case 3:
			cout << "3. Удалить из начала\n";
			lst.pop_front();
			for (int i = 0; i < lst.GetSize();i++)
			{
				cout << lst[i] << "  ";
			}
			cout << endl << "Элементов в списке " << lst.GetSize() << "\n";

			break;
		case 4:
			cout << "4. Поиск по номеру\n";
			int n;
			cin >> n;
			cout << lst[n - 1];
			break;
		case 5:
			cout << "5. Добавлять перед каждым нечетным по значению\n";
			lst.AddBefore(10);
			for (int i = 0; i < lst.GetSize();i++)
			{
				cout << lst[i] << " ";
			}

			break;

		case 6:
			cout << "6. Удалять перед каждым нечетным по значению\n";
			break;
		case 7:
			cout << "7. Очистить список\n";
			lst.clear();
			cout << endl << "Элементов в списке " << lst.GetSize() << "\n";
			break;
		}
		goto Choose;
	}
	else {
		cout << "Неверное значение";
	}
}