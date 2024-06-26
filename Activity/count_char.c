int countCharacters( char *str)
{
    int count;
    count = 0;
    
    while(*str != '\0')
    {
      //  if(*str != ' ')
            count++;
        str++;

    }
    return count;

}
