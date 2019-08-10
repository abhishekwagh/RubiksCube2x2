//checked
void left(char F[5],char B[5],char L[5],char D[5],char U[5],int x)
{
    int t1,t2,t3,t4;
    int p1,p2,p3,p4;
    clock(L,x);
    while(x>0)
    {
        t1=F[0];
        t2=U[0];
        t3=B[3];
        t4=D[0];
        F[0]=t2;
        U[0]=t3;
        B[3]=t4;
        D[0]=t1;

        p1=F[2];
        p2=U[2];
        p3=B[1];
        p4=D[2];
        F[2]=p2;
        U[2]=p3;
        B[1]=p4;
        D[2]=p1;

        x=x-1;
    }
}
