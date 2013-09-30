#include <stdio.h>
#include <windows.h>

int main()
{
	char buf[MAX_COMPUTERNAME_LENGTH + 1];
	DWORD CompNameLen = 1024;

	if (GetComputerNameA(buf, &CompNameLen))
	{
		printf("Computer name: %s\n", buf);
		getchar();
	}

	return 0;
}