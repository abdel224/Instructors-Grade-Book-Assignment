#include "StudentType.h"
#include <iostream>
#include <string>
using namespace std;


template<class ItemType>
StudentType<ItemType>::StudentType()
{
}


template<class ItemType>
StudentType<ItemType>::~StudentType()
{
}

template<class ItemType>
string StudentType<ItemType>::GetStatus() const
{
	return status;
}

template<class ItemType>
void StudentType<ItemType>::Initialize(string newName, string newLastNmae, int newNumber, string newStatus)
{
	status = newStatus;
	StudentType::Initialize(newName, newLastName, newNumber);
}

template<class ItemType>
void StudentType<ItemType>::PersoneType(string, string, int)
{

}


template<class ItemType>
ItemType StudentType<ItemType>::Student()
{
	return ItemType();
}

