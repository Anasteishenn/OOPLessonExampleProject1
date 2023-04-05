#pragma once
#include "main.h"
#include "student.h"
#define DEFAUKT_SIZE 10

class Group {
private:

	Student list[DEFAUKT_SIZE];
	int size;
	string name;

public:
	Group();
	Group(Student* ls,int sz,string nm);
	Group(string n);
	~Group();

	void add(Student student);
	void remove(Student student);
	void remove(int index);
	Student get(int index);
	int size();
	string conver_to_string();
};