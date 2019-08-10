int check(char x[5],char y;int chk[4])
{
    int i;
    for (i=0;i<4;i++)
    {
        chk[i]=0;
    }
    for (i=0;i<4;i++)
    {
        if (x[i]==y)
            {
                chk[i]=1;
            }
    }
    return chk[4];
}
