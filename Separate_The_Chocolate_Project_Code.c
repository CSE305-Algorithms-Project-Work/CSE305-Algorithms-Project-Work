#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

void separateTheChocolate_and_split(int M,int N)
{
    printf("\nFULL CHOCOLATE BAR : |T||D||U|\n\n");// TOM CHOCOLATE BAR     : |T||U|
//                                                    DERPINA CHOCOLATE BAR : |U||D|
    char tom_chocolates[M][N];// [ROW][COLUMN]
    char derpina_chocolates[M][N];// [ROW][COLUMN]
    //initializing chocolates labels by matrix form
    tom_chocolates[0][0] = 'T';
    tom_chocolates[0][1] = 'U';
    derpina_chocolates[1][0] = 'U';
    derpina_chocolates[1][1] = 'D';

    //Displaying Chocolates
    for(M=0;M<1;M++)
        {
            printf("TOM's     CHOCOLATE BAR -> ");
            for(N=0;N<2;N++)
            {
                printf("|%c|",tom_chocolates[M][N]);// [M as ROW][N as COLUMN]
                if(N==1)
                {
                    printf("\n\n");
                }
            }
        }

    for(M=1;M<2;M++)
        {
            printf("DERPINA's CHOCOLATE BAR -> ");
            for(N=0;N<2;N++)
            {
                printf("|%c|",derpina_chocolates[M][N]);// [M as ROW][N as COLUMN]
                if(N==1)
                {
                    printf("\n");
                }
            }
        }

        // Declaration of delimiter
        const char tc[4] = "T";
        const char dc[4] = "D";
        char *tc_token;
        char *dc_token;

        // Use of strtok // get first token
        tc_token = strtok(tom_chocolates, tc);
        dc_token = strtok(derpina_chocolates, dc);

        // Checks for delimiter
        while(tc_token!=0)
        {
            printf("\n  |%s|\n",tc_token);
            tc_token = strtok(0, tc); // Use of strtok // go through other tokens
        }
        while(dc_token!=0)
        {
            printf("|%s|\n",dc_token);
            dc_token = strtok(0, dc); // Use of strtok // go through other tokens
        }
        int divide;
        //divide = (tom_chocolates + derpina_chocolates) * 2;
        printf("\nNumber of Ways the chocolate can divide: %d\n",divide);
}

int main()
{
    system("COLOR F0");
    printf("*** Separate the Chocolate ***\n\n");
    int i,j,M,N,K;
    //K = M*N;
    //Constraints:    ( 0≤ M, N ≤8 )
    //                ( 0≤ K ≤ M * N )
    printf("M N K\n");
    scanf("%d %d %d",&M, &N, &K);
    char label[i];
    for(i=0;i<M;i++)
        for(j=0;j<N;j++)
        {
            scanf(" %c",&label[i]);
        }

    separateTheChocolate_and_split(M,N); //calling function
    return 0;
}
