#include "bowler.h"


void display_bowler(int runs[],int inngs,int wkts[],float overs[],int maidens[])
{
    int w,f,t,bw,m;
    float o,a,e;
    int *ptr = NULL;
    ptr = &inngs;
    o = no_of_overs(inngs,overs);
    w = total_wkts(inngs,wkts);
    a=bowler_avg(runs,inngs,wkts);
    e=bowler_economy(runs,inngs,overs);
    t = no_of_3wkts(inngs,wkts);
    f = no_of_5wkts(inngs,wkts);
    bw = best_wkts(inngs,wkts);
    m = no_of_maidens(inngs,maidens);

    printf("Number of innings bowled is:%d\n",inngs);
    printf("Total number of overs bowled :%3.2f\n",o);
    printf("The average of the bowler is :%3.2f\n",a);
    printf("economy of the bowler is:%3.2f\n",e);
    printf("Total number of wickets is :%d\n",w);
    printf("Number of 3-wicket hauls is :%d\n",t);
    printf("Number of 5-wicket hauls is :%d\n",f);
    printf("Highest wkts in a inngs is :%d\n",bw);
    printf("Number of maidens bowled : %d\n",m);


}