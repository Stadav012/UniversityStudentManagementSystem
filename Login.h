#pragma once
#include "Student.h";
#include "Admin.h";
#include "Faculty.h";
#include <iostream>
#include <string>
#include <ctime> // Include for std::tm
#include <msclr/marshal_cppstd.h>
#include <msclr/marshal.h>

using namespace MySql::Data::MySqlClient;


namespace UniversityStudentManagementSystem {


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
		MySqlConnection^ sqlConn = gcnew MySqlConnection();
		MySqlCommand^ sqlCd = gcnew MySqlCommand();
		DataTable^ sqlDt = gcnew DataTable();
		MySqlDataAdapter^ sqlDtA = gcnew MySqlDataAdapter();

	public:
		MySqlDataReader^ sqlRd;
		Login(void)
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
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::Label^ label3;


	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;



	private:
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(46, 67);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(110, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"User Name";
			this->label1->Click += gcnew System::EventHandler(this, &Login::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(46, 133);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(98, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Password";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->button1->Location = System::Drawing::Point(186, 287);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(110, 50);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Login";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Login::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->button2->Location = System::Drawing::Point(470, 287);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(110, 50);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Close";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Login::btnCancel_Click);
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(262, 234);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(212, 20);
			this->linkLabel1->TabIndex = 6;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Register for Password Reset";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Login::linkLabel1_LinkClicked);
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label3->Location = System::Drawing::Point(345, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(87, 29);
			this->label3->TabIndex = 7;
			this->label3->Text = L"LOGIN";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(243, 134);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(190, 26);
			this->textBox2->TabIndex = 3;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Login::textBox2_TextChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(243, 66);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(190, 26);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Login::textBox1_TextChanged);
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(927, 470);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Login";
			this->Text = L"Login";
			this->Load += gcnew System::EventHandler(this, &Login::Login_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	/*private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		
		Student^ MyFormParent = gcnew Student();
		MyFormParent->Show();
		this->Hide();


	}*/
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		// Validate inputs
		if (String::IsNullOrWhiteSpace(textBox1->Text) || String::IsNullOrWhiteSpace(textBox2->Text) ) {
			MessageBox::Show("Please fill in all fields.");
			return;
		}

		// Connect to the database
		sqlConn->ConnectionString = "datasource=localhost; port =3306; username=root; password=''; database=ashesi";
		sqlConn->Open();

		// Prepare SQL command
		sqlCd->Connection = sqlConn;
		sqlCd->CommandText = "SELECT * FROM users WHERE username = @username AND password = @password";
		sqlCd->Parameters->AddWithValue("@username", textBox1->Text);
		sqlCd->Parameters->AddWithValue("@password", textBox2->Text);

		// Execute query
		sqlRd = sqlCd->ExecuteReader();
		if (sqlRd->Read()) {

			MessageBox::Show("Login successful!");
			// Hide the current form and show the appropriate user form
			this->Hide();
			// Execute query
			//sqlRd = sqlCd->ExecuteReader();

				String^ role = "";

				try {
					role = sqlRd["role"]->ToString();
					// welcome the user with the name and role 
					MessageBox::Show("Welcome " + sqlRd["username"]->ToString() + " (" + role + ")");
				}
				catch (Exception^ ex) {
					// Display the exception message to help with debugging
					MessageBox::Show("Error: " + ex->Message);
				}
				this->Hide();

				if (role == "student") {
					Student^ studentForm = gcnew Student();
					studentForm->Show();
				}
				else if (role == "admin") {
					Admin^ adminForm = gcnew Admin();
					adminForm->Show();
				}
				else if (role == "faculty") {
					try {
						// Extract user information
						int id = Convert::ToInt32(sqlRd["user_id"]);
						std::string fname = msclr::interop::marshal_as<std::string>(sqlRd["fname"]->ToString());
						std::string lname = msclr::interop::marshal_as<std::string>(sqlRd["lname"]->ToString());
						std::string email = msclr::interop::marshal_as<std::string>(sqlRd["email"]->ToString());
						std::string password = msclr::interop::marshal_as<std::string>(sqlRd["password"]->ToString());

						// Close the current reader
						sqlRd->Close();

						// Prepare query to fetch faculty information
						sqlCd->CommandText = R"(
            SELECT 
                faculty.faculty_id, 
                faculty.appointmentDate, 
                departments.departmentName, 
                courses.courseName 
            FROM faculty 
            JOIN departments ON faculty.department_id = departments.department_id 
            LEFT JOIN courses ON faculty.faculty_id = courses.faculty_id 
            WHERE faculty.user_id = @user_id
        )";
						sqlCd->Parameters->Clear();
						sqlCd->Parameters->AddWithValue("@user_id", id);

						sqlRd = sqlCd->ExecuteReader();

						// Initialize variables
						int faculty_id = 0;
						std::string appointmentDate, department;
						std::vector<std::string> courses;

						// Read data
						if (sqlRd->HasRows) {
							while (sqlRd->Read()) {
								if (faculty_id == 0) { // Set static fields from the first row
									faculty_id = Convert::ToInt32(sqlRd["faculty_id"]);
									appointmentDate = msclr::interop::marshal_as<std::string>(sqlRd["appointmentDate"]->ToString());
									department = msclr::interop::marshal_as<std::string>(sqlRd["departmentName"]->ToString());
								}
								// Append course names
                                if (!Convert::IsDBNull(sqlRd["courseName"])) {
                                    courses.push_back(msclr::interop::marshal_as<std::string>(sqlRd["courseName"]->ToString()));
                                }
									
							}
						}
						else {
							MessageBox::Show("No faculty data found for the provided user.");
							return;
						}

						// Close the reader
						sqlRd->Close();

						// Create and show the faculty form
						Faculty^ facultyForm = gcnew Faculty(id, fname, lname, email, password, faculty_id, appointmentDate, department, courses);
						facultyForm->Show();
					}
					catch (Exception^ ex) {
						// Handle any exceptions
						MessageBox::Show("Error: " + ex->Message);
					}
					finally {
						// Ensure the reader is closed
						if (sqlRd != nullptr && !sqlRd->IsClosed) {
							sqlRd->Close();
						}
						sqlCd->Parameters->Clear();
					}
				}
				this->Hide();
			
		}
		else {
			MessageBox::Show("Invalid credentials.");
		}
	}
	catch (Exception^ ex) {
		// Display the exception message to help with debugging
		MessageBox::Show("Error: " + ex->Message);
	}
}

	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void Login_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Role_dropdown_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {


	}
	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		MessageBox::Show("Please contact the system administrator for password reset.");
	}
	};
}