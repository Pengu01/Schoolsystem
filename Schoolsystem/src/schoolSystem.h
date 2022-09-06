#pragma once
#include "student.h"
#include <vector>
#include <iostream>

class schoolSystem
{
public:
	void Run();
	void addStudent(std::string name, int age);
	void removeStudent(int id);

	std::vector<student> studentData;
	std::vector<std::string> schoolClasses;
private:

};