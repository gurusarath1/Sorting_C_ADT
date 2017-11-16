#include "Sorting.h"

void SelectionSort(void* ary, int dataTypeSize, int Length)
{
    DATA_TYPE temp;
    int locationOfSmallest;
    int i, j;


    for(i=0; i<Length-1; i++)
    {
        locationOfSmallest = i;

        for(j=i+1; j < Length; j++)
            // if ( ary[smallest] > ary[j] )
            if(   *((DATA_TYPE*)( ary + dataTypeSize * locationOfSmallest )) >  *((DATA_TYPE*)( ary + dataTypeSize*j ))    )
                locationOfSmallest = j;

        temp = *(    (DATA_TYPE*)( ary + (i * dataTypeSize) )    );
        *((DATA_TYPE*)( ary + (i * dataTypeSize) )) = *((DATA_TYPE*)( ary + (locationOfSmallest * dataTypeSize) ));
        *((DATA_TYPE*)( ary + (locationOfSmallest * dataTypeSize) )) = temp;


    }


}
