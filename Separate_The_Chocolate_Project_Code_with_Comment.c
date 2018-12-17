#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

void separateTheChocolate_and_split(int M,int N) //int M and N are the arguments of this function
{
    printf("\nFULL CHOCOLATE BAR : |T||D||U|\n\n");// TOM CHOCOLATE BAR     : |T||U|
//                                                    DERPINA CHOCOLATE BAR : |U||D|
    char tom_chocolates[M][N];// [ROW][COLUMN]
    char derpina_chocolates[M][N];// [ROW][COLUMN]
    //initializing chocolates labels by 2d array
    tom_chocolates[0][0] = 'T'; // initialize T in 0,0 position which means row index 0 and column index 0
    tom_chocolates[0][1] = 'U'; // initialize U in 0,1 position which means row index 0 and column index 1
    derpina_chocolates[1][0] = 'U'; // initialize U in 1,0 position which means row index 1 and column index 0
    derpina_chocolates[1][1] = 'D'; // initialize D in 1,1 position which means row index 0 and column index 1

    //Displaying Tom's Chocolate
    for(M=0;M<1;M++)
        {
            printf("TOM's     CHOCOLATE BAR -> ");
            for(N=0;N<2;N++)
            {
                printf("|%c|",tom_chocolates[M][N]);// Output of the Tom's Chocolate
                if(N==1)    // Here N is the Column of the Tom's Chocolate and when N = 1, it will go to the next new line
                {
                    printf("\n\n"); // print next new line
                }
            }
        }
    //Displaying Derpina's Chocolate
    for(M=1;M<2;M++)
        {
            printf("DERPINA's CHOCOLATE BAR -> ");
            for(N=0;N<2;N++)
            {
                printf("|%c|",derpina_chocolates[M][N]);// Output of the Derpina's Chocolate
                if(N==1) // Here N is the Column of the Derpina's Chocolate and when N = 1, it will go to the next new line
                {
                    printf("\n"); // print next new line
                }
            }
        }

        // Declaration of delimiter
        // A delimiter is one or more characters that separates text strings
        const char tc[4] = "T"; //initializing constant character data
        const char dc[4] = "D"; //initializing constant character data
        char *tc_token;
        char *dc_token;

        // Use of strtok and get first and second token
        tc_token = strtok(tom_chocolates, tc); // strtok breaks string into a series of tokens using the delimiter
        dc_token = strtok(derpina_chocolates, dc); // strtok breaks string into a series of tokens using the delimiter

        // Checks for delimiter
        while(tc_token!=0) // when the value of tc_token is not zero, otherwise no output if token is zero
        {
            printf("\n  |%s|\n",tc_token); //separate T and print the token
            tc_token = strtok(0, tc); // Use of strtok and go through other tokens
        }
        while(dc_token!=0) // when the value of dc_token is not zero, otherwise no output if token is zero
        {
            printf("|%s|\n",dc_token); //separate D and print the token
            dc_token = strtok(0, dc); // Use of strtok and go through other tokens
        }
        //print length of the splitted chocolates
        printf("\nThe Number of Ways that Chocolate can Divide: %d\n", ((sizeof(tom_chocolates[0][1]) + (sizeof(derpina_chocolates[1][0])))));
}

int main() //driver function
{
    system("COLOR F0"); //compiler background and font colour
    printf("*** Separate the Chocolate ***\n\n");
    int i,j,M,N,K;
    //Difference between Pieces = The Maximum Value of K which is greater or equal to 0 but less than or equal to M*N;
    //Limits:    ( 0≤ M, N ≤8 )
    //           ( 0≤ K ≤ M * N )
    printf("M N K\n");
    scanf("%d %d %d",&M, &N, &K); //taking three inputs M,N and K from the user
    char label[i]; //character variable
    for(i=0;i<M;i++)
        for(j=0;j<N;j++)
        {
            scanf(" %c",&label[i]); //taking character inputs from the user
        }

    separateTheChocolate_and_split(M,N); //calling function as user input the value of M which is ROW and N which is COLUMN
    return 0; //program's execution is success and exited
}
