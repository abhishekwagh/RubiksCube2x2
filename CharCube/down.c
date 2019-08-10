//checked
void down(char F[5],char R[5],char L[5],char D[5],char B[5],int x)
{
    char t1,t2,t3,t4;
    char p1,p2,p3,p4;
    clock(D,x);
    while(x>0)
    {
        t1=F[2];
        t2=R[2];
        t3=B[2];
        t4=L[2];
        F[2]=t4;
        R[2]=t1;
        B[2]=t2;
        L[2]=t3;

        p1=F[3];
        p2=R[3];
        p3=B[3];
        p4=L[3];
        F[3]=p4;
        R[3]=p1;
        B[3]=p2;
        L[3]=p3;

        x=x-1;
    }
}

