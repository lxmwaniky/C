#include <stdio.h>

void basic_maths();
void complex_maths();

int main()
{
	int mode;

	puts("........................CALCULATOR................................");
	puts("..................................................................");
	printf("1. Basic Maths\n2. Complex Maths\n");
	printf("Enter mode:  ");
	scanf("%d", &mode);
	while (1)
	{
		if (mode == 1)
		{
			basic_maths();
			break;
		}
		else if (mode == 2)
		{
			complex_maths();
			break;
		}
		else
		{
			printf("Enter a Valid mode: ");
			scanf("%d", &mode);
		}
	}


	return 0;
}

void basic_maths()
{
	printf("You selected Basic Maths\n");
}

void complex_maths()
{
	printf("You selected Complex Maths\n");
}
