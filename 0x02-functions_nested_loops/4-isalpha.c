/**
* _isalpha - checks if the character is alpanumeric
* @c character to check for
* Return: 0 or 1
*/
int _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
