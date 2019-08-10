#include<stdio.h>
#include<conio.h>
void clock(char y[5]);
void instruct();

void base(char L[5],char U[5],char F[5],char D[5],char R[5],char B[5]);
void right(char F[5],char R[5],char B[5],char D[5],char U[5],int x);
void up(char F[5],char R[5],char L[5],char B[5],char U[5],int x);
void left(char F[5],char B[5],char L[5],char D[5],char U[5],int x);
void down(char F[5],char R[5],char L[5],char D[5],char B[5],int x);
void front(char F[5],char R[5],char L[5],char D[5],char U[5],int x);
void back(char B[5],char R[5],char L[5],char D[5],char U[5],int x);
void oll(char U[5],char F[5],char B[5],char R[5],char L[5],char D[5]);
void finalcheck(char U[5],char F[5],char B[5],char R[5],char L[5],char D[5]);

void printface(char x[5]);

char F[5],U[5],B[5],D[5],R[5],L[5],C[5];
int main()
{
    int  i,j,flag=0,flagd=0,flagu=0;
    instruct();
    printf("Enter the front color characters:\n");
    gets(F);
    printface(F);
    printf("\nEnter the up color characters:\n");
    gets(U);
    printface(U);
    printf("\nEnter the down color characters:\n");
    gets(D);
    printface(D);
    printf("\nEnter the left color characters:\n");
    gets(L);
    printface(L);
    printf("\nEnter the right color characters:\n");
    gets(R);
    printface(R);
    printf("\nEnter the back color characters:\n");
    gets(B);
    printface(B);
    printf("\n========================SOLUTION==========================\n");
//Base Making
    printf("\n");
    base(L,U,F,D,R,B);
    down(F,R,L,D,B,1);
    printf("\nD\t");
    base(L,U,F,D,R,B);
    down(F,R,L,D,B,1);
    printf("\nD\t");
    base(L,U,F,D,R,B);
    down(F,R,L,D,B,1);
    printf("\nD\t");
    base(L,U,F,D,R,B);
//OLL
    oll(U,F,B,R,L,D);
//PLL
    pll(U,F,B,R,L,D);

//Last Check
    finalcheck(U,F,B,R,L,D);


   // printallface(U,F,D,L,R,B);
}

