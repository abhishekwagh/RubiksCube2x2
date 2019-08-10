//checked
void right(char F[5],char R[5],char B[5],char D[5],char U[5],int x)
{
    char t1,t2,t3,t4;
    char p1,p2,p3,p4;
    clock(R,x);
    while(x>0)
    {
        t1=F[1];
        t2=U[1];
        t3=B[2];
        t4=D[1];
        F[1]=t4;
        U[1]=t1;
        B[2]=t2;
        D[1]=t3;

        p1=F[3];
        p2=U[3];
        p3=B[0];
        p4=D[3];
        F[3]=p4;
        U[3]=p1;
        B[0]=p2;
        D[3]=p3;

        x=x-1;
    }
}

