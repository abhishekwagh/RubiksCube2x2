//perfect
void clock(char y[5],int x)
{
    while (x>0)
    {
        char a,b,c,d;
        a=y[0];
        b=y[1];
        c=y[2];
        d=y[3];
        y[0]=c;
        y[1]=a;
        y[2]=d;
        y[3]=b;

        x=x-1;
    }
}

