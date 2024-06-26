int strindex(char *str, char ch)
{
    int i;
    i = 0;
    while(*(str + i) != '\0')
    {
        if(*(str + i)== ch)
        {
            return i;
        }
        i++;
    }
    return -1;
 }
