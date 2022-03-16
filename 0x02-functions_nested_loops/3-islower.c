/**
* _islower - see if the letter is lowercase or not
* @c: The character to check for
* Return: 1 or 0
*/

int _islower(int c)
{
	int retval;

	if (c >= 'a' && c <= 'z')
	{
		retval = 1;
	} else
	{
		retval = 0;
	}

	return (retval);
}
