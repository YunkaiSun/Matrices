#include <stdio.h>
#include <stdlib.h>

int order3()
{

    //initial 18 3x3 matrices with every slot filled with -1
    printf("initial order of 3 matrices...\n");
    int o3[18][3][3];
    int i,j,k;
    for (i = 0; i < 18; i++)
    {
        for(j = 0; j < 3; j ++)
        {
            for (k = 0; k < 3; k++)
            {
                o3[i][j][k] = -1;
            }
        }
    }
    printf("initialization done\n");

    //formatting O-3 matrices with values;
    printf("formatting order of 3 matrices...\n");
    create_order_3_matrices(o3);
    printf("formatting done, ready for testing process.\n");


    //Testing for Associativety
    printf("Testing for associativety...\n");
    for (i = 0; i < 18; i++)
    {
        if (o3[i][0][0]!=o3[i][0][1])
        {
            if(o3[i][0][0]==o3[i][1][1] || o3[i][0][0]==o3[i][2][1])
            {
                if(o3[i][0][1]==o3[i][1][0] || o3[i][0][1]==o3[i][2][0])
                {}
                else
                   printf("the %dth matrix in order-3 does not follow associativety!! \n", i+1);
            }
            else
                printf("the %dth matrix in order-3 does not follow associativety!! \n", i+1);
        }

        if (o3[i][0][0]!=o3[i][0][2])
        {
            if(o3[i][0][0]==o3[i][1][2] || o3[i][0][0]==o3[i][2][2])
            {
                if(o3[i][0][2]==o3[i][1][0] || o3[i][0][2]==o3[i][2][0])
                {}
                else
                   printf("the %dth matrix in order-3 does not follow associativety!! \n", i+1);
            }
            else
                printf("the %dth matrix in order-3 does not follow associativety!! \n", i+1);
        }

        if (o3[i][0][2]!=o3[i][0][1])
        {
            if(o3[i][0][2]==o3[i][1][1] || o3[i][0][2]==o3[i][2][1])
            {
                if(o3[i][0][1]==o3[i][1][2] || o3[i][0][1]==o3[i][2][2])
                {}
                else
                   printf("the %dth matrix in order-3 does not follow associativety!! \n", i+1);
            }
            else
                printf("the %dth matrix in order-3 does not follow associativety!! \n", i+1);
        }
    }
    printf("Associativety Testing done.\n");

/*
    printf("print all order of 3 matrices\n");
    //print all O-3 matrices
    for (i = 0; i < 18; i++)
    {
        printf("\n\nfor the number %d matrix in all order-3, it's components are:\n",i+1);
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
                printf("[%d][%d] = %d\n", j+1, k+1, o3[i][j][k]);
        }
    }
*/



    //main function ends here
    return 0;
}


int create_order_3_matrices(int o3[18][3][3]){


    int i;
    //formatting values in all O-3 matrices
    i = 0;
    o3[i][0][0] = 0; o3[i][0][1] = 0; o3 [i][0][2] = 0;
    o3[i][1][0] = 0; o3[i][1][1] = 0; o3 [i][1][2] = 0;
    o3[i][2][0] = 0; o3[i][2][1] = 0; o3 [i][2][2] = 0;

    i = 1;
    o3[i][0][0] = 0; o3[i][0][1] = 0; o3 [i][0][2] = 0;
    o3[i][1][0] = 0; o3[i][1][1] = 0; o3 [i][1][2] = 0;
    o3[i][2][0] = 0; o3[i][2][1] = 0; o3 [i][2][2] = 1;

    i = 2;
    o3[i][0][0] = 0; o3[i][0][1] = 0; o3 [i][0][2] = 0;
    o3[i][1][0] = 0; o3[i][1][1] = 0; o3 [i][1][2] = 0;
    o3[i][2][0] = 0; o3[i][2][1] = 0; o3 [i][2][2] = 2;

    i = 3;
    o3[i][0][0] = 0; o3[i][0][1] = 0; o3 [i][0][2] = 0;
    o3[i][1][0] = 0; o3[i][1][1] = 0; o3 [i][1][2] = 0;
    o3[i][2][0] = 0; o3[i][2][1] = 1; o3 [i][2][2] = 2;

    i = 4;
    o3[i][0][0] = 0; o3[i][0][1] = 0; o3 [i][0][2] = 0;
    o3[i][1][0] = 0; o3[i][1][1] = 0; o3 [i][1][2] = 1;
    o3[i][2][0] = 0; o3[i][2][1] = 1; o3 [i][2][2] = 2;

    i = 5;
    o3[i][0][0] = 0; o3[i][0][1] = 0; o3 [i][0][2] = 0;
    o3[i][1][0] = 0; o3[i][1][1] = 1; o3 [i][1][2] = 0;
    o3[i][2][0] = 0; o3[i][2][1] = 0; o3 [i][2][2] = 2;

    i = 6;
    o3[i][0][0] = 0; o3[i][0][1] = 0; o3 [i][0][2] = 0;
    o3[i][1][0] = 0; o3[i][1][1] = 1; o3 [i][1][2] = 1;
    o3[i][2][0] = 0; o3[i][2][1] = 1; o3 [i][2][2] = 1;

    i = 7;
    o3[i][0][0] = 0; o3[i][0][1] = 0; o3 [i][0][2] = 0;
    o3[i][1][0] = 0; o3[i][1][1] = 1; o3 [i][1][2] = 1;
    o3[i][2][0] = 0; o3[i][2][1] = 1; o3 [i][2][2] = 2;

    i = 8;
    o3[i][0][0] = 0; o3[i][0][1] = 0; o3 [i][0][2] = 0;
    o3[i][1][0] = 0; o3[i][1][1] = 1; o3 [i][1][2] = 1;
    o3[i][2][0] = 0; o3[i][2][1] = 2; o3 [i][2][2] = 2;

    i = 9;
    o3[i][0][0] = 0; o3[i][0][1] = 0; o3 [i][0][2] = 0;
    o3[i][1][0] = 0; o3[i][1][1] = 1; o3 [i][1][2] = 2;
    o3[i][2][0] = 0; o3[i][2][1] = 2; o3 [i][2][2] = 1;

    i = 10;
    o3[i][0][0] = 0; o3[i][0][1] = 0; o3 [i][0][2] = 0;
    o3[i][1][0] = 0; o3[i][1][1] = 0; o3 [i][1][2] = 0;
    o3[i][2][0] = 2; o3[i][2][1] = 2; o3 [i][2][2] = 2;

    i = 11;
    o3[i][0][0] = 0; o3[i][0][1] = 0; o3 [i][0][2] = 0;
    o3[i][1][0] = 0; o3[i][1][1] = 1; o3 [i][1][2] = 0;
    o3[i][2][0] = 2; o3[i][2][1] = 2; o3 [i][2][2] = 2;

    i = 12;
    o3[i][0][0] = 0; o3[i][0][1] = 0; o3 [i][0][2] = 0;
    o3[i][1][0] = 0; o3[i][1][1] = 1; o3 [i][1][2] = 2;
    o3[i][2][0] = 2; o3[i][2][1] = 2; o3 [i][2][2] = 2;

    i = 13;
    o3[i][0][0] = 0; o3[i][0][1] = 0; o3 [i][0][2] = 0;
    o3[i][1][0] = 1; o3[i][1][1] = 1; o3 [i][1][2] = 1;
    o3[i][2][0] = 2; o3[i][2][1] = 2; o3 [i][2][2] = 2;

    i = 14;
    o3[i][0][0] = 0; o3[i][0][1] = 0; o3 [i][0][2] = 2;
    o3[i][1][0] = 0; o3[i][1][1] = 0; o3 [i][1][2] = 2;
    o3[i][2][0] = 2; o3[i][2][1] = 2; o3 [i][2][2] = 0;

    i = 15;
    o3[i][0][0] = 0; o3[i][0][1] = 0; o3 [i][0][2] = 2;
    o3[i][1][0] = 0; o3[i][1][1] = 1; o3 [i][1][2] = 2;
    o3[i][2][0] = 2; o3[i][2][1] = 2; o3 [i][2][2] = 0;

    i = 16;
    o3[i][0][0] = 0; o3[i][0][1] = 1; o3 [i][0][2] = 1;
    o3[i][1][0] = 1; o3[i][1][1] = 0; o3 [i][1][2] = 0;
    o3[i][2][0] = 1; o3[i][2][1] = 0; o3 [i][2][2] = 0;

    i = 17;
    o3[i][0][0] = 0; o3[i][0][1] = 1; o3 [i][0][2] = 2;
    o3[i][1][0] = 1; o3[i][1][1] = 2; o3 [i][1][2] = 0;
    o3[i][2][0] = 2; o3[i][2][1] = 0; o3 [i][2][2] = 1;

    return 0;
}
