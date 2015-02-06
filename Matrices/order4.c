#include <stdio.h>
#include <stdlib.h>

int order4()
{

    //initial 126 4x4 matrices with every slot filled with -1
    printf("initial order of 4 matrices...\n");
    int o4[126][4][4];
    int i,j,k;
    for (i = 0; i < 126; i++)
    {
        for(j = 0; j < 4; j ++)
        {
            for (k = 0; k < 4; k++)
            {
                o4[i][j][k] = -1;
            }
        }
    }
    printf("initialization done\n");

    //formatting O-4 matrices with values;
    printf("formatting order of 4 matrices...\n");
    create_order_4_matrices(o4);
    printf("formatting done\n");


    printf("print all order of 4 matrices\n");
    //print all O-4 matrices
    for (i = 0; i < 3; i++)
    {
        printf("\n\nfor the number %d matrix in all order-4, it's components are:\n",i+1);
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 4; k++)
                printf("[%d][%d] = %d\n", j+1, k+1, o4[i][j][k]);
        }
    }



    //main function ends here
    return 0;
}


int create_order_4_matrices(int o4[126][4][4]){


    int i;
    //formatting values in all O-4 matrices
    i = 0;
    o4[i][0][0] = 0; o4[i][0][1] = 0; o4[i][0][2] = 0; o4[i][0][3] = 0;
    o4[i][1][0] = 0; o4[i][1][1] = 0; o4[i][1][2] = 0; o4[i][1][3] = 0;
    o4[i][2][0] = 0; o4[i][2][1] = 0; o4[i][2][2] = 0; o4[i][2][3] = 0;
    o4[i][3][0] = 0; o4[i][3][1] = 0; o4[i][3][2] = 0; o4[i][3][3] = 0;



    return 0;
}
