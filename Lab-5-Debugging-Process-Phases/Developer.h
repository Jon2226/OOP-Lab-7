#pragma once


class Developer {
public:
	int* age;
public:
	Developer(int age);
	Developer(Developer& rhs);
    void operator=(const Developer& dev);       // copy constructor: rule of three

	int getAge();
	void setAge(int age);
	~Developer();
};
