#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
char x='x',o='o';
char ttt[3][3];
int insertx(int ,int);
int inserto();
int random();
int randomm();
int main()
{

    int q=0,i,j,pos,row,col,win;
    printf("player 1=x   and player 1 starts the game\n");
    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
            ttt[i][j]='0';

    printf("intital array looks like\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            printf("%c\t|",ttt[i][j]);
        printf("\n");
    }



    while(q!=9)
    {

        if(q%2==0)
        { printf("enter the position  from  the array where u want to insert in (x,y) format\n");
        scanf("%d %d",&row,&col);
            win=insertx(row,col);
            if(win==1)
            {
                printf("player 1 won the game\n");
                exit(0);
            }
        }
        else
        {
            win =inserto();
            if(win==1)
            {

                printf("computer won the game\n");
                 for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            printf("%c\t|",ttt[i][j]);
        printf("\n");
    }
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

printf("\n");
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
    int inserto()
    {   int row,col,i,j,temp;
           row=randomm();
           col=random();
        if(ttt[row][col]!='x'&&ttt[row][col]!='o')
        {printf("%d\t",row);
        printf("%d\n",col);
ttt[row][col]='o';
goto label;
        }

        temp=row;
        row=col;
        col=temp;

            if(ttt[row][col]!='x'&&ttt[row][col]!='o')
        ttt[row][col]='o';
        else
            while(ttt[row][col]=='x'||ttt[row][col]=='o')
        {
            row=random();
            col=randomm();
        }

        ttt[row][col]='o';
label:
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



int random()
{

    return rand()%3;
}
int randomm()
{

    return rand()%3;
}


