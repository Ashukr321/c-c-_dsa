// here we see the how to ceate the adjacency of the matrix

// preprocessor
#include <stdio.h>
#include <conio.h>

//  for (int i = 0; i < r; i++)
//     {
//         for (int j= 0; j < c; j++)
//         {
//             printf("%d ",adjMat[i][j]);
//         }
//         printf("\n");
//     }

// main method start here ...
int main()
{
    // create the vertex v and e
    // v => for the vertex of  the graph
    // e => edged of the the graph
    int v, e;

    // step1  take the number of the vertices from the users

    printf("enter\n how many vertices \n");

    // uses scanf for the user input
    scanf("%d ", &v);
    int r = v;
    int c = v;
    // step2 create  a matrix of the size v * v  and
    int adjMat[r][c];

    // step3 set the all the value of the matirx is 0 bedfalut value

    // outer loop for the the iteration of the the rows
    for (int i = 0; i < r; i++)
    {
        // inner loop for the col
        for (int j = 0; j < c; j++)
        {
            adjMat[i][j] = 0;
        }
    }

    // step 4  take input from the user how many edge
    printf("\nhow many edged");

    scanf("%d ", &e);
    for (int i = 0; i <= e; i++)
    {
        // declare two variables
        //  u and v
        //  u => source
        //  v => destination
        int u, v;

        scanf("%d %d \n", &u, &v);
        // here we set the path
        // between the source and destination

        adjMat[u][v] = 1;
        adjMat[v][u] = 1;
    }

    // for (int i = 0; i < r; i++)
    // {
    //     for (int j = 0; j < c; j++)
    //     {
    //         printf("%d ", adjMat[i][j]);
    //     }
    //     printf("\n");
    // }

    return 0;
}