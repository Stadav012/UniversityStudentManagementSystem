#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Users.h"
#include <cliext/list>
#include <cliext/vector>

using namespace MySql::Data::MySqlClient;


namespace UniversityStudentManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Faculty
	/// </summary>
	public ref class Faculty : public System::Windows::Forms::Form
	{
	public:
		// Composition: Users is a member of Faculty
		Users* user;

		int faculty_id;
		String^ dateOfAppointment;
		String^ department;
	private: System::Windows::Forms::Button^ viewStudents_Click;
	private: System::Windows::Forms::Button^ viewCourses;
	private: System::Windows::Forms::Button^ viewAssignments;
	private: System::Windows::Forms::Button^ Grade;
	private: System::Windows::Forms::TextBox^ gradeTextBox;



	public:
		cliext::vector<String^> listOfTeachingCourses;

		// Constructor
		Faculty(int id, const string& first, const string& last, const string& mail,
			const string& pass, int facID, const string& appointmentDate,
			const string& dept, const vector<string>& courses)
		{
			InitializeComponent();

			// Initialize the Users instance
			user = new Users(id, gcnew String(first.c_str()), gcnew String(last.c_str()), gcnew String(mail.c_str()), gcnew String(pass.c_str()));

			// Initialize Faculty-specific attributes
			faculty_id = facID;
			dateOfAppointment = gcnew String(appointmentDate.c_str());
			department = gcnew String(dept.c_str());
			for (int i = 0; i < courses.size(); i++) {
				listOfTeachingCourses.push_back(gcnew String(courses[i].c_str()));
			}
		}

		void enterGrades() {
			// Use user->methods or properties if needed
		}

		void viewRoster() {
			// show a list of students in the course on the dataGridView
			try {
				// Connect to the database
				MySqlConnection^ sqlConn = gcnew MySqlConnection("datasource=localhost; port=3306; username=root; password=''; database=ashesi");
				sqlConn->Open();

				// Prepare SQL command
				MySqlCommand^ sqlCmd = gcnew MySqlCommand("SELECT Students.student_id, Students.fname, Students.lname, Students.email, Courses.courseName FROM Enrollments INNER JOIN Students ON Enrollments.student_id = Students.student_id INNER JOIN Courses ON Enrollments.course_id = Courses.course_id WHERE Courses.faculty_id = @facultyID;", sqlConn);
				sqlCmd->Parameters->AddWithValue("@facultyID", faculty_id);

				// Execute and load data
				MySqlDataAdapter^ sqlDa = gcnew MySqlDataAdapter(sqlCmd);
				DataTable^ dt = gcnew DataTable();
				sqlDa->Fill(dt);

				// Bind data to DataGridView
				dataGridView1->DataSource = dt;

				sqlConn->Close();
			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->Message);
			}
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Faculty()
		{
			if (components)
			{
				delete components;
			}
			delete user; // Clean up the Users instance
		}

	private: System::Windows::Forms::MenuStrip^ menuStrip1;









	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;

	private: System::Windows::Forms::Button^ deleteButton;



	protected:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->deleteButton = (gcnew System::Windows::Forms::Button());
			this->viewStudents_Click = (gcnew System::Windows::Forms::Button());
			this->viewCourses = (gcnew System::Windows::Forms::Button());
			this->viewAssignments = (gcnew System::Windows::Forms::Button());
			this->Grade = (gcnew System::Windows::Forms::Button());
			this->gradeTextBox = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 1, 0, 1);
			this->menuStrip1->Size = System::Drawing::Size(1051, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &Faculty::menuStrip1_ItemClicked);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Red;
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(927, 2);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(113, 21);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Close";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Faculty::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(276, 136);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(522, 188);
			this->dataGridView1->TabIndex = 6;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Faculty::dataGridView1_CellContentClick);
			// 
			// deleteButton
			// 
			this->deleteButton->BackColor = System::Drawing::Color::Red;
			this->deleteButton->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->deleteButton->Location = System::Drawing::Point(137, 1);
			this->deleteButton->Margin = System::Windows::Forms::Padding(2);
			this->deleteButton->Name = L"deleteButton";
			this->deleteButton->Size = System::Drawing::Size(125, 23);
			this->deleteButton->TabIndex = 8;
			this->deleteButton->Text = L"DELETE student";
			this->deleteButton->UseVisualStyleBackColor = false;
			this->deleteButton->Click += gcnew System::EventHandler(this, &Faculty::DELETE_Click);
			// 
			// viewStudents_Click
			// 
			this->viewStudents_Click->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->viewStudents_Click->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->viewStudents_Click->Location = System::Drawing::Point(0, 0);
			this->viewStudents_Click->Name = L"viewStudents_Click";
			this->viewStudents_Click->Size = System::Drawing::Size(121, 24);
			this->viewStudents_Click->TabIndex = 11;
			this->viewStudents_Click->Text = L"viewStudents";
			this->viewStudents_Click->UseVisualStyleBackColor = false;
			this->viewStudents_Click->Click += gcnew System::EventHandler(this, &Faculty::viewStudents_Click_Click);
			// 
			// viewCourses
			// 
			this->viewCourses->BackColor = System::Drawing::Color::Brown;
			this->viewCourses->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->viewCourses->Location = System::Drawing::Point(378, 0);
			this->viewCourses->Name = L"viewCourses";
			this->viewCourses->Size = System::Drawing::Size(121, 24);
			this->viewCourses->TabIndex = 13;
			this->viewCourses->Text = L"viewCourses";
			this->viewCourses->UseVisualStyleBackColor = false;
			this->viewCourses->Click += gcnew System::EventHandler(this, &Faculty::viewCourses_Click);
			// 
			// viewAssignments
			// 
			this->viewAssignments->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->viewAssignments->Location = System::Drawing::Point(617, 2);
			this->viewAssignments->Name = L"viewAssignments";
			this->viewAssignments->Size = System::Drawing::Size(121, 24);
			this->viewAssignments->TabIndex = 15;
			this->viewAssignments->Text = L"viewAssignments";
			this->viewAssignments->UseVisualStyleBackColor = false;
			this->viewAssignments->Click += gcnew System::EventHandler(this, &Faculty::viewAssignments_Click);
			// 
			// Grade
			// 
			this->Grade->BackColor = System::Drawing::SystemColors::ControlDark;
			this->Grade->Location = System::Drawing::Point(822, 1);
			this->Grade->Margin = System::Windows::Forms::Padding(2);
			this->Grade->Name = L"Grade";
			this->Grade->Size = System::Drawing::Size(69, 23);
			this->Grade->TabIndex = 16;
			this->Grade->Text = L"Grade";
			this->Grade->UseVisualStyleBackColor = false;
			this->Grade->Click += gcnew System::EventHandler(this, &Faculty::Grade_Click);
			// 
			// gradeTextBox
			// 
			this->gradeTextBox->BackColor = System::Drawing::SystemColors::Info;
			this->gradeTextBox->Location = System::Drawing::Point(744, 3);
			this->gradeTextBox->MaxLength = 3;
			this->gradeTextBox->Name = L"gradeTextBox";
			this->gradeTextBox->Size = System::Drawing::Size(73, 20);
			this->gradeTextBox->TabIndex = 18;
			this->gradeTextBox->Text = L"enter grade";
			this->gradeTextBox->TextChanged += gcnew System::EventHandler(this, &Faculty::gradeTextBox_TextChanged);
			// 
			// Faculty
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1051, 469);
			this->Controls->Add(this->gradeTextBox);
			this->Controls->Add(this->Grade);
			this->Controls->Add(this->viewAssignments);
			this->Controls->Add(this->viewCourses);
			this->Controls->Add(this->viewStudents_Click);
			this->Controls->Add(this->deleteButton);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Faculty";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Faculty";
			this->TransparencyKey = System::Drawing::Color::Black;
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Faculty::Student_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Student_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void menuStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
	}

	private: System::Void dashboardToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void DELETE_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		if (dataGridView1->SelectedRows->Count > 0) {
			int studentID = Convert::ToInt32(dataGridView1->SelectedRows[0]->Cells["student_id"]->Value);

			// Connect to the database
			MySqlConnection^ sqlConn = gcnew MySqlConnection("datasource=localhost; port=3306; username=root; password=''; database=ashesi");
			sqlConn->Open();

			// Prepare SQL delete command
			MySqlCommand^ sqlCmd = gcnew MySqlCommand("DELETE FROM Enrollments WHERE student_id = @studentID;", sqlConn);
			sqlCmd->Parameters->AddWithValue("@studentID", studentID);
			sqlCmd->ExecuteNonQuery();

			sqlConn->Close();

			// Refresh the DataGridView
			viewStudents_Click_Click(sender, e);
		}
		else {
			MessageBox::Show("Please select a student to delete.");
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}


private: System::Void viewStudents_Click_Click(System::Object^ sender, System::EventArgs^ e) {
	viewRoster();

}
private: System::Void viewCourses_Click(System::Object^ sender, System::EventArgs^ e) {
	// show a list of courses the faculty is teaching on the dataGridView
	try {
		// Connect to the database
		MySqlConnection^ sqlConn = gcnew MySqlConnection("datasource=localhost; port=3306; username=root; password=''; database=ashesi");
		sqlConn->Open();

		// Prepare SQL command
		MySqlCommand^ sqlCmd = gcnew MySqlCommand("SELECT courseName FROM Courses WHERE faculty_id = @facultyID;", sqlConn);
		sqlCmd->Parameters->AddWithValue("@facultyID", faculty_id);

		// Execute and load data
		MySqlDataAdapter^ sqlDa = gcnew MySqlDataAdapter(sqlCmd);
		DataTable^ dt = gcnew DataTable();
		sqlDa->Fill(dt);

		// Bind data to DataGridView
		dataGridView1->DataSource = dt;

		sqlConn->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
private: System::Void Grade_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		if (dataGridView1->SelectedRows->Count > 0) {
			int assignmentID = Convert::ToInt32(dataGridView1->SelectedRows[0]->Cells["AssignmentID"]->Value);
			int studentID = Convert::ToInt32(dataGridView1->SelectedRows[0]->Cells["student_id"]->Value);
			int grade = Convert::ToInt32(gradeTextBox->Text);

			MySqlConnection^ sqlConn = gcnew MySqlConnection("datasource=localhost; port=3306; username=root; password=''; database=ashesi");
			sqlConn->Open();

			MySqlCommand^ sqlCmd = gcnew MySqlCommand("UPDATE Submissions SET Grade = @grade WHERE assignment_id = @assignmentID AND student_id = @studentID;", sqlConn);
			sqlCmd->Parameters->AddWithValue("@grade", grade);
			sqlCmd->Parameters->AddWithValue("@assignmentID", assignmentID);
			sqlCmd->Parameters->AddWithValue("@studentID", studentID);

			sqlCmd->ExecuteNonQuery();
			sqlConn->Close();

			MessageBox::Show("Grade updated successfully!");
			viewAssignments_Click(sender, e);
		}
		else {
			MessageBox::Show("Please select a submission to grade.");
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
private: System::Void viewAssignments_Click(System::Object^ sender, System::EventArgs^ e) {
	// show a list of assignments for the course on the dataGridView
	try {
		// Connect to the database
		MySqlConnection^ sqlConn = gcnew MySqlConnection("datasource=localhost; port=3306; username=root; password=''; database=ashesi");
		sqlConn->Open();


		// Prepare SQL command
		String^ sqlstmt = "SELECT Assignments.AssignmentID, Assignments.Title, Submissions.student_id, Submissions.Grade, Submissions.Total_Points FROM Submissions INNER JOIN Assignments ON Submissions.assignment_id = Assignments.AssignmentID WHERE Assignments.course_id IN(SELECT course_id FROM Courses WHERE faculty_id = @facultyID);";	

		MySqlCommand^ sqlCmd = gcnew MySqlCommand(sqlstmt, sqlConn);

		sqlCmd->Parameters->AddWithValue("@facultyID", faculty_id);

		// Execute and load data
		MySqlDataAdapter^ sqlDa = gcnew MySqlDataAdapter(sqlCmd);
		DataTable^ dt = gcnew DataTable();
		sqlDa->Fill(dt);

		// Bind data to DataGridView
		dataGridView1->DataSource = dt;

		sqlConn->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
private: System::Void gradeTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
