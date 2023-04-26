#include "group.h"

Group::Group() {
	size = 0;
	name = "no name";
}

Group::Group(Student* ls, int sz, string nm) {
	name = nm;
	if (sz <= DEFAULT_SIZE) {
		size = sz;

		for (int i = 0; i < sz; i++) {
			list[i] = ls[i];
		}
	}
	else {
		size = 0;
	}
};

Group::Group(string nm) {
	size = 0;
	name = nm;
}

Group::~Group() {
	delete[] list;
}

string Group::get_name() {
	return name;
}

void Group::set_name(string nm) {
	name = nm;
}

void Group::add(Student student) {
	if (size < DEFAULT_SIZE) {
		list[size] = student;
		size++;
	}
}

//void Group::remove(Student student) {}
//
//void Group::remove(int index) {
//	if (index >= 0 && index < size) {
//		for (int i = index; i < size; i++)
//		{
//			list[index] = list[index + 1];
//		}
//		size--;
//	}
//}
//
//
//Student Group::get(int index) {
//	if (index >= 0 && index < size) {
//		return list[index];
//	}
//
//	return NULL;
//}

string Group::convert_to_string() {
	string msg = "Student list of Group " + name + " : ";
	for (int i = 0; i < size; i++) {
		msg += "\n" + to_string(i + 1) + ") " + list[i].convert_to_string();
	}
	return msg;
}