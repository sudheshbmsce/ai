#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
char x='x',o='o';
char ttt[3][3];
int insertx(int ,int);
int inserto(int,int);
int main()
{

    int q=0,i,j,pos,row,col,win;
    printf("player 1=x && player 2=o  and player 1 starts the game\n");
    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
            ttt[i][j]=0;

    printf("intital array looks like\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            printf("%d\t|",ttt[i][j]);
        printf("\n");
    }



    while(q!=9)
    {
        printf("enter the position  from  the array where u want to insert in (x,y) format\n");
        scanf("%d %d",&row,&col);
        if(q%2==0)
        {
            win=insertx(row,col);
            if(win==1)
            {
                printf("player 1 won the game\n");
                exit(0);
            }
        }
        else
        {
            win =inserto(row,col);
            if(win==1)
            {

                printf("player2 won the game\n");
                exit(0);
            }
        }
        q++;
         for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            printf("%c\t|",ttt[i][j]);
        printf("\n");
    }


    }}
    int insertx(int row,int col)
    {
        int i,j;
        ttt[row][col]='x';

        for( i=0;i<3; i++)
        {
            if(ttt[i][col]!='x')
                break;
        }
        if(i==3)
            return 1;


        for(j=0; j<3; j++)
        {
            if(ttt[row][j]!='x')
                break;
        }
        if(j==3)
            return 1;



        for(i=0; i<3; i++)
        {
           if(ttt[i][i]!='x')
                break;
        }
        if(i==3)
            return 1;
            for(i=0; i<3; i++)
        {
           if(ttt[i][2-i]!='x')
                break;
        }
        if(i==3)
            return 1;
        else return 0;


    }
    int inserto(int row,int col)
    {

        ttt[row][col]='o';
        int i,j;
        for(i=0; i<3; i++)
        {
            if(ttt[i][col]!='o')
                break;
        }
        if(i==3)
            return 1;

        for(j=0; j<3; j++)
            if(ttt[row][j]!='o')
                break;

        if(j==3)
            return 1;


        for(i=0; i<3; i++)
            if(ttt[i][i]!='o')
                break;
                 if(i==2)
            return 1;

                   for(i=0; i<3; i++)
        {
           if(ttt[i][2-i]!='o')
                break;
        }
        if(i==3)
            return 1;
        else
            return 0;
    }







