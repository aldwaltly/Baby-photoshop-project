#include <iostream>
#include <string>
#include "MyForm.h"
#include "Image_Class.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Drawing;

[STAThreadAttribute]


int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project1::MyForm form;
	Application::Run(% form);
}
