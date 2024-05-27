#include "MyForm.h"

#include<string>
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]


int main() {
		Application::EnableVisualStyles();
		Application::SetCompatibleTextRenderingDefault(false);
		Project1::MyForm frm;
		Application::Run(% frm);
}