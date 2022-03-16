/**
* _abs - return the absolute value of the argument
* @a: argument to operate on
* Return: abs of a number
*/
int _abs(int a)
{
	int retval;

	if (a < 0)
		retval = 0 - a;
	else
		retval = a;
	return (retval);
}
