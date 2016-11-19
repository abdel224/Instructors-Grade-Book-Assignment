#pragma once
#ifndef H_unsortedType
#define H_unsortedType

#include <iostream>
#include <cassert>

using namespace std;
template <typename Type>
struct NodeType {
	Type info;
	NodeType<Type> *next;
};

template <typename Type>
class UnsortedType
{
public:
	UnsortedType();

	~UnsortedType();

	void MakeEmpty();

	bool IsFull() const;

	int GetLength() const;

	Type GetItem(Type& item, bool& found);

	void PutItem(Type item);

	void DeleteItem(Type item);

	void ResetList();

	Type GetNextItem();


private:
	NodeType<Type>* listData;
	int length;
	NodeType<Type>* currentPos;
};

template<typename Type>
inline UnsortedType<Type>::UnsortedType()
{
	length = 0;
	listData = NULL;
}

template<typename Type>
inline UnsortedType<Type>::~UnsortedType()
{
	NodeType<Type>* tempPtr;

	while (listData != NULL)
	{
		tempPtr = listData;
		listData = listData->next;
		delete tempPtr;
	}
}

template<typename Type>
inline void UnsortedType<Type>::MakeEmpty()
{
	NodeType<Type> *tempPtr;

	while (listData != NULL)
	{
		tempPtr = listData;
		listData = listData->next;
		delete tempPtr;
	}
	length = 0;
}

template<typename Type>
inline bool UnsortedType<Type>::IsFull() const
{
	NodeType<Type> *location;
	try
	{
		location = new NodeType<Type>;
		delete location;
		return false;
	}
	catch (bad_alloc exception)
	{
		return true;
	}
}

template<typename Type>
inline int UnsortedType<Type>::GetLength() const
{
	return length;
}

template<typename Type>
inline Type UnsortedType<Type>::GetItem(Type& item, bool& found)
{
	bool moreToSearch;
	NodeType<Type>* location;

	location = listData;
	found = false;
	moreToSearch = (location != NULL);

	while (moreToSearch && !found)
	{
		switch (item.ComparedTo(location->info))
		{
		case LESS:
		case GREATER: location = location->next;
			moreToSearch = (location != NULL);
			break;
		case EQUAL: found = true;
			item = location->info;
			break;
		}
	}
	return item;
}

template<typename Type>
inline void UnsortedType<Type>::PutItem(Type item)
{
	NodeType<Type> *location;			// Declare a pointer to a node

	location = new NodeType<Type>;		// Get a new node 
	location->info = item;		// Store the item in the node
	location->next = listData;	// Store address of first node 
								//   in next field of new node
	listData = location;		// Store address of new node into
								//   external pointer
	length++;				// Increment length of the list
}

template<typename Type>
inline void UnsortedType<Type>::DeleteItem(Type item)
{
	NodeType<Type>* location = listData;
	NodeType<Type>* tempLocation;

	// Locate node to be deleted.
	if (item.ComparedTo(listData->info) == EQUAL)
	{
		tempLocation = location;
		listData = listData->next;		// Delete first node.
	}
	else
	{
		while (item.ComparedTo((location->next)->info) != EQUAL)
			location = location->next;

		// Delete node at location->next
		tempLocation = location->next;
		location->next = (location->next)->next;
	}
	delete tempLocation;
	length--;
}

template<typename Type>
inline void UnsortedType<Type>::ResetList()
{
	currentPos = NULL;
}

template<typename Type>
inline Type UnsortedType<Type>::GetNextItem()
{
	Type item;
	if (currentPos == NULL)
		currentPos = listData;
	else
		currentPos = currentPos->next;
	item = currentPos->info;
	return item;
}
#endif // !H_unsortedType