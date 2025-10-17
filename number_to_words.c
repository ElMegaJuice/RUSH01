char	*number_to_words(unsigned long n)
{
	if(n == 0)
	{
		return ("Zero");
	}
	const char *magnitudes[] = {"", "thousand", "million", "billion", "trillion"};
	
