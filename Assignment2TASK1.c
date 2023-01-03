//Name: Muhammad Haider
//Roll_no: BCSF21M011
//C program to display the string in reverse order by using pointer

#include <stdio.h>
#pragma warning(disable:4996)
#include <string.h>
void reverseOrder(char* ptr)
{
	//char* ptr = str; //Using pointer

	for (int i = strlen(ptr); i >= 0; i--)
	{
		if (ptr[i] == ' ')
		{
			ptr[i] = '\0'; //implement NULL at each space

			printf("%s ", (&ptr[i] + 1)); //print string next to NULL 
		}
	}
	printf("%s", ptr);//print first word of original string
}

int main()
{
	char str[100];
	char str1[100];
	
	puts("C program to print the string in reverse order\n______________________________________________\n");
	printf("Original string: ");
	fgets(str, sizeof(str), stdin);
	
	int n = strlen(str);
	strncpy(str1, str, n-1);
	printf("\n\nReverse string: ");

	reverseOrder(str1);

	return 0;
}
