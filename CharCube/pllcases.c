void pll(char U[5],char F[5],char B[5],char R[5],char L[5],char D[5])
{
    int i,flag,flagu=0,flagd=0;
    printf("\n");
        for(i=0;i<4;i++)
        {
            if(F[0]==F[1])
            {
                flagu++;
            }
            if(F[2]==F[3])
            {
                flagd++;
            }
            up(F,R,L,B,U,1);
            down(F,R,L,D,B,1);
//            printf("U\t");
  //          printf("D\t");
        }
    //printf("\nFlagD=%d FlagU=%d   ",flagd,flagu);
    if(flagd==0&&flagu==0)
    {
        right(F,R,B,D,U,2);
        front(F,R,L,D,U,2);
        right(F,R,B,D,U,2);

        printf("(2R 2F 2R)");
    }
    flag=0;
    if(flagd==1&&flagu==0)
    {
        while(flag==0)
        {
            if(F[2]==F[3])
            {
                left(F,B,L,D,U,1);
                down(F,R,L,D,B,3);
                left(F,B,L,D,U,1);
                front(F,R,L,D,U,2);
                left(F,B,L,D,U,3);
                down(F,R,L,D,B,1);
                left(F,B,L,D,U,3);
                flag=1;
                printf("(L D' L) 2F (L' D L')");
            }
            else
            {
                down(F,R,L,D,B,1);
                printf("D\t");
            }
        }
    }
    if(flagd==0&&flagu==1)
    {
        flag=0;
        while(flag==0)
        {
            if(F[0]==F[1])
            {
                right(F,R,B,D,U,1);
                up(F,R,L,B,U,3);
                right(F,R,B,D,U,1);
                front(F,R,L,D,U,2);
                right(F,R,B,D,U,3);
                up(F,R,L,B,U,1);
                right(F,R,B,D,U,3);
                flag=1;
                printf("(R U' R) 2F (R' U R')");
            }
            else
            {
                up(F,R,L,B,U,1);
                printf("U\t");
            }
        }
    }
    if(flagd==1&&flagu==1)
    {
        flag=0;
        while(flag==0)
        {
            if(B[0]==B[1])
            {
                if(B[2]==B[3])
                {
                    right(F,R,B,D,U,2);
                    up(F,R,L,B,U,3);
                    right(F,R,B,D,U,2);
                    up(F,R,L,B,U,2);
                    back(B,R,L,D,U,2);
                    up(F,R,L,B,U,3);
                    back(B,R,L,D,U,2);
                    flag=1;
                    printf("(2R U' 2R 2U 2B U' 2B)");
                }
                else
                {
                    down(F,R,L,D,B,1);
                    printf("D\t");
                }
            }
            else
            {
                up(F,R,L,B,U,1);
                printf("U\t");
            }
        }
    }
    if(flagd==4&&flagu==0)
    {
        front(F,R,L,D,U,1);
        right(F,R,B,D,U,3);
        up(F,R,L,B,U,3);
        right(F,R,B,D,U,3);
        up(F,R,L,B,U,3);
        right(F,R,B,D,U,1);
        up(F,R,L,B,U,1);
        right(F,R,B,D,U,3);
        front(F,R,L,D,U,1);
        right(F,R,B,D,U,1);
        up(F,R,L,B,U,1);
        right(F,R,B,D,U,3);
        up(F,R,L,B,U,3);
        right(F,R,B,D,U,3);
        front(F,R,L,D,U,1);
        right(F,R,B,D,U,1);
        front(F,R,L,D,U,3);
        printf("(F R U' R' U' R U R' F) (R U R' U') (R' F R F')");
    }
    if(flagd==0&&flagu==4)
    {
        right(F,R,B,D,U,1);
        right(F,R,B,D,U,1);
        left(F,B,L,D,U,1);
        left(F,B,L,D,U,1);

        front(F,R,L,D,U,1);
        right(F,R,B,D,U,3);
        up(F,R,L,B,U,3);
        right(F,R,B,D,U,3);
        up(F,R,L,B,U,3);
        right(F,R,B,D,U,1);
        up(F,R,L,B,U,1);
        right(F,R,B,D,U,3);
        front(F,R,L,D,U,1);
        right(F,R,B,D,U,1);
        up(F,R,L,B,U,1);
        right(F,R,B,D,U,3);
        up(F,R,L,B,U,3);
        right(F,R,B,D,U,3);
        front(F,R,L,D,U,1);
        right(F,R,B,D,U,1);
        front(F,R,L,D,U,3);
        printf("(2R 2L) (F R' U' R' U' R U R' F) (R U R' U') (R' F R F')");
    }
    if(flagd==4&&flagu==1)
    {
        flag=0;
        while(flag==0)
        {
            if(L[0]==L[1])
            {
                right(F,R,B,D,U,1);
                up(F,R,L,B,U,1);
                right(F,R,B,D,U,3);
                up(F,R,L,B,U,3);
                right(F,R,B,D,U,3);
                front(F,R,L,D,U,1);
                right(F,R,B,D,U,2);
                up(F,R,L,B,U,3);
                right(F,R,B,D,U,3);
                up(F,R,L,B,U,3);
                right(F,R,B,D,U,1);
                up(F,R,L,B,U,1);
                right(F,R,B,D,U,3);
                front(F,R,L,D,U,3);
                flag=1;
                printf("(R U R' U') (R' F 2R U') (R' U' R U R' F)");
            }
            else
            {
                up(F,R,L,B,U,1);
                printf("U\t");
            }
        }
    }
    if(flagd==1&&flagu==4)
    {
        right(F,R,B,D,U,1);
        right(F,R,B,D,U,1);
        left(F,B,L,D,U,1);
        left(F,B,L,D,U,1);
        printf(" (2R 2L) ");
        flag=0;
        while(flag==0)
        {
            if(L[0]==L[1])
            {
                right(F,R,B,D,U,1);
                up(F,R,L,B,U,1);
                right(F,R,B,D,U,3);
                up(F,R,L,B,U,3);
                right(F,R,B,D,U,3);
                front(F,R,L,D,U,1);
                right(F,R,B,D,U,2);
                up(F,R,L,B,U,3);
                right(F,R,B,D,U,3);
                up(F,R,L,B,U,3);
                right(F,R,B,D,U,1);
                up(F,R,L,B,U,1);
                right(F,R,B,D,U,3);
                front(F,R,L,D,U,3);
                flag=1;
                printf("(R U R' U') (R' F 2R U') (R' U' R U R' F)");
            }
            else
            {
                up(F,R,L,B,U,1);
                printf("U\t");
            }
        }
    }
}
