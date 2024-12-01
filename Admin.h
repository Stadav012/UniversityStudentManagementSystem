#pragma once

namespace UniversityStudentManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Admin
	/// </summary>
	public ref class Admin : public System::Windows::Forms::Form
	{
	public:
		Admin(void)
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
		~Admin()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::MenuStrip^ menuStrip1;



	private: System::Windows::Forms::ToolStripMenuItem^ dashboardToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ adminToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ facultyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ studentToolStripMenuItem;


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ToolStripMenuItem^ financialsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ generateReportsToolStripMenuItem;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->financialsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->generateReportsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->dashboardToolStripMenuItem,
					this->generateReportsToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1074, 33);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &Admin::menuStrip1_ItemClicked);
			// 
			// dashboardToolStripMenuItem
			// 
			this->dashboardToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->adminToolStripMenuItem,
					this->facultyToolStripMenuItem, this->studentToolStripMenuItem, this->financialsToolStripMenuItem
			});
			this->dashboardToolStripMenuItem->Name = L"dashboardToolStripMenuItem";
			this->dashboardToolStripMenuItem->Size = System::Drawing::Size(92, 29);
			this->dashboardToolStripMenuItem->Text = L"Manage";
			this->dashboardToolStripMenuItem->Click += gcnew System::EventHandler(this, &Admin::dashboardToolStripMenuItem_Click);
			// 
			// adminToolStripMenuItem
			// 
			this->adminToolStripMenuItem->Name = L"adminToolStripMenuItem";
			this->adminToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->adminToolStripMenuItem->Text = L"Faculty";
			this->adminToolStripMenuItem->Click += gcnew System::EventHandler(this, &Admin::adminToolStripMenuItem_Click);
			// 
			// facultyToolStripMenuItem
			// 
			this->facultyToolStripMenuItem->Name = L"facultyToolStripMenuItem";
			this->facultyToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->facultyToolStripMenuItem->Text = L"Students";
			// 
			// studentToolStripMenuItem
			// 
			this->studentToolStripMenuItem->Name = L"studentToolStripMenuItem";
			this->studentToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->studentToolStripMenuItem->Text = L"Courses";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(465, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(170, 33);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Close";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Admin::button1_Click);
			// 
			// financialsToolStripMenuItem
			// 
			this->financialsToolStripMenuItem->Name = L"financialsToolStripMenuItem";
			this->financialsToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->financialsToolStripMenuItem->Text = L"Financials";
			// 
			// generateReportsToolStripMenuItem
			// 
			this->generateReportsToolStripMenuItem->Name = L"generateReportsToolStripMenuItem";
			this->generateReportsToolStripMenuItem->Size = System::Drawing::Size(164, 29);
			this->generateReportsToolStripMenuItem->Text = L"Generate Reports";
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::Cyan;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 39);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(1037, 291);
			this->dataGridView1->TabIndex = 6;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Admin::dataGridView1_CellContentClick);
			// 
			// NEW
			// 
			this->NEW->Location = System::Drawing::Point(465, 349);
			this->NEW->Name = L"NEW";
			this->NEW->Size = System::Drawing::Size(108, 35);
			this->NEW->TabIndex = 7;
			this->NEW->Text = L"NEW";
			this->NEW->UseVisualStyleBackColor = true;
			// 
			// DELETE
			// 
			this->DELETE->Location = System::Drawing::Point(632, 349);
			this->DELETE->Name = L"DELETE";
			this->DELETE->Size = System::Drawing::Size(80, 35);
			this->DELETE->TabIndex = 8;
			this->DELETE->Text = L"DELETE";
			this->DELETE->UseVisualStyleBackColor = true;
			// 
			// UPDATE
			// 
			this->UPDATE->Location = System::Drawing::Point(788, 349);
			this->UPDATE->Name = L"UPDATE";
			this->UPDATE->Size = System::Drawing::Size(91, 35);
			this->UPDATE->TabIndex = 9;
			this->UPDATE->Text = L"UPDATE";
			this->UPDATE->UseVisualStyleBackColor = true;
			this->UPDATE->Click += gcnew System::EventHandler(this, &Admin::button4_Click);
			// 
			// Admin
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
			this->Name = L"Admin";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Admin";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Admin::Student_Load);
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
private: System::Void adminToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
