//perfect
void printface(char x[5])
{
    int i;
    printf("\n");
    for(i=0;x[i]!='\0';i++)
    {
        printf("\t%c",x[i]);
        if(i==1)
            printf("\n\n\n");
    }
}
