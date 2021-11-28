
#include "Student.h"

Student::Student()
{
	_disciplinesList = gcnew List<String^>();
}

Student::Student(String^ name, String^ gradebookNumber)
{
	_name = name;

	_gradebookNumber = gradebookNumber;

	_disciplinesList = gcnew List<String^>();
}

void Student::SetStudentName(String ^ name)
{
	_name = name;
}

String ^ Student::GetStudentName()
{
	return _name;
}

void Student::SetGradebookNumber(String^ gradebookNumber)
{
	_gradebookNumber = gradebookNumber;
}

String^ Student::GetGradebookNumber()
{
	return _gradebookNumber;
}

void Student::AddDiscipline(String ^ disciplineName)
{
	_disciplinesList->Add(disciplineName);
}

List<String^>^ Student::GetDisciplinesList()
{
	return _disciplinesList;
}
