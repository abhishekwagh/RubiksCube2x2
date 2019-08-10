//checked
void oll(char U[5],char F[5],char B[5],char R[5],char L[5],char D[5])
{
    int i=0;
    printf("\n");
    while(i==0)
    {
        if(U[0]==U[1]&&U[1]==U[2]&&U[2]==U[3])
        {
            i=1;
        }

        if((U[1]=='y'&&U[3]=='y')&&(L[0]=='y'&&L[1]=='y'))
        {
            front(F,R,L,D,U,1);
            right(F,R,B,D,U,1);
            up(F,R,L,B,U,1);
            right(F,R,B,D,U,3);
            up(F,R,L,B,U,3);
            front(F,R,L,D,U,3);
            i=1;
            printf("F (R U R' U') F'");

        }
        if((U[1]=='y'&&U[3]=='y')&&(B[1]=='y'&&F[0]=='y'))
        {
            right(F,R,B,D,U,1);
            up(F,R,L,B,U,1);
            right(F,R,B,D,U,3);
            up(F,R,L,B,U,3);
            right(F,R,B,D,U,3);
            front(F,R,L,D,U,1);
            right(F,R,B,D,U,1);
            front(F,R,L,D,U,3);
            i=1;
            printf("(R U R' U') (R' F R F')");

        }
        if((U[0]=='y'&&U[3]=='y')&&(F[0]=='y'&&R[1]=='y'))
        {
            front(F,R,L,D,U,1);
            right(F,R,B,D,U,1);
            up(F,R,L,B,U,3);
            right(F,R,B,D,U,3);
            up(F,R,L,B,U,3);
            right(F,R,B,D,U,1);
            up(F,R,L,B,U,1);
            right(F,R,B,D,U,3);
            front(F,R,L,D,U,3);
            i=1;
            printf("F (R U' R') U' (R U R') F'");

        }
        if((U[2]=='y'&&F[1]=='y')&&(B[1]=='y'&&R[1]=='y'))
        {
            right(F,R,B,D,U,1);
            up(F,R,L,B,U,1);
            right(F,R,B,D,U,3);
            up(F,R,L,B,U,1);
            right(F,R,B,D,U,1);
            up(F,R,L,B,U,2);
            right(F,R,B,D,U,3);
            i=1;
            printf("(R U R' U) (R U' U' R')");

        }
        if((U[3]=='y'&&F[0]=='y')&&(L[0]=='y'&&B[0]=='y'))
        {
            left(F,B,L,D,U,3);
            up(F,R,L,B,U,3);
            left(F,B,L,D,U,1);
            up(F,R,L,B,U,3);
            left(F,B,L,D,U,3);
            up(F,R,L,B,U,2);
            left(F,B,L,D,U,1);
            i=1;
            printf("(L' U' L U') (L' U U L)");

        }
        if((F[1]=='y'&&B[0]=='y')&&(L[0]=='y'&&L[1]=='y'))
        {
            front(F,R,L,D,U,1);
            right(F,R,B,D,U,1);
            up(F,R,L,B,U,1);
            right(F,R,B,D,U,3);
            up(F,R,L,B,U,3);
            right(F,R,B,D,U,1);
            up(F,R,L,B,U,1);
            right(F,R,B,D,U,3);
            up(F,R,L,B,U,3);
            front(F,R,L,D,U,3);
            i=1;
            printf("F (R U R' U') (R U R' U') F'");

        }
        if((F[0]=='y'&&F[1]=='y')&&(B[0]=='y'&&B[1]=='y'))
        {
            right(F,R,B,D,U,2);
            up(F,R,L,B,U,2);
            right(F,R,B,D,U,1);
            up(F,R,L,B,U,2);
            right(F,R,B,D,U,2);
            i=1;
            printf("2R 2U R 2U 2R");

        }
        if(i==0)
        {
            up(F,R,L,B,U,1);
            printf("U\t");
            i=0;
        }
    }
}
