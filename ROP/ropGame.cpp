/**
*	DEP BYPASS EXAM on Windows
*	Date:	2016/1/3
*	Author: by aaaddress1@gmail.com
**/
#include <iostream>
char FAIL[] = "TRY AGAIN!";
char SUCESSED[] = "SUCESSED! YOU GOT IT.";

void showResult(int pass) {
	printf("%s\n", (pass ^ 0x0a) ? FAIL : SUCESSED);
}

int main() {
	char tmpBuff[512] = {};
	if (FILE *fInput = fopen("setting.txt", "r"))
	{
		fscanf(fInput, "%s", tmpBuff);
		printf("%s\n",tmpBuff);
	}
	int magic = *(unsigned int*)(0x7FFE0320);
	printf("magic number:%i\n", magic);
	showResult(magic);
	return 0;
}







