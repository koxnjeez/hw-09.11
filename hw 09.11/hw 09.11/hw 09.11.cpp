#include "settings.h"

int main()
{
	char* proposal = new char[50];
	int length = 50;
	int spaces = 0;
	cout << "Input the proposal: ";
	gets_s(proposal, length);
	float symbols = strlen(proposal);
	for (int i = 0; i < symbols; i++) {
		if (proposal[i] == (char)32) {
			spaces++;
		}
	}
	symbols -= spaces;
	cout << symbols / (spaces + 1);
	Sleep(INFINITE);
}