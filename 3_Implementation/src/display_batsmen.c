#include "batsmen.h"


void display_batsmen(int runs[],int inngs,int no )
{
    int tr,f,h,bs;
    float a;
    tr = total_runs(runs,inngs);
    a = average(runs,inngs,no);
    f = no_of_fifty(runs,inngs);
    h = no_of_century(runs,inngs);
    bs = best_score(inngs,runs);

    printf("Total number of innings is: %d\n",inngs);
    
    printf("Total runs is:%d\n",tr);
    printf("Number of fifty's are :%d\n",f);
    printf("Number of hundered's are :%d\n",h);
    printf("best score is: %d\n",bs);

}