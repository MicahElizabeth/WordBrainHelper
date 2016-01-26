// Asks for board size, number of words, number of letters per word, and finally, the given letters
// then presents all possible combinations (after comparing each to a dictionary)
#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	WordbrainHelper::MyForm form;
	Application::Run(%form);
}