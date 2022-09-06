#include "schoolSystem.h"

void schoolSystem::Run()
{
	int counter = 0;
	int input = 0;
	while (true)
	{
		std::cout << "Loop: " << counter << "\n";
		counter++;
		std::cout << "1: Add a student" << "\n";
		std::cout << "2: Add a class" << "\n";
		std::cout << "3: Remove a student" << "\n";
		std::cout << "4: Remove a class" << "\n";
		std::cout << "5: Look at classes" << "\n";
		std::cout << "6: Look at students in a class" << "\n";
		std::cout << "7: Save" << "\n";
		std::cout << "8: Load" << "\n";
		std::cout << "9: Exit" << "\n";
		std::cin >> input;
		if(input == 1)
		{
			int classid;
			std::string name;
			std::string lastname;
			int age;
			std::cout << "Write id of class the student belongs to" << "\n";
			std::cin >> classid;
			std::cout << "Write first name of student" << "\n";
			std::cin >> name;
			std::cout << "Write last name of student" << "\n";
			std::cin >> lastname;
			std::cout << "Write age of student" << "\n";
			std::cin >> age;
			addStudent(name + " " + lastname, age, classid);
		}
		else if(input == 2)
		{
			std::string name;
			std::cout << "Write name of class" << "\n";
			std::cin >> name;
			addClass(name);
		}
		else if (input == 3)
		{
			int id;
			int classid;
			std::cout << "Write id of class" << "\n";
			std::cin >> classid;
			std::cout << "Write id of student" << "\n";
			std::cin >> id;
			removeStudent(id, classid);
		}
		else if (input == 4)
		{
			int classid;
			std::cout << "Write id of class" << "\n";
			std::cin >> classid;
			removeClass(classid);
		}
		else if (input == 5)
		{
			showClasses();
		}
		else if (input == 6)
		{
			int classid;
			std::cout << "Write id of class" << "\n";
			std::cin >> classid;
			showStudents(classid);
		}
		else if (input == 9)
		{
			break;
		}
		else
		{
			std::cout << "Please provide valid input" << "\n";
		}
	}
}

void schoolSystem::addStudent(std::string name, int age, int classsid)
{
	student student;
	student.name = name;
	student.age = age;
	schoolClasses[classsid].studentData.push_back(student);
}

void schoolSystem::addClass(std::string name)
{
	classs classs;
	classs.name = name;
	schoolClasses.push_back(classs);
}

void schoolSystem::removeClass(int id)
{
	schoolClasses.erase(schoolClasses.begin() + id);
}

void schoolSystem::removeStudent(int id, int classsid)
{
	schoolClasses[classsid].studentData.erase(schoolClasses[classsid].studentData.begin() + id);
}

void schoolSystem::showClasses()
{
	for (int i = 0; i < schoolClasses.size(); i++)
	{
		std::cout << i << ": " << schoolClasses[i].name << "\n";
	}
}

void schoolSystem::showStudents(int classid)
{
	for (int i = 0; i < schoolClasses[classid].studentData.size(); i++)
	{
		std::cout << i << ": " << schoolClasses[classid].studentData[i].name << " " << schoolClasses[classid].studentData[i].age << "\n";
	}
}
