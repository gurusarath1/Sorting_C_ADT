#include "Sorting.h"

void BubbleSort (void* ary, int dataTypeSize, int Length)
{
    int i,j;
    DATA_TYPE temp;

    // Start frist to penultimate element
    for(i=0; i<Length-1; i++)
    {

        for(j=0; j<Length-i-1; j++)
        {
            //if ( ary[j] > ary[j+1] )
            if (   *((DATA_TYPE*)(ary + dataTypeSize * j)) > *((DATA_TYPE*)(ary + dataTypeSize * (j+1)))   )
            {
                temp = *((DATA_TYPE*)(ary + dataTypeSize * j));
                *((DATA_TYPE*)(ary + dataTypeSize * j)) = *((DATA_TYPE*)(ary + dataTypeSize * (j+1)));
                *((DATA_TYPE*)(ary + dataTypeSize * (j+1))) = temp;

            }


        }


    }


}
