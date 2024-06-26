int duplicate_num(int *arr,int size)
{
    int i,j;
    
    for(i = 0; i < size; i++)
    {
        for(j = i + 1; j < size; j++)
        {
            if(*(arr + i) == *(arr + j))
            {
                return 1;
            }
        }
    }
       return 0;
}
