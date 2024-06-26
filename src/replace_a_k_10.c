char* replace_a_k(char *str)
{
  char* ptr = str;   
    while(*str !='\0')
    {
        if(*str == 'a')
        {
            *str = 'k';
        }
        str++;

    }
  return ptr;
}
