
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

	for (int i = 0; i < _studentJournal->Count; i++) //��� ������� �������� � �������
	{
		int Equal = 0; // ������� ����������
		Student^ tempStudent = _studentJournal[i]; //��������� ������� = ������� �� �������
		List<String^>^ studentDisciplines = tempStudent->GetDisciplinesList(); //��������� ������ ��������� ��������
		if (studentDisciplines->Count == listOfDisciplines->Count) // ���� ���������� ��������� �������� = ���������� ������������� ���������
		{

			for (int j = 0; j < studentDisciplines->Count; j++) //��� ������ ���������� ��������
			{

				for (int k = 0; k < listOfDisciplines->Count; k++)// ���������� �� � ������ �������� �����������
				{
					if (studentDisciplines[j] == listOfDisciplines[k]) // ���� ���������� ���������, �� ������� ���������� +1
					{
						Equal = Equal + 1;
					}

				}

			}

			if (studentDisciplines->Count == Equal) // ���� ���������� ���������� = ���������� ��������� ��������
			{
				foundedStudents->Add(tempStudent); // ��������� �������� � ������
			}
		}

		
	}

	return foundedStudents;
}


