
#include "StudentJournal.h"


StudentJournal::StudentJournal()
{
	_studentJournal = gcnew List<Student^>();

}

void StudentJournal::AddToJournal(Student^ student)
{
	_studentJournal->Add(student);
}

void StudentJournal::RemoveFromJournal(Student ^ student)
{

	for (int i = 0; i < _studentJournal->Count; i++)
	{
		Student^ removedStudent = _studentJournal[i];
		if ((removedStudent->GetStudentName() == student->GetStudentName()) && removedStudent->GetGradebookNumber() == student->GetGradebookNumber())
		{
			int index = i;
			_studentJournal->RemoveAt(index);
			break;
		}
	}


}

List<Student^>^ StudentJournal::GetJournal()
{
	return _studentJournal;
}

List<Student^>^ StudentJournal::SearchByDisciplines(List<String^>^ listOfDisciplines)
{

	List<Student^>^ foundedStudents = gcnew List<Student^>;

	for (int i = 0; i < _studentJournal->Count; i++) //для каждого студента в журнале
	{
		int Equal = 0; // счетчик совпадений
		Student^ tempStudent = _studentJournal[i]; //временный студент = студент из журнала
		List<String^>^ studentDisciplines = tempStudent->GetDisciplinesList(); //получение списка дисциплин студента
		if (studentDisciplines->Count == listOfDisciplines->Count) // если количество дисциплин студента = количеству запрашиваемых дисциплин
		{

			for (int j = 0; j < studentDisciplines->Count; j++) //для каждой дисциплины студента
			{

				for (int k = 0; k < listOfDisciplines->Count; k++)// сравниваем ее с каждой заданной дисциплиной
				{
					if (studentDisciplines[j] == listOfDisciplines[k]) // если дисциплины совпадают, то счетчик совпадений +1
					{
						Equal = Equal + 1;
					}

				}

			}

			if (studentDisciplines->Count == Equal) // если количество совпадений = количеству дисциплин студента
			{
				foundedStudents->Add(tempStudent); // добавляем студента в список
			}
		}

		
	}

	return foundedStudents;
}


