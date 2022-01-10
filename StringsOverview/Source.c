#include <stdio.h>

//Main
void main()
{
	// Declare variables
	char str1[30];
	char str2[30];
	int result, compare;

	//Ask User for 2 Words and a number
	printf("Both Words to be under 29 letters each:\t");
	printf("\nPlease enter first word:\t");
	scanf("%s", str1);
	printf("Please enter second word:\t");
	scanf("%s", str2);
	printf("Please enter a character count to compare:\t");
	scanf("%d", &compare);

	//Display Both Strings
	printf("\n-String 1 is: %s\n-String 2 is: %s\n", str1, str2);

#pragma region LengthBothStrings

	//Find and Display Length
	result = (strlen(str1) + strlen(str2));
	printf("-The Length of both strings is %d\n", result);
#pragma endregion

#pragma region CompareStringsByLength
	//Compare both strings and Display Bigger
	result = strncmp(str1, str2);

	if (result < 0)
	{
		printf("-%s is bigger than %s\n", str1, str2);
	}

	else if (result == 0)
	{
		printf("-The strings are the same\n");
	}

	else
	{
		printf("-%s is bigger than %s\n", str2, str1);
	}

#pragma endregion

#pragma region CompareStringsByFirstLetter
	//Compare number of Characters
	result = strncmp(str1, str2, compare);

	if (result > 0)
	{
		printf("-%s has bigger first character than %s\n", str1, str2);
	}

	else if (result == 0)
	{
		printf("-The substrings are the same\n");
	}

	else
	{
		printf("-%s has bigger first character than %s\n", str2, str1);
	}
#pragma endregion

	//Concatenate Str2 to Str1 and Display
	result = (strlen(str1))+(strlen(str2));
	strncat(str1, str2);
	str1[result] = '\0';

	printf("-String1 after Concatenationed to String2 is %s\n", str1);

	//Concatenate first 3 Letters of Str2 to Str1
	result = strlen(str1);
	strncat(str1, str2, compare);
	str1[result + compare] = '\0';

	printf("-String1 after Concatenationed 3 Letters to String2 is %s\n", str1);

	//Copy String 2 to String 1
	strcpy(str1, str2);
	printf("After Copying String 1 to String 2:\n");
	printf("-String 1 is %s\n", str1);
	printf("-String 2 is %s\n", str2);

	//Ask User for 2 Words
	printf("Both Words to be under 29 letters each:\t");
	printf("\nPlease enter first word:\t");
	scanf("%s", str1);
	printf("Please enter second word:\t");
	scanf("%s", str2);

	//Copy first 3 letters of string 1 to string 2
	strcpy(str2, str1, 3);
	str2[3] = '\0';

	printf("After Copying first 3 letters of String 1 to String 2:\n");
	printf("-String 1 is %s\n", str1);
	printf("-String 2 is %s\n", str2);
}