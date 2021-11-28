#pragma once
#include "Student.h"
ref class StudentJournal
{
public:
	StudentJournal();
	void AddToJournal(Student^ student);
	void RemoveFromJournal(Student^ student);
	List<Student^>^ GetJournal();
	List<Student^>^ SearchByDisciplines(List<String^>^ listOfDisciplines);
	
	
private:
	List<Student^>^ _studentJournal;
};
