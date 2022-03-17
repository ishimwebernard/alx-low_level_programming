/**
* _isdigit - checks if the character is digit
* @c: character to check for
* Return: 0 or 1
*/
int _isdigit(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (0);
	else
		return (1);
}
