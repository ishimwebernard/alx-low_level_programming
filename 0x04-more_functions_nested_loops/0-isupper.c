/**
* _isupper - see if the letter is lowercase or not
* @c: The character to check for
* Return: 1 or 0
*/

int _isupper(int c)
{
	int retval;

	if (c >= 'A' && c <= 'Z')
	{
		retval = 1;
	} else
	{
		retval = 0;
	}

	return (retval);
}
