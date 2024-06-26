void delete_at_loc(int *arr , int size , int pos)
{
    int i;

    for(i = pos-1; i < size ;i++)
    {
        *(arr + i) = *(arr + i + 1);
    }
} 
