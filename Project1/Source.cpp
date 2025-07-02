#include <stdio.h>
#include <Windows.h>

int main()
{
	while (true)
	{
		system("cls");

		if (GetAsyncKeyState(VK_LEFT))
		{
			printf("LEFT");
		}
		COORD pos = { 10,10 };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);

		printf("¿Ê");

	}

	
	return 0;
}