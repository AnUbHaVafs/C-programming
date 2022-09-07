
#include <stdio.h>
#include <string.h>

int main()
{
	char str[] = "Intervio.io-Is-A-Best_Platform";

	char *a = strtok(str, "-");
    
	while (a != NULL)
	{
		printf("%s\n", a);
		a = strtok(NULL, "-");
	}

	return 0;
}
