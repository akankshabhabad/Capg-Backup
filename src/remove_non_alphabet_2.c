extern int isAlphabet(char );

void remove_non_alpha(char *str)
{
    int i,j;

    for(i = 0 ,j = 0; str[i]!='\0' ; i++)
    {
        if(isAlphabet(str[i]) || str[i] == ' ')
        {      
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0';

}

