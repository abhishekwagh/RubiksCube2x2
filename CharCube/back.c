//checked
void back(char B[5],char R[5],char L[5],char D[5],char U[5],int x)
{
    char t1,t2,t3,t4;
    char p1,p2,p3,p4;
     clock(B,x);
     while(x>0)
     {
        t1=R[1];
        t2=U[0];
        t3=L[2];
        t4=D[3];
        R[1]=t4;
        U[0]=t1;
        L[2]=t2;
        D[3]=t3;

        p1=R[3];
        p2=U[1];
        p3=L[0];
        p4=D[2];
        R[3]=p4;
        U[1]=p1;
        L[0]=p2;
        D[2]=p3;

        x=x-1;
     }
}
