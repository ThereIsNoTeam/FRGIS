//Powinni�my uwzgl�dni� logi: wersj� dla u�ytkownika i do debuggowania(niemal w ka�dej funkcji)
#include "Cmain.h"

int main(int argc, char **argv)
{
	Cmain main;
	for (int x = 0; x != argc; ++x)
	{
		if (argv[x] == "-d")
		{
			#define _DEBUG
		}
	}
	try
	{
		main.FirstConnectLoop();
	}
	catch (w_err err)
	{
		#ifdef _WIN32
		MessageBoxW(NULL, err.msg.c_str(), NULL, MB_ICONERROR);
		#endif
		return -1;
	}
	catch (...)
	{
		#ifdef _WIN32
		MessageBoxW(NULL, L"Unknown critical error", NULL, MB_ICONERROR);
		#endif
		return -1;
	}
	return 0;
}
