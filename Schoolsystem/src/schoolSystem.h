#pragma once
#include "classes.h"
#include <iostream>

class schoolSystem
{
public:
	void Run();
	void addStudent(std::string name, int age, int classsid);
	void addClass(std::string name);
	void removeClass(int id);
	void removeStudent(int id, int classsid);
	void showClasses();
	void showStudents(int classid);
	void loadClasses();
	void loadStudents();

	std::vector<classs> schoolClasses;
private:

};