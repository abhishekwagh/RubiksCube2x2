//checked
void front(char F[5],char R[5],char L[5],char D[5],char U[5],int x)
{
    char t1,t2,t3,t5;
    char p1,p2,p3,p5;
    clock(F,x);
    while (x>0)
    {
        t1=L[1];
        t2=U[3];
        t3=R[2];
        t5=D[0];
        L[1]=t5;
        U[3]=t1;
        R[2]=t2;
        D[0]=t3;

        p1=L[3];
        p2=U[2];
        p3=R[0];
        p5=D[1];
        L[3]=p5;
        U[2]=p1;
        R[0]=p2;
        D[1]=p3;

        x=x-1;
    }
}


