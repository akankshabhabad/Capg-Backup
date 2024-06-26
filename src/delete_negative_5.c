int* delete_negative(int *arr , int *tmp , int size)
{
    int i,j;
    j = 0;
    for(i = 0 ; i < size ; i++)
        {
            if(*(arr + i) >= 0)
                {   
                    *(arr + j) = *(arr + i);
                    j++;
                 }
            *tmp = j;
        }
    return arr;
}
