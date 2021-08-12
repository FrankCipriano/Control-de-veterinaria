#include "Inicio.h"
#include <string>

using namespace System;
using namespace System::Windows::Forms;
using namespace std;


[STAThreadAttribute]

void main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Salud::Inicio form;
	Application::Run(% form);
}
