#pragma once

#include "DatabaseHelper.h" 
#include <iostream>
#include <string>
#include <ctime> // Include for std::tm




using namespace System::IO;

namespace UniversityStudentManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Admin1
	/// 



	public ref class Admin1 : public System::Windows::Forms::Form {
	private:
		String^ adminName;
		int adminID;

		// UI elements for dynamic content
		DataGridView^ gridView;
		Button^ actionButton;
		Label^ titleLabel;
	private: System::Windows::Forms::Button^ Close;

		// Container for components
		System::ComponentModel::Container^ components;

	public:
		Admin1(int id, String^ name) {
			InitializeComponent();
			this->adminID = id;
			this->adminName = name;
			this->Text = "Admin Panel - Welcome, " + name;
			InitializeDynamicComponents();
		}

	protected:
		~Admin1() {
			if (components) {
				delete components;
			}
		}

	private:
		System::Windows::Forms::MenuStrip^ menuStrip1;
		System::Windows::Forms::ToolStripMenuItem^ manageStudents;
		System::Windows::Forms::ToolStripMenuItem^ deleteStudentToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ editStudentToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ addStudentToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ manageFaculty;
		System::Windows::Forms::ToolStripMenuItem^ deleteFacultyToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ editFacultyToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ addFacultyToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ manageCourses;
		System::Windows::Forms::ToolStripMenuItem^ deleteCourseToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ editCourseToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ addCourseToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;
		System::Windows::Forms::ToolStripMenuItem^ viewFinancialsToolStripMenuItem;
		System::Windows::Forms::Button^ button1;

		void InitializeComponent(void) {
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->manageStudents = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deleteStudentToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editStudentToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->addStudentToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->manageFaculty = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deleteFacultyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editFacultyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->addFacultyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->manageCourses = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deleteCourseToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editCourseToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->addCourseToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->viewFinancialsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Close = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->manageStudents, this->manageFaculty,
					this->manageCourses, this->toolStripMenuItem1
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(794, 24);
			this->menuStrip1->TabIndex = 0;
			// 
			// manageStudents
			// 
			this->manageStudents->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->deleteStudentToolStripMenuItem,
					this->editStudentToolStripMenuItem, this->addStudentToolStripMenuItem
			});
			this->manageStudents->Name = L"manageStudents";
			this->manageStudents->Size = System::Drawing::Size(111, 20);
			this->manageStudents->Text = L"Manage Students";
			// 
			// deleteStudentToolStripMenuItem
			// 
			this->deleteStudentToolStripMenuItem->Name = L"deleteStudentToolStripMenuItem";
			this->deleteStudentToolStripMenuItem->Size = System::Drawing::Size(151, 22);
			this->deleteStudentToolStripMenuItem->Text = L"Delete Student";
			this->deleteStudentToolStripMenuItem->Click += gcnew System::EventHandler(this, &Admin1::deleteStudentToolStripMenuItem_Click);
			// 
			// editStudentToolStripMenuItem
			// 
			this->editStudentToolStripMenuItem->Name = L"editStudentToolStripMenuItem";
			this->editStudentToolStripMenuItem->Size = System::Drawing::Size(151, 22);
			this->editStudentToolStripMenuItem->Text = L"Edit Student";
			this->editStudentToolStripMenuItem->Click += gcnew System::EventHandler(this, &Admin1::editStudentToolStripMenuItem_Click);
			// 
			// addStudentToolStripMenuItem
			// 
			this->addStudentToolStripMenuItem->Name = L"addStudentToolStripMenuItem";
			this->addStudentToolStripMenuItem->Size = System::Drawing::Size(151, 22);
			this->addStudentToolStripMenuItem->Text = L"Add Student";
			this->addStudentToolStripMenuItem->Click += gcnew System::EventHandler(this, &Admin1::addStudentToolStripMenuItem_Click);
			// 
			// manageFaculty
			// 
			this->manageFaculty->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->deleteFacultyToolStripMenuItem,
					this->editFacultyToolStripMenuItem, this->addFacultyToolStripMenuItem
			});
			this->manageFaculty->Name = L"manageFaculty";
			this->manageFaculty->Size = System::Drawing::Size(103, 20);
			this->manageFaculty->Text = L"Manage Faculty";
			// 
			// deleteFacultyToolStripMenuItem
			// 
			this->deleteFacultyToolStripMenuItem->Name = L"deleteFacultyToolStripMenuItem";
			this->deleteFacultyToolStripMenuItem->Size = System::Drawing::Size(148, 22);
			this->deleteFacultyToolStripMenuItem->Text = L"Delete Faculty";
			this->deleteFacultyToolStripMenuItem->Click += gcnew System::EventHandler(this, &Admin1::deleteFacultyToolStripMenuItem_Click);
			// 
			// editFacultyToolStripMenuItem
			// 
			this->editFacultyToolStripMenuItem->Name = L"editFacultyToolStripMenuItem";
			this->editFacultyToolStripMenuItem->Size = System::Drawing::Size(148, 22);
			this->editFacultyToolStripMenuItem->Text = L"Edit Faculty";
			this->editFacultyToolStripMenuItem->Click += gcnew System::EventHandler(this, &Admin1::editFacultyToolStripMenuItem_Click);
			// 
			// addFacultyToolStripMenuItem
			// 
			this->addFacultyToolStripMenuItem->Name = L"addFacultyToolStripMenuItem";
			this->addFacultyToolStripMenuItem->Size = System::Drawing::Size(148, 22);
			this->addFacultyToolStripMenuItem->Text = L"Add Faculty";
			this->addFacultyToolStripMenuItem->Click += gcnew System::EventHandler(this, &Admin1::addFacultyToolStripMenuItem_Click);
			// 
			// manageCourses
			// 
			this->manageCourses->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->deleteCourseToolStripMenuItem,
					this->editCourseToolStripMenuItem, this->addCourseToolStripMenuItem
			});
			this->manageCourses->Name = L"manageCourses";
			this->manageCourses->Size = System::Drawing::Size(107, 20);
			this->manageCourses->Text = L"Manage Courses";
			// 
			// deleteCourseToolStripMenuItem
			// 
			this->deleteCourseToolStripMenuItem->Name = L"deleteCourseToolStripMenuItem";
			this->deleteCourseToolStripMenuItem->Size = System::Drawing::Size(147, 22);
			this->deleteCourseToolStripMenuItem->Text = L"Delete Course";
			this->deleteCourseToolStripMenuItem->Click += gcnew System::EventHandler(this, &Admin1::deleteCourseToolStripMenuItem_Click);
			// 
			// editCourseToolStripMenuItem
			// 
			this->editCourseToolStripMenuItem->Name = L"editCourseToolStripMenuItem";
			this->editCourseToolStripMenuItem->Size = System::Drawing::Size(147, 22);
			this->editCourseToolStripMenuItem->Text = L"Edit Course";
			this->editCourseToolStripMenuItem->Click += gcnew System::EventHandler(this, &Admin1::editCourseToolStripMenuItem_Click);
			// 
			// addCourseToolStripMenuItem
			// 
			this->addCourseToolStripMenuItem->Name = L"addCourseToolStripMenuItem";
			this->addCourseToolStripMenuItem->Size = System::Drawing::Size(147, 22);
			this->addCourseToolStripMenuItem->Text = L"Add Course";
			this->addCourseToolStripMenuItem->Click += gcnew System::EventHandler(this, &Admin1::addCourseToolStripMenuItem_Click);
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(12, 20);
			// 
			// viewFinancialsToolStripMenuItem
			// 
			this->viewFinancialsToolStripMenuItem->Name = L"viewFinancialsToolStripMenuItem";
			this->viewFinancialsToolStripMenuItem->Size = System::Drawing::Size(32, 19);
			this->viewFinancialsToolStripMenuItem->Text = L"View Financials";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(600, 40);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Generate Reports";
			this->button1->Click += gcnew System::EventHandler(this, &Admin1::GenerateReports);
			// 
			// Close
			// 
			this->Close->Location = System::Drawing::Point(543, 0);
			this->Close->Name = L"Close";
			this->Close->Size = System::Drawing::Size(75, 23);
			this->Close->TabIndex = 2;
			this->Close->Text = L"Close";
			this->Close->UseVisualStyleBackColor = true;
			this->Close->Click += gcnew System::EventHandler(this, &Admin1::Close_Click);
			// 
			// Admin1
			// 
			this->ClientSize = System::Drawing::Size(794, 261);
			this->Controls->Add(this->Close);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->button1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Admin1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Admin Panel";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

        void InitializeDynamicComponents() {
            this->titleLabel = gcnew Label();
            this->titleLabel->Location = Point(20, 50);
            this->titleLabel->Size = System::Drawing::Size(300, 30);
            this->titleLabel->Text = L"Welcome to Admin Panel";
            this->Controls->Add(this->titleLabel);

            this->gridView = gcnew DataGridView();
            this->gridView->Location = Point(20, 100);
            this->gridView->Size = System::Drawing::Size(760, 300);
            this->Controls->Add(this->gridView);

            this->actionButton = gcnew Button();
            this->actionButton->Location = Point(600, 420);
            this->actionButton->Size = System::Drawing::Size(100, 30);
            this->actionButton->Text = L"Action";
            this->Controls->Add(this->actionButton);

            // button to generate transcript for a student
            this->button1 = gcnew Button();
            this->button1->Location = Point(600, 500);
            this->button1->Size = System::Drawing::Size(200, 23);
            this->button1->Text = L"Generate Student Transcript";
            this->button1->Click += gcnew System::EventHandler(this, &Admin1::GenerateStudentTranscript);
            
            // Add the button to the form
            this->Controls->Add(this->button1);
        }

        void GenerateStudentTranscript(System::Object^ sender, System::EventArgs^ e) {
        // take the student id of the selected student in the grid view
        if (gridView->SelectedRows->Count == 0) {
        MessageBox::Show("Please select a student to generate a transcript for.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        return;
        }

        DataGridViewRow^ selectedRow = gridView->SelectedRows[0];
        int studentId = Convert::ToInt32(selectedRow->Cells["student_id"]->Value);

        DatabaseHelper^ db = gcnew DatabaseHelper();
        String^ query = "SELECT * FROM Students INNER JOIN Users on Students.user_id = Users.user_id WHERE student_id = " + studentId;
        DataTable^ studentData = db->GetData(query);

        if (studentData->Rows->Count == 0) {
        MessageBox::Show("Student not found.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        return;
        }

        // combine the student table with the submissions table and the assignments table and then write all the data to a file in a transcript format and save it to the desktop
        // the transcript should include the student's name, the course name, the assignment name, the assignment grade, the assignment Total score
        String^ transcriptQuery = "SELECT Users.fname, Users.lname, Courses.courseName, Assignments.Title, Submissions.grade,Submissions.Total_Points FROM Submissions INNER JOIN Assignments ON Submissions.assignment_id = Assignments.AssignmentID INNER JOIN Courses ON Assignments.course_id = Courses.course_id INNER JOIN Students ON Submissions.student_id = Students.student_id INNER JOIN Users ON Students.user_id = Users.user_id WHERE Students.student_id = " + studentId;

        DataTable^ transcriptData = db->GetData(transcriptQuery);

        if (transcriptData->Rows->Count == 0) {
        MessageBox::Show("No transcript data found for the selected student.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        return;
        }

        // Create the transcript file
        String^ transcriptPath = Environment::GetFolderPath(Environment::SpecialFolder::Desktop) + "\\transcript_" + studentId + ".txt";
        StreamWriter^ writer = gcnew StreamWriter(transcriptPath);

        // Write the transcript data to the file
        writer->WriteLine("Student Transcript\n");
        writer->WriteLine("Name: " + studentData->Rows[0]->default["fname"]->ToString() + " " + studentData->Rows[0]->default["lname"]->ToString());
        writer->WriteLine("Student ID: " + studentId + "\n");
        writer->WriteLine("Course\t\tAssignment\t\tGrade\t\tTotal Score\n");

        for each (DataRow ^ row in transcriptData->Rows) {
        writer->WriteLine(row["courseName"] + "\t\t" + row["Title"] + "\t\t" + row["grade"] + "\t\t" + row["Total_Points"]);
        }

        writer->Close();

		// open the transcript file
		System::Diagnostics::Process::Start(transcriptPath);

        // Notify the user
        MessageBox::Show("Transcript generated successfully! Saved to: " + transcriptPath, "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
        }

		// Student Management Event Handlers
		void deleteStudentToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			try {
				// Load students for deletion
				LoadStudentData();
				titleLabel->Text = "Delete Student";
				actionButton->Text = "Delete";
				actionButton->Tag = "DeleteStudent";

				// Attach the click event handler for deletion
				actionButton->Click += gcnew EventHandler(this, &Admin1::OnDeleteStudentClick);
			}
			catch (Exception^ ex) {
				MessageBox::Show("Error loading student data: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}

		void OnDeleteStudentClick(System::Object^ sender, System::EventArgs^ e) {
			try {
				// Get the selected row from the grid view
				if (gridView->SelectedRows->Count == 0) {
					MessageBox::Show("Please select a student to delete.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}
				DataGridViewRow^ selectedRow = gridView->SelectedRows[0];
				int studentId = Convert::ToInt32(selectedRow->Cells["student_id"]->Value);
				// Delete the student from the database
				DatabaseHelper^ db = gcnew DatabaseHelper();
				String^ query = "DELETE FROM Students WHERE student_id = " + studentId;
				db->ExecuteQuery(query);
				MessageBox::Show("Student deleted successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
				// Reload the student data
				LoadStudentData();
			}
			catch (Exception^ ex) {
				MessageBox::Show("Error deleting student: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}

		void editStudentToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			try {
				// Load students for editing
				LoadStudentData();
				titleLabel->Text = "Edit Student";
				actionButton->Text = "Edit";
				actionButton->Tag = "EditStudent";

				// Attach the click event handler for editing
				/*actionButton->Click += gcnew EventHandler(this, &Admin1::OnEditStudentClick);*/
			}
			catch (Exception^ ex) {
				MessageBox::Show("Error loading student data: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}

		void addStudentToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			// Open a new form to add a student
			Form^ addStudentForm = gcnew Form();
			addStudentForm->Text = "Add Student";
			addStudentForm->Size = System::Drawing::Size(500, 650);

			// Labels and TextBoxes for student details
			Label^ fnameLabel = gcnew Label();
			fnameLabel->Text = "First Name:";
			fnameLabel->Location = Point(20, 20);
			fnameLabel->Name = "fnameLabel";
			addStudentForm->Controls->Add(fnameLabel);

			TextBox^ fnameTextBox = gcnew TextBox();
			fnameTextBox->Location = Point(150, 20);
			fnameTextBox->Name = "fnameTextBox";
			addStudentForm->Controls->Add(fnameTextBox);

			Label^ lnameLabel = gcnew Label();
			lnameLabel->Text = "Last Name:";
			lnameLabel->Location = Point(20, 60);
			lnameLabel->Name = "lnameLabel";
			addStudentForm->Controls->Add(lnameLabel);

			TextBox^ lnameTextBox = gcnew TextBox();
			lnameTextBox->Location = Point(150, 60);
			lnameTextBox->Name = "lnameTextBox";
			addStudentForm->Controls->Add(lnameTextBox);

			Label^ usernameLabel = gcnew Label();
			usernameLabel->Text = "Username:";
			usernameLabel->Location = Point(20, 100);
			usernameLabel->Name = "usernameLabel";
			addStudentForm->Controls->Add(usernameLabel);

			TextBox^ usernameTextBox = gcnew TextBox();
			usernameTextBox->Location = Point(150, 100);
			usernameTextBox->Name = "usernameTextBox";
			addStudentForm->Controls->Add(usernameTextBox);

			Label^ emailLabel = gcnew Label();
			emailLabel->Text = "Email:";
			emailLabel->Location = Point(20, 140);
			emailLabel->Name = "emailLabel";
			addStudentForm->Controls->Add(emailLabel);

			TextBox^ emailTextBox = gcnew TextBox();
			emailTextBox->Location = Point(150, 140);
			emailTextBox->Name = "emailTextBox";
			addStudentForm->Controls->Add(emailTextBox);

			Label^ passwordLabel = gcnew Label();
			passwordLabel->Text = "Password:";
			passwordLabel->Location = Point(20, 180);
			passwordLabel->Name = "passwordLabel";
			addStudentForm->Controls->Add(passwordLabel);

			TextBox^ passwordTextBox = gcnew TextBox();
			passwordTextBox->Location = Point(150, 180);
			passwordTextBox->Name = "passwordTextBox";
			addStudentForm->Controls->Add(passwordTextBox);

			Label^ dobLabel = gcnew Label();
			dobLabel->Text = "Date of Birth:";
			dobLabel->Location = Point(20, 220);
			dobLabel->Name = "dobLabel";
			addStudentForm->Controls->Add(dobLabel);

			DateTimePicker^ dobPicker = gcnew DateTimePicker();
			dobPicker->Location = Point(150, 220);
			dobPicker->Name = "dobPicker";
			dobPicker->Format = DateTimePickerFormat::Short;
			addStudentForm->Controls->Add(dobPicker);

			Label^ majorLabel = gcnew Label();
			majorLabel->Text = "Major:";
			majorLabel->Location = Point(20, 260);
			majorLabel->Name = "majorLabel";
			addStudentForm->Controls->Add(majorLabel);

			ComboBox^ majorComboBox = gcnew ComboBox();
			majorComboBox->Location = Point(150, 260);
			majorComboBox->Name = "majorComboBox";
			majorComboBox->Items->Add("IT");
			majorComboBox->Items->Add("Law");
			majorComboBox->Items->Add("Business");
			majorComboBox->Items->Add("Engineering");
			addStudentForm->Controls->Add(majorComboBox);

			Label^ pictureLabel = gcnew Label();
			pictureLabel->Text = "Picture:";
			pictureLabel->Location = Point(20, 300);
			pictureLabel->Name = "pictureLabel";
			addStudentForm->Controls->Add(pictureLabel);

			TextBox^ pictureTextBox = gcnew TextBox();
			pictureTextBox->Location = Point(150, 300);
			pictureTextBox->Name = "pictureTextBox";
			addStudentForm->Controls->Add(pictureTextBox);

			Button^ submitButton = gcnew Button();
			submitButton->Text = "Add Student";
			submitButton->Location = Point(150, 360);
			submitButton->Click += gcnew System::EventHandler(this, &Admin1::SubmitAddStudentForm);
			addStudentForm->Controls->Add(submitButton);

			try {
				addStudentForm->ShowDialog();
			}
			catch (Exception^ ex) {
				MessageBox::Show("Error opening Add Student form: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}

		void BrowsePicture(System::Object^ sender, System::EventArgs^ e) {
			try {
				OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
				openFileDialog->Filter = "Image Files|*.jpg;*.jpeg;*.png;*.bmp;*.gif";
				openFileDialog->Title = "Select a Picture";

				if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
					// Get the form that contains the button
					Button^ browseButton = (Button^)sender;
					Form^ parentForm = browseButton->FindForm();

					// Find the pictureTextBox control
					TextBox^ pictureTextBox = (TextBox^)parentForm->Controls->Find("pictureTextBox", true)[0];
					pictureTextBox->Text = openFileDialog->FileName;
				}
			}
			catch (Exception^ ex) {
				MessageBox::Show("Error opening file dialog: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}




		void SubmitAddStudentForm(System::Object^ sender, System::EventArgs^ e) {
			try {
				Form^ addStudentForm = (Form^)dynamic_cast<Button^>(sender)->FindForm();

				TextBox^ fnameTextBox = (TextBox^)addStudentForm->Controls->Find("fnameTextBox", true)[0];
				TextBox^ lnameTextBox = (TextBox^)addStudentForm->Controls->Find("lnameTextBox", true)[0];
				TextBox^ usernameTextBox = (TextBox^)addStudentForm->Controls->Find("usernameTextBox", true)[0];
				TextBox^ emailTextBox = (TextBox^)addStudentForm->Controls->Find("emailTextBox", true)[0];
				TextBox^ passwordTextBox = (TextBox^)addStudentForm->Controls->Find("passwordTextBox", true)[0];
				DateTimePicker^ dobPicker = (DateTimePicker^)addStudentForm->Controls->Find("dobPicker", true)[0];
				ComboBox^ majorComboBox = (ComboBox^)addStudentForm->Controls->Find("majorComboBox", true)[0];
				TextBox^ pictureTextBox = (TextBox^)addStudentForm->Controls->Find("pictureTextBox", true)[0];

				String^ fname = fnameTextBox->Text;
				String^ lname = lnameTextBox->Text;
				String^ username = usernameTextBox->Text;
				String^ email = emailTextBox->Text;
				String^ password = passwordTextBox->Text;
				String^ dob = dobPicker->Value.ToString("yyyy-MM-dd");
				String^ major = majorComboBox->SelectedItem->ToString();
				String^ picturePath = pictureTextBox->Text;

				// Convert the picture to byte stream
				array<unsigned char>^ picture;
				try {
					FileStream^ fs = gcnew FileStream(picturePath, FileMode::Open, FileAccess::Read);
					BinaryReader^ br = gcnew BinaryReader(fs);
					picture = br->ReadBytes((int)fs->Length);
				}
				catch (Exception^ ex) {
					MessageBox::Show("Error reading picture: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}

				try {
					DatabaseHelper^ db = gcnew DatabaseHelper();
					String^ query = "INSERT INTO Users (fname, lname, username, role, email, password, DOB, picture) VALUES ('" + fname + "', '" + lname + "', '" + username + "', 'student', '" + email + "', '" + password + "', '" + dob + "', @picture)";
					MySqlParameter^ pictureParam = gcnew MySqlParameter("@picture", MySqlDbType::Blob);
					pictureParam->Value = picture;
					cli::array<MySqlParameter^>^ parameters = gcnew cli::array<MySqlParameter^>(1) { pictureParam };
					db->ExecuteQuery(query, parameters);

					query = "SELECT user_id FROM Users WHERE username = '" + username + "'";
					DataTable^ dt = db->GetData(query);
					int user_id = Convert::ToInt32(dt->Rows[0]->default["user_id"]);

					query = "INSERT INTO Students (user_id, major) VALUES (" + user_id + ", '" + major + "')";
					db->ExecuteQuery(query);

					MessageBox::Show("Student added successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
					addStudentForm->Close();
				}
				catch (Exception^ ex) {
					MessageBox::Show("Error adding student: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
			catch (Exception^ ex) {
				MessageBox::Show("Error casting sender to Form: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}

		// Faculty Management Event Handlers
		void deleteFacultyToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			try {
				// Load faculty for deletion
				LoadFacultyData();
				titleLabel->Text = "Delete Faculty";
				actionButton->Text = "Delete";
				actionButton->Tag = "DeleteFaculty";

				// Attach the click event handler for deletion

				// remove other event listeners
				actionButton->Click -= gcnew EventHandler(this, &Admin1::OnEditCourseClick);
				actionButton->Click -= gcnew EventHandler(this, &Admin1::OnDeleteCourseClick);
				actionButton->Click -= gcnew EventHandler(this, &Admin1::OnDeleteStudentClick);
				actionButton->Click -= gcnew EventHandler(this, &Admin1::OnEditFacultyClick);



				actionButton->Click += gcnew EventHandler(this, &Admin1::OnDeleteFacultyClick);
			}
			catch (Exception^ ex) {
				MessageBox::Show("Error loading faculty data: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}

		void OnDeleteFacultyClick(System::Object^ sender, System::EventArgs^ e) {
			try {
				// Get the selected row from the grid view
				if (gridView->SelectedRows->Count == 0) {
					MessageBox::Show("Please select a faculty member to delete.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}
				DataGridViewRow^ selectedRow = gridView->SelectedRows[0];
				int facultyId = Convert::ToInt32(selectedRow->Cells["faculty_id"]->Value);
				// Delete the faculty member from the database
				DatabaseHelper^ db = gcnew DatabaseHelper();
				String^ query = "DELETE FROM Faculty WHERE faculty_id = " + facultyId;
				db->ExecuteQuery(query);
				MessageBox::Show("Faculty member deleted successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
				// Reload the faculty data
				LoadFacultyData();
			}
			catch (Exception^ ex) {
				MessageBox::Show("Error deleting faculty: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}

		void editFacultyToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			try {
				// Load faculty data into the DataGridView
				LoadFacultyData();

				// Update the title and button text for the editing action
				titleLabel->Text = "Edit Faculty";
				actionButton->Text = "Edit";
				actionButton->Tag = "EditFaculty";

				// Attach the click event handler for editing

				// remove other event listeners
				actionButton->Click -= gcnew EventHandler(this, &Admin1::OnEditCourseClick);
				actionButton->Click -= gcnew EventHandler(this, &Admin1::OnDeleteCourseClick);
				actionButton->Click -= gcnew EventHandler(this, &Admin1::OnDeleteStudentClick);

				actionButton->Click += gcnew EventHandler(this, &Admin1::OnEditFacultyClick); // Attach edit handler
			}
			catch (Exception^ ex) {
				MessageBox::Show("Error loading faculty data: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}

		void OnEditFacultyClick(System::Object^ sender, System::EventArgs^ e) {
			try {
				// Get the selected row from the grid view
				if (gridView->SelectedRows->Count == 0) {
					MessageBox::Show("Please select a faculty member to edit.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}

				DataGridViewRow^ selectedRow = gridView->SelectedRows[0];
				int facultyId = Convert::ToInt32(selectedRow->Cells["faculty_id"]->Value);

				// Fetch faculty details from the database
				DatabaseHelper^ db = gcnew DatabaseHelper();
				String^ query = "SELECT faculty_id, fname, lname, email, password, DOB, picture, departmentName, appointmentDate FROM Faculty INNER JOIN Users ON Faculty.user_id = Users.user_id INNER JOIN Departments ON Faculty.department_id = Departments.department_id WHERE faculty_id = " + facultyId;
				DataTable^ facultyData = db->GetData(query);

				if (facultyData->Rows->Count == 0) {
					MessageBox::Show("Faculty member not found.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}

				// Open the edit form
				DataRow^ facultyRow = facultyData->Rows[0];
				OpenEditFacultyForm(facultyRow);
			}
			catch (Exception^ ex) {
				MessageBox::Show("Error editing faculty: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}

		void OpenEditFacultyForm(DataRow^ facultyRow) {
			Form^ editFacultyForm = gcnew Form();
			editFacultyForm->Text = "Edit Faculty";
			editFacultyForm->Size = System::Drawing::Size(400, 500);

			// First Name
			Label^ fnameLabel = gcnew Label();
			fnameLabel->Text = "First Name:";
			fnameLabel->Location = Point(20, 20);
			editFacultyForm->Controls->Add(fnameLabel);

			TextBox^ fnameTextBox = gcnew TextBox();
			fnameTextBox->Location = Point(150, 20);
			fnameTextBox->Name = "fnameTextBox";
			fnameTextBox->Text = facultyRow["fname"]->ToString();
			editFacultyForm->Controls->Add(fnameTextBox);

			// Last Name
			Label^ lnameLabel = gcnew Label();
			lnameLabel->Text = "Last Name:";
			lnameLabel->Location = Point(20, 60);
			editFacultyForm->Controls->Add(lnameLabel);

			TextBox^ lnameTextBox = gcnew TextBox();
			lnameTextBox->Location = Point(150, 60);
			lnameTextBox->Name = "lnameTextBox";
			lnameTextBox->Text = facultyRow["lname"]->ToString();
			editFacultyForm->Controls->Add(lnameTextBox);

			// Email
			Label^ emailLabel = gcnew Label();
			emailLabel->Text = "Email:";
			emailLabel->Location = Point(20, 100);
			editFacultyForm->Controls->Add(emailLabel);

			TextBox^ emailTextBox = gcnew TextBox();
			emailTextBox->Location = Point(150, 100);
			emailTextBox->Name = "emailTextBox";
			emailTextBox->Text = facultyRow["email"]->ToString();
			editFacultyForm->Controls->Add(emailTextBox);

			// Password
			Label^ passwordLabel = gcnew Label();
			passwordLabel->Text = "Password:";
			passwordLabel->Location = Point(20, 140);
			editFacultyForm->Controls->Add(passwordLabel);

			TextBox^ passwordTextBox = gcnew TextBox();
			passwordTextBox->Location = Point(150, 140);
			passwordTextBox->Name = "passwordTextBox";
			passwordTextBox->Text = facultyRow["password"]->ToString();
			editFacultyForm->Controls->Add(passwordTextBox);

			// DOB
			Label^ dobLabel = gcnew Label();
			dobLabel->Text = "Date of Birth:";
			dobLabel->Location = Point(20, 180);
			editFacultyForm->Controls->Add(dobLabel);

			DateTimePicker^ dobPicker = gcnew DateTimePicker();
			dobPicker->Location = Point(150, 180);
			dobPicker->Name = "dobPicker";
			dobPicker->Value = Convert::ToDateTime(facultyRow["DOB"]);
			editFacultyForm->Controls->Add(dobPicker);

			// Picture (optional)
			Label^ pictureLabel = gcnew Label();
			pictureLabel->Text = "Picture:";
			pictureLabel->Location = Point(20, 220);
			editFacultyForm->Controls->Add(pictureLabel);

			//PictureBox^ pictureBox = gcnew PictureBox();
			//pictureBox->Location = Point(150, 220);
			//pictureBox->Size = System::Drawing::Size(100, 100);
			//pictureBox->Name = "pictureBox";
			//if (facultyRow["picture"] != DBNull::Value) {
			//	pictureBox->Image = Image::FromFile(facultyRow["picture"]->ToString());
			//}
			//editFacultyForm->Controls->Add(pictureBox);

			// Department
			Label^ departmentLabel = gcnew Label();
			departmentLabel->Text = "Department:";
			departmentLabel->Location = Point(20, 340);
			editFacultyForm->Controls->Add(departmentLabel);

			TextBox^ departmentTextBox = gcnew TextBox();
			departmentTextBox->Location = Point(150, 340);
			departmentTextBox->Name = "departmentTextBox";
			departmentTextBox->Text = facultyRow["departmentName"]->ToString();  // Corrected field name here
			editFacultyForm->Controls->Add(departmentTextBox);


			// Appointment Date
			Label^ appointmentDateLabel = gcnew Label();
			appointmentDateLabel->Text = "Appointment Date:";
			appointmentDateLabel->Location = Point(20, 380);
			editFacultyForm->Controls->Add(appointmentDateLabel);

			DateTimePicker^ appointmentDatePicker = gcnew DateTimePicker();
			appointmentDatePicker->Location = Point(150, 380);
			appointmentDatePicker->Name = "appointmentDatePicker";
			appointmentDatePicker->Value = Convert::ToDateTime(facultyRow["appointmentDate"]);
			editFacultyForm->Controls->Add(appointmentDatePicker);

			// Submit Button
			Button^ submitButton = gcnew Button();
			submitButton->Text = "Save Changes";
			submitButton->Location = Point(150, 420);

			// Pass the editFacultyForm to OnSaveFacultyEdit
			submitButton->Click += gcnew EventHandler(this, &Admin1::OnSaveFacultyEdit);
			editFacultyForm->Controls->Add(submitButton);

			editFacultyForm->ShowDialog();
		}


		void OnSaveFacultyEdit(System::Object^ sender, System::EventArgs^ e) {
			try {
				// Assuming sender is the button that was clicked (submit button), and sender's parent is the editFacultyForm.
				Button^ submitButton = (Button^)sender;
                Form^ editFacultyForm = dynamic_cast<Form^>(submitButton->Parent);

				if (editFacultyForm == nullptr) {
					MessageBox::Show("Edit faculty form is not accessible.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}

				// Retrieve the data from the form's controls
				TextBox^ fnameTextBox = (TextBox^)editFacultyForm->Controls["fnameTextBox"];
				TextBox^ lnameTextBox = (TextBox^)editFacultyForm->Controls["lnameTextBox"];
				TextBox^ emailTextBox = (TextBox^)editFacultyForm->Controls["emailTextBox"];
				TextBox^ passwordTextBox = (TextBox^)editFacultyForm->Controls["passwordTextBox"];
				DateTimePicker^ dobPicker = (DateTimePicker^)editFacultyForm->Controls["dobPicker"];
				PictureBox^ pictureBox = (PictureBox^)editFacultyForm->Controls["pictureBox"];
				TextBox^ departmentTextBox = (TextBox^)editFacultyForm->Controls["departmentTextBox"];
				DateTimePicker^ appointmentDatePicker = (DateTimePicker^)editFacultyForm->Controls["appointmentDatePicker"];

				// Check if any of the required fields are null
				if (fnameTextBox == nullptr || lnameTextBox == nullptr || emailTextBox == nullptr || passwordTextBox == nullptr ||
					dobPicker == nullptr || departmentTextBox == nullptr || appointmentDatePicker == nullptr) {
					MessageBox::Show("Some fields are missing.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}

				// Get the selected row from the grid view
				if (gridView->SelectedRows->Count == 0) {
					MessageBox::Show("Please select a faculty member to edit.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}

				DataGridViewRow^ selectedRow = gridView->SelectedRows[0];
				int facultyId = Convert::ToInt32(selectedRow->Cells["faculty_id"]->Value);

				// Get department id from department name
				String^ query1 = "SELECT department_id FROM Departments WHERE departmentName = '" + departmentTextBox->Text + "'";
				DatabaseHelper^ db1 = gcnew DatabaseHelper();
				DataTable^ dt = db1->GetData(query1);
				int department_id = Convert::ToInt32(dt->Rows[0]->default["department_id"]);

				// Start by updating the Users table
				String^ queryUsers = "UPDATE Users SET fname = @fname, lname = @lname, email = @email, password = @password, DOB = @dob, picture = @picture WHERE user_id = (SELECT user_id FROM Faculty WHERE faculty_id = " + facultyId + ")";

				// Create the parameters for the Users update
				cli::array<MySqlParameter^>^ parametersUsers = gcnew cli::array<MySqlParameter^>(6);
				parametersUsers[0] = gcnew MySqlParameter("@fname", MySqlDbType::VarChar);
				parametersUsers[0]->Value = fnameTextBox->Text;
				parametersUsers[1] = gcnew MySqlParameter("@lname", MySqlDbType::VarChar);
				parametersUsers[1]->Value = lnameTextBox->Text;
				parametersUsers[2] = gcnew MySqlParameter("@email", MySqlDbType::VarChar);
				parametersUsers[2]->Value = emailTextBox->Text;
				parametersUsers[3] = gcnew MySqlParameter("@password", MySqlDbType::VarChar);
				parametersUsers[3]->Value = passwordTextBox->Text;
				parametersUsers[4] = gcnew MySqlParameter("@dob", MySqlDbType::DateTime);
				parametersUsers[4]->Value = dobPicker->Value;

				// Handle the picture field
				if (pictureBox != nullptr && pictureBox->Image != nullptr) {
					parametersUsers[5] = gcnew MySqlParameter("@picture", MySqlDbType::Blob);
					parametersUsers[5]->Value = pictureBox->ImageLocation;
				}
				else {
					parametersUsers[5] = gcnew MySqlParameter("@picture", MySqlDbType::Blob);
					parametersUsers[5]->Value = DBNull::Value;
				}

				DatabaseHelper^ db = gcnew DatabaseHelper();
				db->ExecuteQuery(queryUsers, parametersUsers);

				// Now update the Faculty table
				String^ queryFaculty = "UPDATE Faculty SET department_id = @department, appointmentDate = @appointmentDate WHERE faculty_id = " + facultyId;

				// Create the parameters for the Faculty update
				cli::array<MySqlParameter^>^ parametersFaculty = gcnew cli::array<MySqlParameter^>(2);
				parametersFaculty[0] = gcnew MySqlParameter("@department", MySqlDbType::Int32);
				parametersFaculty[0]->Value = department_id;
				parametersFaculty[1] = gcnew MySqlParameter("@appointmentDate", MySqlDbType::DateTime);
				parametersFaculty[1]->Value = appointmentDatePicker->Value;

				// Execute the query for Faculty table
				db->ExecuteQuery(queryFaculty, parametersFaculty);

				// Success message
				MessageBox::Show("Faculty member updated successfully.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

				// Close the edit form
				editFacultyForm->Close();

				// Refresh the grid view
				LoadFacultyData();
			}
			catch (Exception^ ex) {
				MessageBox::Show("Error saving faculty changes: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}






		void addFacultyToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			// Open a new form to add a faculty
			Form^ addFacultyForm = gcnew Form();
			addFacultyForm->Text = "Add Faculty";
			addFacultyForm->Size = System::Drawing::Size(400, 500);

			// Labels and TextBoxes for faculty details
			Label^ fnameLabel = gcnew Label();
			fnameLabel->Text = "First Name:";
			fnameLabel->Location = Point(20, 20);
			fnameLabel->Name = "fnameLabel";
			addFacultyForm->Controls->Add(fnameLabel);

			TextBox^ fnameTextBox = gcnew TextBox();
			fnameTextBox->Location = Point(150, 20);
			fnameTextBox->Name = "fnameTextBox";
			addFacultyForm->Controls->Add(fnameTextBox);

			Label^ lnameLabel = gcnew Label();
			lnameLabel->Text = "Last Name:";
			lnameLabel->Location = Point(20, 60);
			lnameLabel->Name = "lnameLabel";
			addFacultyForm->Controls->Add(lnameLabel);

			TextBox^ lnameTextBox = gcnew TextBox();
			lnameTextBox->Location = Point(150, 60);
			lnameTextBox->Name = "lnameTextBox";
			addFacultyForm->Controls->Add(lnameTextBox);

			Label^ usernameLabel = gcnew Label();
			usernameLabel->Text = "Username:";
			usernameLabel->Location = Point(20, 100);
			usernameLabel->Name = "usernameLabel";
			addFacultyForm->Controls->Add(usernameLabel);

			TextBox^ usernameTextBox = gcnew TextBox();
			usernameTextBox->Location = Point(150, 100);
			usernameTextBox->Name = "usernameTextBox";
			addFacultyForm->Controls->Add(usernameTextBox);

			Label^ emailLabel = gcnew Label();
			emailLabel->Text = "Email:";
			emailLabel->Location = Point(20, 140);
			emailLabel->Name = "emailLabel";
			addFacultyForm->Controls->Add(emailLabel);

			TextBox^ emailTextBox = gcnew TextBox();
			emailTextBox->Location = Point(150, 140);
			emailTextBox->Name = "emailTextBox";
			addFacultyForm->Controls->Add(emailTextBox);

			Label^ passwordLabel = gcnew Label();
			passwordLabel->Text = "Password:";
			passwordLabel->Location = Point(20, 180);
			passwordLabel->Name = "passwordLabel";
			addFacultyForm->Controls->Add(passwordLabel);

			TextBox^ passwordTextBox = gcnew TextBox();
			passwordTextBox->Location = Point(150, 180);
			passwordTextBox->Name = "passwordTextBox";
			addFacultyForm->Controls->Add(passwordTextBox);

			Label^ dobLabel = gcnew Label();
			dobLabel->Text = "Date of Birth:";
			dobLabel->Location = Point(20, 220);
			dobLabel->Name = "dobLabel";
			addFacultyForm->Controls->Add(dobLabel);

			DateTimePicker^ dobPicker = gcnew DateTimePicker();
			dobPicker->Location = Point(150, 220);
			dobPicker->Name = "dobPicker";
			addFacultyForm->Controls->Add(dobPicker);

			Label^ pictureLabel = gcnew Label();
			pictureLabel->Text = "Picture:";
			pictureLabel->Location = Point(20, 260);
			pictureLabel->Name = "pictureLabel";
			addFacultyForm->Controls->Add(pictureLabel);

			TextBox^ pictureTextBox = gcnew TextBox();
			pictureTextBox->Location = Point(150, 260);
			pictureTextBox->Name = "pictureTextBox";
			addFacultyForm->Controls->Add(pictureTextBox);

			Label^ departmentLabel = gcnew Label();
			departmentLabel->Text = "Department:";
			departmentLabel->Location = Point(20, 300);
			departmentLabel->Name = "departmentLabel";
			addFacultyForm->Controls->Add(departmentLabel);

			ComboBox^ departmentComboBox = gcnew ComboBox();
			departmentComboBox->Location = Point(150, 300);
			departmentComboBox->Name = "departmentComboBox";
			departmentComboBox->Items->Add("IT");
			departmentComboBox->Items->Add("Law");
			departmentComboBox->Items->Add("Business");
			departmentComboBox->Items->Add("Engineering");
			addFacultyForm->Controls->Add(departmentComboBox);

			Button^ submitButton = gcnew Button();
			submitButton->Text = "Add Faculty";
			submitButton->Location = Point(150, 340);
			submitButton->Click += gcnew System::EventHandler(this, &Admin1::SubmitAddFacultyForm);
			addFacultyForm->Controls->Add(submitButton);

			try {
				addFacultyForm->ShowDialog();
			}
			catch (Exception^ ex) {
				MessageBox::Show("Error opening Add Faculty form: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}

		void SubmitAddFacultyForm(System::Object^ sender, System::EventArgs^ e) {
			try {
				// Get the form that contains the button
				Form^ addFacultyForm = (Form^)dynamic_cast<Button^>(sender)->FindForm();

				// Get the form controls using Controls->Find
				TextBox^ fnameTextBox = (TextBox^)addFacultyForm->Controls->Find("fnameTextBox", true)[0];
				TextBox^ lnameTextBox = (TextBox^)addFacultyForm->Controls->Find("lnameTextBox", true)[0];
				TextBox^ usernameTextBox = (TextBox^)addFacultyForm->Controls->Find("usernameTextBox", true)[0];
				TextBox^ emailTextBox = (TextBox^)addFacultyForm->Controls->Find("emailTextBox", true)[0];
				TextBox^ passwordTextBox = (TextBox^)addFacultyForm->Controls->Find("passwordTextBox", true)[0];
				DateTimePicker^ dobPicker = (DateTimePicker^)addFacultyForm->Controls->Find("dobPicker", true)[0];
				TextBox^ pictureTextBox = (TextBox^)addFacultyForm->Controls->Find("pictureTextBox", true)[0];
				ComboBox^ departmentComboBox = (ComboBox^)addFacultyForm->Controls->Find("departmentComboBox", true)[0];

				String^ fname = fnameTextBox->Text;
				String^ lname = lnameTextBox->Text;
				String^ username = usernameTextBox->Text;
				String^ email = emailTextBox->Text;
				String^ password = passwordTextBox->Text;
				String^ dob = dobPicker->Value.ToString("yyyy-MM-dd");
				String^ pictureString = pictureTextBox->Text;

				// Convert the picture to byte stream
				array<unsigned char>^ picture;
				try {
					FileStream^ fs = gcnew FileStream(pictureString, FileMode::Open, FileAccess::Read);
					BinaryReader^ br = gcnew BinaryReader(fs);
					picture = br->ReadBytes((int)fs->Length);
				}
				catch (Exception^ ex) {
					MessageBox::Show("Error reading picture: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}

				String^ department = departmentComboBox->SelectedItem->ToString();

				try {
					DatabaseHelper^ db = gcnew DatabaseHelper();
					String^ query = "INSERT INTO Users (fname, lname, username, role, email, password, DOB, picture) VALUES ('" + fname + "', '" + lname + "', '" + username + "', 'faculty', '" + email + "', '" + password + "', '" + dob + "', @picture)";
					MySqlParameter^ pictureParam = gcnew MySqlParameter("@picture", MySqlDbType::Blob);
					pictureParam->Value = picture;
					cli::array<MySqlParameter^>^ parameters = gcnew cli::array<MySqlParameter^>(1) { pictureParam };
					db->ExecuteQuery(query, parameters);

					query = "SELECT user_id FROM Users WHERE username = '" + username + "'";
					DataTable^ dt = db->GetData(query);
					int user_id = Convert::ToInt32(dt->Rows[0]->default["user_id"]);

					query = "SELECT department_id FROM Departments WHERE departmentName = '" + department + "'";
					dt = db->GetData(query);
					int department_id = Convert::ToInt32(dt->Rows[0]->default["department_id"]);

					query = "INSERT INTO Faculty (user_id, department_id) VALUES (" + user_id + ", " + department_id + ")";
					db->ExecuteQuery(query);

					MessageBox::Show("Faculty added successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
					addFacultyForm->Close();
				}
				catch (Exception^ ex) {
					MessageBox::Show("Error adding faculty: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
			catch (Exception^ ex) {
				MessageBox::Show("Error casting sender to Form: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
		}

		

		// Course Management Event Handlers
		void deleteCourseToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			try {
				// Load courses for deletion
				LoadCourseData();
				titleLabel->Text = "Delete Course";
				actionButton->Text = "Delete";
				actionButton->Tag = "DeleteCourse";

				// Attach the click event handler for deletion

				// remove other event listeners
				actionButton->Click -= gcnew EventHandler(this, &Admin1::OnEditCourseClick);
				actionButton->Click -= gcnew EventHandler(this, &Admin1::OnDeleteFacultyClick);
				actionButton->Click -= gcnew EventHandler(this, &Admin1::OnDeleteStudentClick);
				actionButton->Click -= gcnew EventHandler(this, &Admin1::OnEditFacultyClick);



				actionButton->Click += gcnew EventHandler(this, &Admin1::OnDeleteCourseClick);
			}
			catch (Exception^ ex) {
				MessageBox::Show("Error loading course data: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}

		void OnDeleteCourseClick(System::Object^ sender, System::EventArgs^ e) {
			try {
				// Get the selected row from the grid view
				if (gridView->SelectedRows->Count == 0) {
					MessageBox::Show("Please select a course to delete.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}
				DataGridViewRow^ selectedRow = gridView->SelectedRows[0];
				int courseId = Convert::ToInt32(selectedRow->Cells["course_id"]->Value);
				// Delete the course from the database
				DatabaseHelper^ db = gcnew DatabaseHelper();
				String^ query = "DELETE FROM Courses WHERE course_id = " + courseId;
				db->ExecuteQuery(query);
				MessageBox::Show("Course deleted successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
				// Reload the course data
				LoadCourseData();
			}
			catch (Exception^ ex) {
				MessageBox::Show("Error deleting course: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}

		void editCourseToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			try {
				// Load courses into the GridView
				LoadCourseData();

				// Update UI components
				titleLabel->Text = "Edit Course";
				actionButton->Text = "Edit";
				actionButton->Tag = "EditCourse";

				// Attach event handler for the Action button

				// remove other event handlers
				actionButton->Click -= gcnew EventHandler(this, &Admin1::OnEditFacultyClick); 
				actionButton->Click -= gcnew EventHandler(this, &Admin1::OnDeleteFacultyClick);
				actionButton->Click -= gcnew EventHandler(this, &Admin1::OnDeleteStudentClick);
				actionButton->Click -= gcnew EventHandler(this, &Admin1::OnEditFacultyClick);
				

				actionButton->Click += gcnew EventHandler(this, &Admin1::OnEditCourseClick); // Attach edit handler
			}
			catch (Exception^ ex) {
				MessageBox::Show("Error loading course data: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}

		void OnEditCourseClick(System::Object^ sender, System::EventArgs^ e) {
			try {
				// Get the selected row
				if (gridView->SelectedRows->Count == 0) {
					MessageBox::Show("Please select a course to edit.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}

				DataGridViewRow^ selectedRow = gridView->SelectedRows[0];
				int courseId = Convert::ToInt32(selectedRow->Cells["course_id"]->Value);

				// Fetch course details from the database
				DatabaseHelper^ db = gcnew DatabaseHelper();
				String^ query = "SELECT course_id, courseName, credits, faculty_id, schedule FROM Courses WHERE course_id = " + courseId;
				DataTable^ courseData = db->GetData(query);

				if (courseData->Rows->Count == 0) {
					MessageBox::Show("Course not found.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}

				// Open the edit form
				DataRow^ courseRow = courseData->Rows[0];
				OpenEditCourseForm(courseRow);
			}
			catch (Exception^ ex) {
				MessageBox::Show("Error editing course: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}

		void OpenEditCourseForm(DataRow^ courseRow) {
			Form^ editCourseForm = gcnew Form();
			editCourseForm->Text = "Edit Course";
			editCourseForm->Size = System::Drawing::Size(400, 400);

			// Course Name
			Label^ courseNameLabel = gcnew Label();
			courseNameLabel->Text = "Course Name:";
			courseNameLabel->Location = Point(20, 20);
			editCourseForm->Controls->Add(courseNameLabel);

			TextBox^ courseNameTextBox = gcnew TextBox();
			courseNameTextBox->Location = Point(150, 20);
			courseNameTextBox->Name = "courseNameTextBox";
			courseNameTextBox->Text = courseRow["courseName"]->ToString();
			editCourseForm->Controls->Add(courseNameTextBox);

			// Credits
			Label^ creditsLabel = gcnew Label();
			creditsLabel->Text = "Credits:";
			creditsLabel->Location = Point(20, 60);
			editCourseForm->Controls->Add(creditsLabel);

			TextBox^ creditsTextBox = gcnew TextBox();
			creditsTextBox->Location = Point(150, 60);
			creditsTextBox->Name = "creditsTextBox";
			creditsTextBox->Text = courseRow["credits"]->ToString();
			editCourseForm->Controls->Add(creditsTextBox);

			// Faculty
			Label^ facultyLabel = gcnew Label();
			facultyLabel->Text = "Faculty:";
			facultyLabel->Location = Point(20, 100);
			editCourseForm->Controls->Add(facultyLabel);

			ComboBox^ facultyComboBox = gcnew ComboBox();
			facultyComboBox->Location = Point(150, 100);
			facultyComboBox->Name = "facultyComboBox";

			// Populate faculty dropdown
			DatabaseHelper^ db = gcnew DatabaseHelper();
			String^ facultyQuery = "SELECT faculty_id, CONCAT(fname, ' ', lname) AS fullname FROM Faculty INNER JOIN Users ON Faculty.user_id = Users.user_id";
			DataTable^ facultyData = db->GetData(facultyQuery);
			for each (DataRow ^ row in facultyData->Rows) {
				facultyComboBox->Items->Add(row["fullname"]->ToString());
				if (Convert::ToInt32(row["faculty_id"]) == Convert::ToInt32(courseRow["faculty_id"])) {
					facultyComboBox->SelectedItem = row["fullname"]->ToString();
				}
			}
			editCourseForm->Controls->Add(facultyComboBox);

			// Schedule
			Label^ scheduleLabel = gcnew Label();
			scheduleLabel->Text = "Schedule:";
			scheduleLabel->Location = Point(20, 140);
			editCourseForm->Controls->Add(scheduleLabel);

			ComboBox^ scheduleComboBox = gcnew ComboBox();
			scheduleComboBox->Location = Point(150, 140);
			scheduleComboBox->Name = "scheduleComboBox";
			scheduleComboBox->Items->Add("Sem1");
			scheduleComboBox->Items->Add("Sem2");
			scheduleComboBox->SelectedItem = courseRow["schedule"]->ToString();
			editCourseForm->Controls->Add(scheduleComboBox);

			// Submit Button
			Button^ submitButton = gcnew Button();
			submitButton->Text = "Save Changes";
			submitButton->Location = Point(150, 180);
			submitButton->Click += gcnew EventHandler(this, &Admin1::SubmitEditCourseForm);
			submitButton->Tag = courseRow["course_id"];
			editCourseForm->Controls->Add(submitButton);

			editCourseForm->ShowDialog();
		}

		void SubmitEditCourseForm(System::Object^ sender, System::EventArgs^ e) {
			try {
				Button^ submitButton = (Button^)sender;
				int courseId = Convert::ToInt32(submitButton->Tag);

				// Retrieve form data
				Form^ editCourseForm = submitButton->FindForm();
				TextBox^ courseNameTextBox = (TextBox^)editCourseForm->Controls->Find("courseNameTextBox", true)[0];
				TextBox^ creditsTextBox = (TextBox^)editCourseForm->Controls->Find("creditsTextBox", true)[0];
				ComboBox^ facultyComboBox = (ComboBox^)editCourseForm->Controls->Find("facultyComboBox", true)[0];
				ComboBox^ scheduleComboBox = (ComboBox^)editCourseForm->Controls->Find("scheduleComboBox", true)[0];

				String^ courseName = courseNameTextBox->Text;
				int credits = Convert::ToInt32(creditsTextBox->Text);
				int facultyId = Convert::ToInt32(facultyComboBox->SelectedValue);
				String^ schedule = scheduleComboBox->SelectedItem->ToString();

				// Update the course in the database
				DatabaseHelper^ db = gcnew DatabaseHelper();
				String^ query = "UPDATE Courses SET courseName = @courseName, credits = @credits, faculty_id = @facultyId, schedule = @schedule WHERE course_id = @courseId";
				cli::array<MySqlParameter^>^ parameters = gcnew cli::array<MySqlParameter^>(5) {
					gcnew MySqlParameter("@courseName", courseName),
						gcnew MySqlParameter("@credits", credits),
						gcnew MySqlParameter("@facultyId", facultyId),
						gcnew MySqlParameter("@schedule", schedule),
						gcnew MySqlParameter("@courseId", courseId)
				};
				db->ExecuteQuery(query, parameters);

				MessageBox::Show("Course updated successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
				editCourseForm->Close();
				LoadCourseData(); // Refresh the grid
			}
			catch (Exception^ ex) {
				MessageBox::Show("Error updating course: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}



		void addCourseToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			try {
				// Retrieve faculties from the database
				DatabaseHelper^ db = gcnew DatabaseHelper();
				String^ query = "SELECT Faculty.user_id, CONCAT(fname, ' ', lname) AS fullname FROM Faculty JOIN Users ON Faculty.user_id = Users.user_id";
				DataTable^ facultyData = db->GetData(query);

				if (facultyData->Rows->Count == 0) {
					MessageBox::Show("No faculties available. Add a faculty before adding a course.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}

				// Create a form for adding a course
				Form^ addCourseForm = gcnew Form();
				addCourseForm->Text = "Add Course";
				addCourseForm->Size = System::Drawing::Size(400, 400);

				// Course Name Label and TextBox
				Label^ courseNameLabel = gcnew Label();
				courseNameLabel->Text = "Course Name:";
				courseNameLabel->Location = Point(20, 20);
				addCourseForm->Controls->Add(courseNameLabel);

				TextBox^ courseNameTextBox = gcnew TextBox();
				courseNameTextBox->Location = Point(150, 20);
				courseNameTextBox->Name = "courseNameTextBox";
				addCourseForm->Controls->Add(courseNameTextBox);

				// Credits Label and TextBox
				Label^ creditsLabel = gcnew Label();
				creditsLabel->Text = "Credits:";
				creditsLabel->Location = Point(20, 60);
				addCourseForm->Controls->Add(creditsLabel);

				TextBox^ creditsTextBox = gcnew TextBox();
				creditsTextBox->Location = Point(150, 60);
				creditsTextBox->Name = "creditsTextBox";
				addCourseForm->Controls->Add(creditsTextBox);

				// Faculty Label and ComboBox
				Label^ facultyLabel = gcnew Label();
				facultyLabel->Text = "Faculty:";
				facultyLabel->Location = Point(20, 100);
				addCourseForm->Controls->Add(facultyLabel);

				ComboBox^ facultyComboBox = gcnew ComboBox();
				facultyComboBox->Location = Point(150, 100);
				facultyComboBox->Name = "facultyComboBox";
				for each (DataRow ^ row in facultyData->Rows) {
					facultyComboBox->Items->Add(row["fullname"]->ToString());
					facultyComboBox->Tag = row["user_id"]->ToString(); // Store user_id for reference
				}
				addCourseForm->Controls->Add(facultyComboBox);

				// Schedule Label and ComboBox
				Label^ scheduleLabel = gcnew Label();
				scheduleLabel->Text = "Schedule:";
				scheduleLabel->Location = Point(20, 140);
				addCourseForm->Controls->Add(scheduleLabel);

				ComboBox^ scheduleComboBox = gcnew ComboBox();
				scheduleComboBox->Location = Point(150, 140);
				scheduleComboBox->Name = "scheduleComboBox";
				scheduleComboBox->Items->Add("Sem1");
				scheduleComboBox->Items->Add("Sem2");
				addCourseForm->Controls->Add(scheduleComboBox);

				// Submit Button
				Button^ submitButton = gcnew Button();
				submitButton->Text = "Add Course";
				submitButton->Location = Point(150, 180);
				submitButton->Click += gcnew System::EventHandler(this, &Admin1::SubmitAddCourseForm);
				addCourseForm->Controls->Add(submitButton);

				addCourseForm->ShowDialog();
			}
			catch (Exception^ ex) {
				MessageBox::Show("Error opening Add Course form: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}

		void SubmitAddCourseForm(System::Object^ sender, System::EventArgs^ e) {
			try {
				// Get the form that contains the button
				Form^ addCourseForm = (Form^)dynamic_cast<Button^>(sender)->FindForm();

				// Retrieve controls from the form
				TextBox^ courseNameTextBox = (TextBox^)addCourseForm->Controls->Find("courseNameTextBox", true)[0];
				TextBox^ creditsTextBox = (TextBox^)addCourseForm->Controls->Find("creditsTextBox", true)[0];
				ComboBox^ facultyComboBox = (ComboBox^)addCourseForm->Controls->Find("facultyComboBox", true)[0];
				ComboBox^ scheduleComboBox = (ComboBox^)addCourseForm->Controls->Find("scheduleComboBox", true)[0];

				// Get values from inputs
				String^ courseName = courseNameTextBox->Text;
				int credits = Convert::ToInt32(creditsTextBox->Text);
				int facultyId = Convert::ToInt32(facultyComboBox->Tag->ToString());
				String^ schedule = scheduleComboBox->SelectedItem->ToString();

				if (String::IsNullOrWhiteSpace(courseName) || scheduleComboBox->SelectedIndex < 0 || facultyComboBox->SelectedIndex < 0) {
					MessageBox::Show("Please fill all fields before submitting.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}

				// Insert course data into the database
				DatabaseHelper^ db = gcnew DatabaseHelper();
				String^ query = "INSERT INTO Courses (courseName, credits, faculty_id, schedule) VALUES (@courseName, @credits, @facultyId, @schedule)";
				cli::array<MySqlParameter^>^ parameters = gcnew cli::array<MySqlParameter^>(4) {
					gcnew MySqlParameter("@courseName", courseName),
						gcnew MySqlParameter("@credits", credits),
						gcnew MySqlParameter("@facultyId", facultyId),
						gcnew MySqlParameter("@schedule", schedule)
				};
				db->ExecuteQuery(query, parameters);

				MessageBox::Show("Course added successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
				addCourseForm->Close();
			}
			catch (Exception^ ex) {
				MessageBox::Show("Error adding course: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}



		// Generate Reports Event Handler
        void GenerateReports(System::Object^ sender, System::EventArgs^ e) {
            try {
                // Get the data from the database
                DatabaseHelper^ db = gcnew DatabaseHelper();
                String^ queryStudents = "SELECT COUNT(*) AS total FROM Students";
                String^ queryFaculty = "SELECT COUNT(*) AS total FROM Faculty";
                String^ queryCourses = "SELECT COUNT(*) AS total FROM Courses";
                String^ queryDepartments = "SELECT COUNT(*) AS total FROM Departments";
                DataTable^ studentsData = db->GetData(queryStudents);
                DataTable^ facultyData = db->GetData(queryFaculty);
                DataTable^ coursesData = db->GetData(queryCourses);
                DataTable^ departmentsData = db->GetData(queryDepartments);

                // Create a text report
               
				// save the report to a folder reports in the project directory and the reporrt file name is report + current date and time.txt
				String^ reportPath = "report_" + DateTime::Now.ToString("yyyy-MM-dd_HH-mm-ss") + ".txt";
                StreamWriter^ writer = gcnew StreamWriter(reportPath);

                // Add title
                writer->WriteLine("University Report\n");
                writer->WriteLine("----------------------------\n");

                // Add student count
                writer->WriteLine("Total Students: " + studentsData->Rows[0]->default["total"]->ToString() + "\n");

                // Add faculty count
                writer->WriteLine("Total Faculty: " + facultyData->Rows[0]->default["total"]->ToString() + "\n");

                // Add course count
                writer->WriteLine("Total Courses: " + coursesData->Rows[0]->default["total"]->ToString() + "\n");

                // Add department count
                writer->WriteLine("Total Departments: " + departmentsData->Rows[0]->default["total"]->ToString() + "\n");

                // Close the writer
                writer->Close();

				// open the generated report.txt file
				System::Diagnostics::Process::Start(reportPath);

				MessageBox::Show("Report generated successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
            }
            catch (Exception^ ex) {
                MessageBox::Show("Error generating report: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
        }

		// Helper methods to load data
		void LoadStudentData() {
			DatabaseHelper^ db = gcnew DatabaseHelper();
			gridView->DataSource = db->GetData("SELECT student_id, major, fname, lname, email, DOB, picture FROM Students INNER JOIN Users ON Students.user_id = users.user_id");

			// show the generate transcript button
            button1->Visible = true;
		}

		void LoadFacultyData() {
			try {
				DatabaseHelper^ db = gcnew DatabaseHelper();
				String^ query = "SELECT faculty_id, fname, lname, email, departmentName, appointmentDate FROM Faculty INNER JOIN Users ON Faculty.user_id = Users.user_id INNER JOIN Departments ON Faculty.department_id = Departments.department_id";
				gridView->DataSource = db->GetData(query);
			}
			catch (Exception^ ex) {
				MessageBox::Show("Error loading faculty data: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}

		void LoadCourseData() {
			DatabaseHelper^ db = gcnew DatabaseHelper();
			gridView->DataSource = db->GetData("SELECT course_id, courseName, credits, fname, lname, schedule FROM Courses INNER JOIN Faculty ON Courses.faculty_id = Faculty.faculty_id INNER JOIN Users on Faculty.user_id = Users.user_id");
		}
		
	private: System::Void Close_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
};
}