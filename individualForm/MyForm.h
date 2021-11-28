#pragma once
#include "Student.h"
#include "StudentJournal.h"
#include "StudentInfoForm.h"

namespace individualForm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnAddStudent;
	private: System::Windows::Forms::TextBox^  txtStudentName;
	private: System::Windows::Forms::TextBox^  txtGradebookNumber;
	protected:


	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ListView^  listViewJournal;
	private: System::Windows::Forms::ColumnHeader^  colStudentName;
	private: System::Windows::Forms::ColumnHeader^  colGradebookNumber;
	private: System::Windows::Forms::Button^  btnRemoveStudent;
	private: System::Windows::Forms::Label^  label3;


	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  txtDiscipline;
	private: System::Windows::Forms::Button^  btnAddDiscipline;
	private: System::Windows::Forms::ListView^  listViewDisciplinesList;


	private: System::Windows::Forms::ColumnHeader^  colDisciplineName;
	private: System::Windows::Forms::Button^  btnRemoveDisciplineFromList;
	private: System::Windows::Forms::Button^  btnSetDisciplinesForStudent;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::ListView^  listViewGradebooksNumbers;
	private: System::Windows::Forms::ColumnHeader^  colGradebooksNumbers;
	private: System::Windows::Forms::Button^  btnSearchByDisciplines;

	private: System::Windows::Forms::Label^  label6;




	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnAddStudent = (gcnew System::Windows::Forms::Button());
			this->txtStudentName = (gcnew System::Windows::Forms::TextBox());
			this->txtGradebookNumber = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->listViewJournal = (gcnew System::Windows::Forms::ListView());
			this->colStudentName = (gcnew System::Windows::Forms::ColumnHeader());
			this->colGradebookNumber = (gcnew System::Windows::Forms::ColumnHeader());
			this->btnRemoveStudent = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtDiscipline = (gcnew System::Windows::Forms::TextBox());
			this->btnAddDiscipline = (gcnew System::Windows::Forms::Button());
			this->listViewDisciplinesList = (gcnew System::Windows::Forms::ListView());
			this->colDisciplineName = (gcnew System::Windows::Forms::ColumnHeader());
			this->btnRemoveDisciplineFromList = (gcnew System::Windows::Forms::Button());
			this->btnSetDisciplinesForStudent = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->listViewGradebooksNumbers = (gcnew System::Windows::Forms::ListView());
			this->colGradebooksNumbers = (gcnew System::Windows::Forms::ColumnHeader());
			this->btnSearchByDisciplines = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnAddStudent
			// 
			this->btnAddStudent->Location = System::Drawing::Point(15, 266);
			this->btnAddStudent->Name = L"btnAddStudent";
			this->btnAddStudent->Size = System::Drawing::Size(75, 23);
			this->btnAddStudent->TabIndex = 0;
			this->btnAddStudent->Text = L"Добавить";
			this->btnAddStudent->UseVisualStyleBackColor = true;
			this->btnAddStudent->Click += gcnew System::EventHandler(this, &MyForm::btnAddStudent_Click);
			// 
			// txtStudentName
			// 
			this->txtStudentName->Location = System::Drawing::Point(15, 201);
			this->txtStudentName->Name = L"txtStudentName";
			this->txtStudentName->Size = System::Drawing::Size(134, 20);
			this->txtStudentName->TabIndex = 1;
			// 
			// txtGradebookNumber
			// 
			this->txtGradebookNumber->Location = System::Drawing::Point(15, 240);
			this->txtGradebookNumber->Name = L"txtGradebookNumber";
			this->txtGradebookNumber->Size = System::Drawing::Size(134, 20);
			this->txtGradebookNumber->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 185);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(77, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Имя студента";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 224);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(131, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Номер зачетной книжки";
			// 
			// listViewJournal
			// 
			this->listViewJournal->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) {
				this->colStudentName,
					this->colGradebookNumber
			});
			this->listViewJournal->FullRowSelect = true;
			this->listViewJournal->Location = System::Drawing::Point(12, 23);
			this->listViewJournal->Name = L"listViewJournal";
			this->listViewJournal->Size = System::Drawing::Size(288, 159);
			this->listViewJournal->TabIndex = 5;
			this->listViewJournal->UseCompatibleStateImageBehavior = false;
			this->listViewJournal->View = System::Windows::Forms::View::Details;
			this->listViewJournal->DoubleClick += gcnew System::EventHandler(this, &MyForm::listViewJournal_DoubleClick);
			// 
			// colStudentName
			// 
			this->colStudentName->Text = L"Имя";
			this->colStudentName->Width = 143;
			// 
			// colGradebookNumber
			// 
			this->colGradebookNumber->Text = L"Зачетная книжка";
			this->colGradebookNumber->Width = 161;
			// 
			// btnRemoveStudent
			// 
			this->btnRemoveStudent->Location = System::Drawing::Point(169, 199);
			this->btnRemoveStudent->Name = L"btnRemoveStudent";
			this->btnRemoveStudent->Size = System::Drawing::Size(75, 23);
			this->btnRemoveStudent->TabIndex = 6;
			this->btnRemoveStudent->Text = L"Удалить";
			this->btnRemoveStudent->UseVisualStyleBackColor = true;
			this->btnRemoveStudent->Click += gcnew System::EventHandler(this, &MyForm::btnRemoveStudent_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 7);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(50, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Журнал ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(387, 7);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(89, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Ввод дисциплин";
			// 
			// txtDiscipline
			// 
			this->txtDiscipline->Location = System::Drawing::Point(390, 201);
			this->txtDiscipline->Name = L"txtDiscipline";
			this->txtDiscipline->Size = System::Drawing::Size(119, 20);
			this->txtDiscipline->TabIndex = 10;
			this->txtDiscipline->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txtDiscipline_KeyPress);
			// 
			// btnAddDiscipline
			// 
			this->btnAddDiscipline->Location = System::Drawing::Point(390, 266);
			this->btnAddDiscipline->Name = L"btnAddDiscipline";
			this->btnAddDiscipline->Size = System::Drawing::Size(75, 23);
			this->btnAddDiscipline->TabIndex = 11;
			this->btnAddDiscipline->Text = L"Добавить";
			this->btnAddDiscipline->UseVisualStyleBackColor = true;
			this->btnAddDiscipline->Click += gcnew System::EventHandler(this, &MyForm::btnAddDiscipline_Click);
			// 
			// listViewDisciplinesList
			// 
			this->listViewDisciplinesList->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(1) { this->colDisciplineName });
			this->listViewDisciplinesList->Location = System::Drawing::Point(390, 23);
			this->listViewDisciplinesList->Name = L"listViewDisciplinesList";
			this->listViewDisciplinesList->Size = System::Drawing::Size(170, 157);
			this->listViewDisciplinesList->TabIndex = 12;
			this->listViewDisciplinesList->UseCompatibleStateImageBehavior = false;
			this->listViewDisciplinesList->View = System::Windows::Forms::View::Details;
			// 
			// colDisciplineName
			// 
			this->colDisciplineName->Text = L"Название";
			this->colDisciplineName->Width = 166;
			// 
			// btnRemoveDisciplineFromList
			// 
			this->btnRemoveDisciplineFromList->Location = System::Drawing::Point(566, 23);
			this->btnRemoveDisciplineFromList->Name = L"btnRemoveDisciplineFromList";
			this->btnRemoveDisciplineFromList->Size = System::Drawing::Size(75, 23);
			this->btnRemoveDisciplineFromList->TabIndex = 13;
			this->btnRemoveDisciplineFromList->Text = L"Очистить";
			this->btnRemoveDisciplineFromList->UseVisualStyleBackColor = true;
			this->btnRemoveDisciplineFromList->Click += gcnew System::EventHandler(this, &MyForm::btnRemoveDisciplineFromList_Click);
			// 
			// btnSetDisciplinesForStudent
			// 
			this->btnSetDisciplinesForStudent->Location = System::Drawing::Point(306, 49);
			this->btnSetDisciplinesForStudent->Name = L"btnSetDisciplinesForStudent";
			this->btnSetDisciplinesForStudent->Size = System::Drawing::Size(78, 22);
			this->btnSetDisciplinesForStudent->TabIndex = 14;
			this->btnSetDisciplinesForStudent->Text = L"<-Назначить";
			this->btnSetDisciplinesForStudent->UseVisualStyleBackColor = true;
			this->btnSetDisciplinesForStudent->Click += gcnew System::EventHandler(this, &MyForm::btnSetDisciplinesForStudent_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(387, 185);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(122, 13);
			this->label5->TabIndex = 16;
			this->label5->Text = L"Название дисциплины";
			// 
			// listViewGradebooksNumbers
			// 
			this->listViewGradebooksNumbers->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(1) { this->colGradebooksNumbers });
			this->listViewGradebooksNumbers->Location = System::Drawing::Point(670, 23);
			this->listViewGradebooksNumbers->Name = L"listViewGradebooksNumbers";
			this->listViewGradebooksNumbers->Size = System::Drawing::Size(157, 157);
			this->listViewGradebooksNumbers->TabIndex = 17;
			this->listViewGradebooksNumbers->UseCompatibleStateImageBehavior = false;
			this->listViewGradebooksNumbers->View = System::Windows::Forms::View::Details;
			// 
			// colGradebooksNumbers
			// 
			this->colGradebooksNumbers->Text = L"Зачетная книжка";
			this->colGradebooksNumbers->Width = 153;
			// 
			// btnSearchByDisciplines
			// 
			this->btnSearchByDisciplines->Location = System::Drawing::Point(306, 127);
			this->btnSearchByDisciplines->Name = L"btnSearchByDisciplines";
			this->btnSearchByDisciplines->Size = System::Drawing::Size(75, 23);
			this->btnSearchByDisciplines->TabIndex = 18;
			this->btnSearchByDisciplines->Text = L"Найти";
			this->btnSearchByDisciplines->UseVisualStyleBackColor = true;
			this->btnSearchByDisciplines->Click += gcnew System::EventHandler(this, &MyForm::btnSearchByDisciplines_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(670, 4);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(157, 13);
			this->label6->TabIndex = 20;
			this->label6->Text = L"Найденные зачетные книжки";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(863, 480);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->btnSearchByDisciplines);
			this->Controls->Add(this->listViewGradebooksNumbers);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->btnSetDisciplinesForStudent);
			this->Controls->Add(this->btnRemoveDisciplineFromList);
			this->Controls->Add(this->listViewDisciplinesList);
			this->Controls->Add(this->btnAddDiscipline);
			this->Controls->Add(this->txtDiscipline);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->btnRemoveStudent);
			this->Controls->Add(this->listViewJournal);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtGradebookNumber);
			this->Controls->Add(this->txtStudentName);
			this->Controls->Add(this->btnAddStudent);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		StudentJournal^ Journal = gcnew StudentJournal();
		List<String^>^ DisciplinesList = gcnew List<String^>();
		List<String^>^ GradebooksNumbers = gcnew List<String^>();

		Void MyForm::RefreshListViewJournal() // обновление окошка. Очищаем все записи в окне, а затем создаем новые из массива студентов в журнале
		{
			listViewJournal->Items->Clear();

			List<Student^>^ listFromJournal = Journal->GetJournal();
			for each (Student^ student in listFromJournal)
			{
				ListViewItem^ item = gcnew ListViewItem(student->GetStudentName());
				ListViewItem::ListViewSubItem^ subItem = gcnew ListViewItem::ListViewSubItem();
				item->SubItems->Add(student->GetGradebookNumber());

				listViewJournal->Items->Add(item);
			}
		}


		Void MyForm::RefreshListViewDisciplinesList()
		{
			listViewDisciplinesList->Items->Clear();


			for each (String^ discipline in DisciplinesList)
			{
				ListViewItem^ item = gcnew ListViewItem(discipline);


				listViewDisciplinesList->Items->Add(item);
			}
		}

		Void MyForm::RefreshlistViewGradebooksNumbers()
		{
			listViewGradebooksNumbers->Items->Clear();


			for each (String^ gradebookNumber in GradebooksNumbers)
			{
				ListViewItem^ item = gcnew ListViewItem(gradebookNumber);


				listViewGradebooksNumbers->Items->Add(item);
			}
		}

	private: System::Void btnAddStudent_Click(System::Object^  sender, System::EventArgs^  e) {

		if ((txtStudentName->Text != "") && (txtGradebookNumber->Text != ""))
		{
			String^ studentName = txtStudentName->Text;
			String^ gradeBookNumber = txtGradebookNumber->Text;
			Student^ student = gcnew Student(studentName, gradeBookNumber);
			Journal->AddToJournal(student);

			txtStudentName->Text = "";
			txtGradebookNumber->Text = "";
			this->RefreshListViewJournal();
		}

	}

	private: System::Void btnRemoveStudent_Click(System::Object^  sender, System::EventArgs^  e) {

		/*if ((txtStudentName->Text != "") && (txtGradebookNumber->Text != ""))
		{
			String^ studentName = txtStudentName->Text;
			String^ gradeBookNumber = txtGradebookNumber->Text;
			Student^ student = gcnew Student(studentName, gradeBookNumber);
			Journal->RemoveFromJournal(student);

			txtStudentName->Text = "";
			txtGradebookNumber->Text = "";
			this->RefreshListViewJournal();
		} */
		// на случай удаления через текстбоксы

		for each (ListViewItem^ selectedItem in listViewJournal->SelectedItems)
		{
			String^ studentName = selectedItem->SubItems[0]->Text;
			String^ gradebookNumber = selectedItem->SubItems[1]->Text;
			Student^ student = gcnew Student(studentName, gradebookNumber);
			Journal->RemoveFromJournal(student);
		}
		RefreshListViewJournal();
	}



	private: System::Void btnAddDiscipline_Click(System::Object^  sender, System::EventArgs^  e) {

		if (txtDiscipline->Text != "")
		{
			String^ discipline = txtDiscipline->Text;
			DisciplinesList->Add(discipline);
			txtDiscipline->Text = "";
			RefreshListViewDisciplinesList();
		}

	}
	private: System::Void btnRemoveDisciplineFromList_Click(System::Object^  sender, System::EventArgs^  e) {

		DisciplinesList = gcnew List<String^>();
		listViewDisciplinesList->Items->Clear();
	}
	private: System::Void btnSetDisciplinesForStudent_Click(System::Object^  sender, System::EventArgs^  e) {


		for each (ListViewItem^ selectedItem in listViewJournal->SelectedItems)// для каждого выбранного студента в окне
		{
			String^ studentName = selectedItem->SubItems[0]->Text;// получаем данные, создаем двух студентов
			String^ gradebookNumber = selectedItem->SubItems[1]->Text;
			Student^ student1 = gcnew Student(studentName, gradebookNumber);// 
			Student^ student2 = gcnew Student(studentName, gradebookNumber);
			for each (String^ discipline in DisciplinesList)
			{
				student2->AddDiscipline(discipline);// добавляем дисциплины в студента
			}
			Journal->RemoveFromJournal(student1);// удаляем старого студента без дисциплин и заменяем новым
			Journal->AddToJournal(student2);
			if (student2->GetDisciplinesList()->Count != 0)
				MessageBox::Show("Дисциплины добавлены");
		}


	}


	private: System::Void btnSearchByDisciplines_Click(System::Object^  sender, System::EventArgs^  e) {


		List<Student^>^ searchedStudents = Journal->SearchByDisciplines(DisciplinesList);// находим студентов по списку дисциплин


		for each (Student^ student in searchedStudents)
		{
			String^ gradebookNumber = student->GetGradebookNumber();// получаем номер зачетки студента
			GradebooksNumbers->Add(gradebookNumber);// добавляем его в массив номеров зачеток
		}

		MessageBox::Show("Найдено: " + GradebooksNumbers->Count);
		RefreshlistViewGradebooksNumbers();
		GradebooksNumbers = gcnew List<String^>();



	}
	private: System::Void txtDiscipline_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {

		int key = e->KeyChar;
		if (key == 13)
		{
			btnAddDiscipline_Click(sender, e);
		}
	}

	private: System::Void listViewJournal_DoubleClick(System::Object^  sender, System::EventArgs^  e) {
		if (listViewJournal->SelectedItems->Count > 0)
		{
			ListViewItem^ selectedItem = listViewJournal->SelectedItems[0];
			Student^ student = GetStudent(selectedItem);

			StudentInfoForm^ form = gcnew StudentInfoForm(student);
			form->ShowDialog();
		}
	}


	private:
		Student^ GetStudent(ListViewItem^ selectedItem)// метод формирования студента из листвью
		{
			String^ studentName = selectedItem->SubItems[0]->Text;// получаем данные
			String^ gradebookNumber = selectedItem->SubItems[1]->Text;
			Student^ student = gcnew Student(studentName, gradebookNumber);

			List<Student^>^ tempJournal = Journal->GetJournal();// создаем временный журнал 
			for (int i = 0; i < tempJournal->Count; i++)// для каждого студента в журнале
			{
				if ((tempJournal[i]->GetStudentName() == student->GetStudentName()) && (tempJournal[i]->GetGradebookNumber() == student->GetGradebookNumber()))
				{ // если студент из окна является студнтом из журнала
					List<String^>^ tempDisciplines = tempJournal[i]->GetDisciplinesList();// получаем его список дисциплин
					for (int k = 0; k < tempDisciplines->Count; k++)// и каждую добавляем в список для дисциплин
					{
						student->AddDiscipline(tempDisciplines[k]);// добавляем студенту дисциплину
					}
				}
			}

			return student;
		}
	};
}
