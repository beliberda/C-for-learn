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
	cout << "������� ���������� ���������" << " ";
	int numberCount;
	if (cin >> numberCount) {
		cout << endl;
		cout << endl;
		cout << "1. ���������� ������\n";
		cout << "2. �������� ������� � �����\n";
		cout << "3. ������� �� ������\n";
		cout << "4. ����� �� ������\n";
		cout << "5. ��������� ����� ������ �������� �� ��������\n";
		cout << "6. ������� ����� ������ �������� �� ��������\n";
		cout << "7. �������� ������\n";
		for (int i = 0; i < numberCount;i++)
		{
			
		}
	Choose:
		cout << endl;
		cin >> input;

		switch (input)
		{
		case 1:
			cout << "1. ���������� ������\n";
			for (int i = 0; i < lst.GetSize();i++)
			{
				cout << lst[i] << "  ";
			}
			break;
		case 2:
			cout << "2. �������� ������� � �����\n";

			int num;
			cin >> num;
			lst.push_back(num);

			for (int i = 0; i < lst.GetSize();i++)
			{
				cout << lst[i] << "  ";
			}
			break;
		case 3:
			cout << "3. ������� �� ������\n";
			lst.pop_front();
			for (int i = 0; i < lst.GetSize();i++)
			{
				cout << lst[i] << "  ";
			}
			cout << endl << "��������� � ������ " << lst.GetSize() << "\n";

			break;
		case 4:
			cout << "4. ����� �� ������\n";
			int n;
			cin >> n;
			cout << lst[n - 1];
			break;
		case 5:
			cout << "5. ��������� ����� ������ �������� �� ��������\n";
			lst.AddBefore(10);
			for (int i = 0; i < lst.GetSize();i++)
			{
				cout << lst[i] << " ";
			}

			break;

		case 6:
			cout << "6. ������� ����� ������ �������� �� ��������\n";
			break;
		case 7:
			cout << "7. �������� ������\n";
			lst.clear();
			cout << endl << "��������� � ������ " << lst.GetSize() << "\n";
			break;
		}
		goto Choose;
	}
	else {
		cout << "�������� ��������";
	}
}