#pragma once

#include "../individualForm/Student.h"

namespace individualForm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ StudentInfoForm
	/// </summary>
	public ref class StudentInfoForm : public System::Windows::Forms::Form
	{
	public:
		StudentInfoForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

		StudentInfoForm(Student^ student)// конструктор формы
		{
			InitializeComponent();
			
			this->Text = student->GetStudentName();// текст формы = имени

			txtName->Text = student->GetStudentName();// получение имени и занесение в текст бокс
			txtGradebookNumber->Text = student->GetGradebookNumber();
			txtDisciplinesList->Text = String::Join("\r\n", student->GetDisciplinesList());// вывод дисциплин с новой строки
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~StudentInfoForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  txtName;
	private: System::Windows::Forms::TextBox^  txtGradebookNumber;
	private: System::Windows::Forms::TextBox^  txtDisciplinesList;
	protected:

	protected:



	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->txtGradebookNumber = (gcnew System::Windows::Forms::TextBox());
			this->txtDisciplinesList = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// txtName
			// 
			this->txtName->BackColor = System::Drawing::Color::White;
			this->txtName->Location = System::Drawing::Point(12, 21);
			this->txtName->Name = L"txtName";
			this->txtName->ReadOnly = true;
			this->txtName->Size = System::Drawing::Size(138, 20);
			this->txtName->TabIndex = 0;
			// 
			// txtGradebookNumber
			// 
			this->txtGradebookNumber->BackColor = System::Drawing::Color::White;
			this->txtGradebookNumber->Location = System::Drawing::Point(172, 21);
			this->txtGradebookNumber->Name = L"txtGradebookNumber";
			this->txtGradebookNumber->ReadOnly = true;
			this->txtGradebookNumber->Size = System::Drawing::Size(100, 20);
			this->txtGradebookNumber->TabIndex = 1;
			// 
			// txtDisciplinesList
			// 
			this->txtDisciplinesList->BackColor = System::Drawing::Color::White;
			this->txtDisciplinesList->Location = System::Drawing::Point(12, 73);
			this->txtDisciplinesList->Multiline = true;
			this->txtDisciplinesList->Name = L"txtDisciplinesList";
			this->txtDisciplinesList->ReadOnly = true;
			this->txtDisciplinesList->Size = System::Drawing::Size(260, 176);
			this->txtDisciplinesList->TabIndex = 2;
			// 
			// StudentInfoForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->txtDisciplinesList);
			this->Controls->Add(this->txtGradebookNumber);
			this->Controls->Add(this->txtName);
			this->Name = L"StudentInfoForm";
			this->Text = L"StudentInfoForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
