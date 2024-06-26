
char* delete_a_from_str(char *str)
{
    int i,j;
    i = 0;
    while(*(str + i)!='\0')
    {
      if((*(str + i) == 'a'))
      {
          j = i;
          while(*(str + j)!='\0')
          {
            *(str + j) = *(str + j + 1);
            j++;
          }
      }

      else
      {
          i++;
      }
    }
}
