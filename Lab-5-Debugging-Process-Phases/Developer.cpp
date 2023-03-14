#include"Developer.h"
#include<iostream>
using namespace std;

Developer::Developer(int age) {
	cout << "Created Developer object" << endl;
	this->age = new int;
	*this->age = age;
}

Developer::Developer(Developer& rhs) {

	cout << "Copy Developer object" << endl;
    this->age = new int;
    *this->age = *rhs.age;
}

void Developer::operator=(const Developer& dev)
{
    this->age = new int;
    *this->age = *dev.age;
}

int Developer::getAge() {

	return *age;

}

void Developer::setAge(int age) {

	*this->age = age;

}

Developer::~Developer() {

	delete age;

}
