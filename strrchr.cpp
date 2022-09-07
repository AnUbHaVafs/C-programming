// C code to demonstrate the application of
// strrchr()

#include <stdio.h>
#include <string.h>

// Driver function
int main()
{

	
	char denom[] = "Intervue.io__1_to_1_interview_platform";

	char first = '1';
	char* entire;

	entire = strrchr(denom, first);

	printf("\n %s ", entire);

	return (0);
}
