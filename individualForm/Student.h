#pragma once

using namespace System;
using namespace System::Collections::Generic;

ref class Student
{
public:
	Student();
	Student(String^ name, String^ gradebookNumber);
	void SetStudentName(String^ name);
	String^ GetStudentName();
	void SetGradebookNumber(String^ gradebookNumber);
	String^ GetGradebookNumber();
	void AddDiscipline(String^ disciplineName);
	List<String^>^ GetDisciplinesList();
private:
	String^ _name;
	String^ _gradebookNumber;
	List<String^>^ _disciplinesList;
};

