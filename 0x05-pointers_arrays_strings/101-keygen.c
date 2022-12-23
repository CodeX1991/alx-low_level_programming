#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <unistd.h>
/**
 * passwordGenerator - Generator of a password
 * @N: The length of the password
 */
void passwordGenerator()
{
	int i;

	char password [10];

	char *digits = "0123456789";
	int digits_len = strlen(digits);

	char *lowers = "abcdefghijklmnopqrstuvwxyz";
	int lowers_len = strlen(lowers);

	char *uppers = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int uppers_len = strlen(uppers);

	char *symbols = "!@#$%^&*()";
	int symbols_len = strlen(symbols);

	srand(time(NULL) * getpid());

	for (i = 0; i < 10; i++)
	{
		int char_type = rand() % 4;

		if (char_type == 0)
			password[i] = digits[rand() % digits_len];
		else if (char_type == 1)
			password[i] = lowers[rand() % lowers_len];
		else if (char_type == 2)
			password[i] = uppers[rand() % uppers_len];
		else
			password[i] = symbols[rand() % symbols_len];
	}
	password[10] = '\0';
	printf("Password: %s\n", password);
}
/**
 * main - check the code
 * Return: 0 on Succes
 */
int main(void)
{
	passwordGenerator();
	return (0);
}
