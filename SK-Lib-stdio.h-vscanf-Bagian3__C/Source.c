#pragma warning(disable:4996)

#include <stdio.h>
#include <stdarg.h>
#include <conio.h>

/*
	Source by AlphaCodingSkills
	Modified For Learn by RK
	I.D.E : VS2022
*/

void ScanFormatted(const char* format, ...) {
	va_list args;
	va_start(args, format);
	vscanf(format, args);
	va_end(args);
}

int main() {
	int val;
	char c, str[50];

	printf("Masukkan Sebuah Integer, Character dan String: ");
	ScanFormatted("%d %c %50s ", &val, &c, str);
	printf("Integer = %d\n", val);
	printf("Character = %c\n", c);
	printf("String = %s\n", str);

	_getch();
	return 0;
}

