
#include<stdio.h>




void display_batsmen(int runs[],int inngs,int no);

void display_bowler(int runs[],int inngs,int wkts[],float overs[],int maidens[]);


int main()
{
    


    int runs[300],wkts[300],maidens[300],inngs,no,pt;
    float overs[300];

    printf("select the player type \n1.Batsmen\n2.Bowler\n");
    scanf("%d",&pt);

    if(pt == 1)
    {
        printf("enter the number of innings batsmen played:");
        scanf("%d",&inngs);

        for(int i=0;i<inngs;i++)
        {
            printf("enter the runs scored in an innings:");
            scanf("%d",&runs[i]);
        }

        printf("enter the number of not outs of batsmen:");
        scanf("%d",&no);

        display_batsmen(runs,inngs,no);
    }
    else
    {
        printf("enter the number of innings bowler has bowled :");
        scanf("%d",&inngs);

        for(int i=0;i<inngs;i++)
        {
            printf("enter the bowling figures[overs maidens runs wkts]:");
            scanf("%f",&overs[i]);
            scanf("%d",&maidens[i]);
            scanf("%d",&runs[i]);
            scanf("%d",&wkts[i]);
        }

        display_bowler(runs,inngs,wkts,overs,maidens);

    }


}