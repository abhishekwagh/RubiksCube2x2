//checked
void base(char L[5],char U[5],char F[5],char D[5],char R[5],char B[5])
{
    int i,flag=0;
    for(i=0;flag==0;i++)
    {
        if(D[0]!='w'&&F[2]!='w'&&L[3]!='w'&&F[0]!='w'&&L[1]!='w'&&U[2]!='w')
        {
            up(F,R,L,B,U,1);
            printf("U\t");
            flag=0;
        }
        else
        {
            if(D[0]=='w')
            {
                flag=1;
            }
            else if(F[2]=='w')
            {
                front(F,R,L,D,U,1);
                up(F,R,L,B,U,1);
                front(F,R,L,D,U,3);
                up(F,R,L,B,U,2);
                left(F,B,L,D,U,3);
                up(F,R,L,B,U,1);
                left(F,B,L,D,U,1);
                printf("F U F' U U L' U L\t");
                flag=1;
            }
            else if(L[3]=='w')
            {
                front(F,R,L,D,U,1);
                up(F,R,L,B,U,3);
                front(F,R,L,D,U,3);
                left(F,B,L,D,U,3);
                up(F,R,L,B,U,3);
                left(F,B,L,D,U,1);
                printf("F U' F' L' U' L\t");
                flag=1;
            }
            else if(F[0]=='w')
            {
                front(F,R,L,D,U,1);
                up(F,R,L,B,U,1);
                front(F,R,L,D,U,3);
                printf("F U F'\t");
                flag=1;
            }
            else if(L[1]=='w')
            {
                left(F,B,L,D,U,3);
                up(F,R,L,B,U,3);
                left(F,B,L,D,U,1);
                printf("L' U' L\t");
                flag=1;
            }
            else if(U[2]=='w')
            {
                front(F,R,L,D,U,1);
                up(F,R,L,B,U,2);
                front(F,R,L,D,U,3);
                up(F,R,L,B,U,3);
                front(F,R,L,D,U,1);
                up(F,R,L,B,U,1);
                front(F,R,L,D,U,3);
                printf("F U U F' U' F U F'\t");
                flag=1;
            }
        }
    }
}

