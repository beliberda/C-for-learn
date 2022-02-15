#pragma once
#include <iostream>
template<typename T>
class List
{
public:
	List();
	~List();
	void pop_front();
	void clear(); //очистка списка
	void insert(T value, int index); //вставка 
	int GetSize()
	{
		return Size;
	}
	void print();
	T& operator[](const int index);
private:
	template<typename T>
	class Node
	{
	public:
		Node* pNext;
		T data;
		Node(T data = T(), Node* pNext = nullptr)//данные поле data и адрес pNext
		{
			this->data = data;
			this->pNext = pNext;
		}
	};
	Node<T>* head; //заголовок списка
	int Size;

	//размер списка
};