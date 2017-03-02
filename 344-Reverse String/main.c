char* reverseString(char* s) {
    int len = strlen(s);
    char * ret = malloc((len+1)*sizeof(char));
    for(int i = 0 ; i < len ; i++)
    {
        ret[i] = s[len -1 - i];
    }
    ret[len] = '\0';
    return ret;
}