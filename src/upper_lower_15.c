char* upperToLower(char *str)
{
    int i;
    i=0;
    while(*(str+i)!='\0')
    {
       if(*(str+i) >= 'A' && *(str+i) <= 'Z')
       {
           //*(str+i) += 32;
           *(str+i) += 'a' - 'A';
       }
       i++;
    }

    return str;
}
