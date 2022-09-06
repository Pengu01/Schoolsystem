#include "schoolSystem.h"

void schoolSystem::Run()
{
	int counter = 0;
	while (true)
	{
		std::cout << "Loop: " << counter << "\n";
		counter++;
		std::cin.get();
	}
}

void schoolSystem::addStudent(std::string name, int age)
{
	student student;
	student.name = name;
	student.age = age;
	studentData.push_back(student);
}

void schoolSystem::removeStudent(int id)
{

}
