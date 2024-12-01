#pragma once

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
		Faculty(void)
		{
			InitializeComponent();
			//
			// TODO: Add the constructor code here
			//
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
		}

	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ transcriptToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ prerequisitesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ dashboardToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ adminToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ facultyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ studentToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ viewToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ printToolStripMenuItem;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ NEW;
	private: System::Windows::Forms::Button^ DELETE;
	private: System::Windows::Forms::Button^ UPDATE;

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
			this->dashboardToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->adminToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->facultyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->studentToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->prerequisitesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->transcriptToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->viewToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->printToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->NEW = (gcnew System::Windows::Forms::Button());
			this->DELETE = (gcnew System::Windows::Forms::Button());
			this->UPDATE = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->dashboardToolStripMenuItem,
					this->toolStripMenuItem1, this->transcriptToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1074, 33);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &Faculty::menuStrip1_ItemClicked);
			// 
			// dashboardToolStripMenuItem
			// 
			this->dashboardToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->adminToolStripMenuItem,
					this->facultyToolStripMenuItem, this->studentToolStripMenuItem
			});
			this->dashboardToolStripMenuItem->Name = L"dashboardToolStripMenuItem";
			this->dashboardToolStripMenuItem->Size = System::Drawing::Size(116, 29);
			this->dashboardToolStripMenuItem->Text = L"Dashboard";
			this->dashboardToolStripMenuItem->Click += gcnew System::EventHandler(this, &Faculty::dashboardToolStripMenuItem_Click);
			// 
			// adminToolStripMenuItem
			// 
			this->adminToolStripMenuItem->Name = L"adminToolStripMenuItem";
			this->adminToolStripMenuItem->Size = System::Drawing::Size(175, 34);
			this->adminToolStripMenuItem->Text = L"Admin";
			// 
			// facultyToolStripMenuItem
			// 
			this->facultyToolStripMenuItem->Name = L"facultyToolStripMenuItem";
			this->facultyToolStripMenuItem->Size = System::Drawing::Size(175, 34);
			this->facultyToolStripMenuItem->Text = L"Faculty";
			// 
			// studentToolStripMenuItem
			// 
			this->studentToolStripMenuItem->Name = L"studentToolStripMenuItem";
			this->studentToolStripMenuItem->Size = System::Drawing::Size(175, 34);
			this->studentToolStripMenuItem->Text = L"Student";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->prerequisitesToolStripMenuItem });
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(91, 29);
			this->toolStripMenuItem1->Text = L"Courses";
			// 
			// prerequisitesToolStripMenuItem
			// 
			this->prerequisitesToolStripMenuItem->Name = L"prerequisitesToolStripMenuItem";
			this->prerequisitesToolStripMenuItem->Size = System::Drawing::Size(214, 34);
			this->prerequisitesToolStripMenuItem->Text = L"Prerequisites";
			// 
			// transcriptToolStripMenuItem
			// 
			this->transcriptToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->viewToolStripMenuItem,
					this->printToolStripMenuItem
			});
			this->transcriptToolStripMenuItem->Name = L"transcriptToolStripMenuItem";
			this->transcriptToolStripMenuItem->Size = System::Drawing::Size(103, 29);
			this->transcriptToolStripMenuItem->Text = L"Transcript";
			// 
			// viewToolStripMenuItem
			// 
			this->viewToolStripMenuItem->Name = L"viewToolStripMenuItem";
			this->viewToolStripMenuItem->Size = System::Drawing::Size(151, 34);
			this->viewToolStripMenuItem->Text = L"View";
			// 
			// printToolStripMenuItem
			// 
			this->printToolStripMenuItem->Name = L"printToolStripMenuItem";
			this->printToolStripMenuItem->Size = System::Drawing::Size(151, 34);
			this->printToolStripMenuItem->Text = L"Print";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(453, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(170, 33);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Close";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Faculty::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(24, 39);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(1038, 289);
			this->dataGridView1->TabIndex = 6;
			// 
			// NEW
			// 
			this->NEW->Location = System::Drawing::Point(315, 367);
			this->NEW->Name = L"NEW";
			this->NEW->Size = System::Drawing::Size(103, 35);
			this->NEW->TabIndex = 7;
			this->NEW->Text = L"NEW";
			this->NEW->UseVisualStyleBackColor = true;
			// 
			// DELETE
			// 
			this->DELETE->Location = System::Drawing::Point(491, 367);
			this->DELETE->Name = L"DELETE";
			this->DELETE->Size = System::Drawing::Size(81, 35);
			this->DELETE->TabIndex = 8;
			this->DELETE->Text = L"DELETE";
			this->DELETE->UseVisualStyleBackColor = true;
			// 
			// UPDATE
			// 
			this->UPDATE->Location = System::Drawing::Point(631, 367);
			this->UPDATE->Name = L"UPDATE";
			this->UPDATE->Size = System::Drawing::Size(99, 35);
			this->UPDATE->TabIndex = 9;
			this->UPDATE->Text = L"UPDATE";
			this->UPDATE->UseVisualStyleBackColor = true;
			// 
			// Faculty
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1074, 463);
			this->Controls->Add(this->UPDATE);
			this->Controls->Add(this->DELETE);
			this->Controls->Add(this->NEW);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Faculty";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Faculty";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Faculty::Student_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
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
};
}
