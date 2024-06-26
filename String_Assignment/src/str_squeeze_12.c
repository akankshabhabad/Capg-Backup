char* strsqueeze(char *str)
{
    char* temp = str ;
    char* res = temp;
    while(*str != '\0')
    {
        if(*str != *(str + 1))
         {
           *temp = *str;
           temp++;
         }
        str++;
        
    }
    *temp = '\0';
    return res;
}
