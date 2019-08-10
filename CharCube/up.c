//checked
void up(char F[5],char R[5],char L[5],char B[5],char U[5],int x)
{
    char t1,t2,t3,t4;
    char p1,p2,p3,p4;
    clock(U,x);
    while(x>0)
    {
        t1=F[0];
        t2=L[0];
        t3=B[0];
        t4=R[0];
        F[0]=t4;
        L[0]=t1;
        B[0]=t2;
        R[0]=t3;

        p1=F[1];
        p2=L[1];
        p3=B[1];
        p4=R[1];
        F[1]=p4;
        L[1]=p1;
        B[1]=p2;
        R[1]=p3;

        x=x-1;
    }
}
