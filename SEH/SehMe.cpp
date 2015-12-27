#include <iostream>

int main()
{
	try	
	{
		char tmpBuff[512] = {};

		if (FILE *fInput = fopen("setting.txt", "r"))
		{
			fscanf(fInput, "%s", tmpBuff);
			printf("%s\n",tmpBuff);
			fclose(fInput);
		}
	}
	catch (...)
	{ 
		printf("Hello\n"); 
	}
	return 0;
}







