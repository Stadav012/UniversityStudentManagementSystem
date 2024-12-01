#include "Login.h"

using namespace System;
using namespace System::Windows::Forms;

int main(cli::array<System::String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    UniversityStudentManagementSystem::Login form;
    Application::Run(% form);
}
