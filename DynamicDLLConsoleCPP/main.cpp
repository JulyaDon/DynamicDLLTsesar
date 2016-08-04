#include <Windows.h>
#include <tchar.h>
#include <conio.h>
#include <iostream>

using namespace std;

typedef char* (*PFN_SayHello)();

int main()
{
	HINSTANCE hDynamicDLL;

	if ((hDynamicDLL = LoadLibrary(TEXT("DynamicDLL"))) == NULL)
	{
		
	}
	else
	{
		PFN_SayHello pfn_SayHello;
		pfn_SayHello = (PFN_SayHello)GetProcAddress(hDynamicDLL, "SayHello");
		cout<<(*pfn_SayHello)()<<endl;
	}


	_getch();
	return 0;
}