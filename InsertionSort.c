#include "Sorting.h"

void InsertionSort (void* ary, int dataTypeSize, int Length)
{

    DATA_TYPE temp;
    int i,j;

    for (i=1; i<Length; i++)
    {
        j = i;

        while (   *((DATA_TYPE*)(ary + j * dataTypeSize)) <  *((DATA_TYPE*)(ary + (j-1) * dataTypeSize))  &&  j > 0   )
        {

            temp = *((DATA_TYPE*)(ary + j * dataTypeSize));
            *((DATA_TYPE*)(ary + j * dataTypeSize)) = *((DATA_TYPE*)(ary + (j-1) * dataTypeSize));
            *((DATA_TYPE*)(ary + (j-1) * dataTypeSize)) = temp;

            j--;

        }



    }


}
