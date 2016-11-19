#pragma once
#ifndef H_UnsortedType
#define H_UnsortedType

#include "StudentType.h"
template <class Type>
struct NodeType
{
	Type info;
	NodeType<Type> *next;
};
template <class Type>
class UnsortedType
{
public:
	UnsortedType();

	~UnsortedType();

	void MakeEmpty();

	bool IsFull() const;

	int GetLength() const;

	StudentType GetStudent(StudentType& student, bool& found);

	void PutStudent(StudentType student);

	void DeleteStudent(StudentType student);

	void ResetList();

	StudentType GetNextStudent();

private:
	NodeType<Type> *listData;
	int length;
	NodeType<Type> *currentPos;
};

#endif // !H_UnsortedType
