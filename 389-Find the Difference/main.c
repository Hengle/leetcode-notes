char findTheDifference(char* s, char* t) {

	char ret = s[0];

	for(int i = 1 ; i < strlen(s); i++)
	{
		ret = ret^s[i];
	}
	for(int i = 0 ; i < strlen(t); i++)
	{
		ret = ret^t[i];
	}
	return ret;
}