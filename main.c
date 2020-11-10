#include <windows.h>
#include "mouse.h"
#include <stdio.h>

int main(void)
{
	if (!mouse_open()) {
		printf("[-] failed to open ghub macro driver\n");
		return 0;
	}


	for (int i = 0; i < 32; i++) {
		Sleep(100);
		printf("[+] moving mouse\n");

		mouse_move(0, -10, 0, 0);
	}


	mouse_close();
}

