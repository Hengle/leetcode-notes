int findComplement(int num) {

	if(num == 0)
	{
		return 1;
	}
	int ret = num;
	int it = 1<<30;
	while (it>0)
	{
		if((ret&it) == 0)
		{
			ret = (ret | it);
			it = it>>1;
		}
		else
		{
			ret = ret | (1<<31);
			ret = ~ret;
			break;
		}
	}
	
	return ret;
}
