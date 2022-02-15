#include <iostream>
#include "MyClass.h"
template<typename T>
List<T>::List() //создание пустого листа
{
	Size = 0;
	head = nullptr;
}
template<typename T>
List<T>::~List()
{
	delete List;
}
template<typename T>
void List<T>::pop_front()
{
	Node<T>* temp = head;
	head = head->pNext;
	delete temp;
	Size--;
}
template<typename T>
void List<T>::clear()
{
	while (Size)
	{
		pop_front();
	}
}
template<typename T>
void List<T>::insert(T value, int index)//первый параметр - данные которые добавляем, второй - куда
{
	if (index == 0)
	{
		push_front(value);
	}
	else {
		Node<T>* previos = this->head;//создаем временный указатель и присваиваем ему значение головы
		for (int i = 0;i < index - 1;i++)
		{
			previos = previos->pNext;
		}
		Node<T>* newNode = new Node<T>(value, previos->pNext); //создаем новый объект, передаем ему параметры, заменяем адрес
		previos->pNext = newNode;//
		Size++;
	}

}
template<typename T>
void List<T>::print()
{

}



