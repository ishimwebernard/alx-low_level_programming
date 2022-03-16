int _islower(int c)
{
	int return_value;
	if(c >= 'a' && c <= 'z')
	{
		return_value = 1;
	}else
	{
		return_value = 0;
	}
	return return_value;
}
