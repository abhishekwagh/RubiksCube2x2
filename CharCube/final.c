void finalcheck(char U[5],char F[5],char B[5],char R[5],char L[5],char D[5])
{
    int i=0;
    printf("\n");
    while(i==0)
    {
        if(L[0]==L[2]&&F[0]==F[2])
        {
            printf("\n===================Cube Is Solved===================\n");
            i=1;
        }
        else
        {
            up(F,R,L,B,U,1);
            printf("U\t");
        }
    }
}
