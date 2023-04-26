#pragma once
#include "main.h"
#include "student.h"

class Group {
public:
	static const int DEFAULT_SIZE = 10;

private:
	Student list [DEFAULT_SIZE];
	int size;
	string name;

public:
	Group();
	Group(Student* ls, int sz, string n);
	Group(string n);
	~Group();

	string get_name();
	void set_name(string nm);
	int get_size();

	void add(Student student);
	/*void remove(Student student);
	void remove(int index);
	Student get(int index);*/
	string convert_to_string();
};