char	*number_to_words(unsigned long n)
{
	if(n == 0)
		return ("Zero");
	const char *magnitudes[] = {"", "thousand", "million", "billion", "trillion"};

	unsigned long *blocks;
	int block_count;
	int	i;


	blocks = split_into_blocks();

	while (i)
		{
			block_text = convert_block(bloks[i]));
	}
