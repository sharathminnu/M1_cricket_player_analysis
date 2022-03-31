#include <stdio.h>
long double bowler_avg(int runs[],int inngs,int wkts[])
{
    float avg = 0;
    float tr,tw;

    for(int i=0;i<inngs;i++)
    {
        tr = tr+runs[i];
    }
    for(int i=0;i<inngs;i++)
    {
        tw = tw+wkts[i];
    }

    avg = tr/tw;

   
    return avg;

}

float no_of_overs(int inngs,float overs[])
{
    float count=0;
    for(int i=0;i<inngs;i++)
    {
        count = count+overs[i];
    }
    return count;
}

float bowler_economy(int runs[],int inngs,float overs[])
{
    long double eco=0;
    float tr,to;

    for(int i=0;i<inngs;i++)
    {
        tr = tr+runs[i];
        to = to+overs[i];

    }

    eco = tr/to;

   
    return eco;

}

void sp(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 


int best_wkts(int inngs,int wkts[])
{
    int i,j,a;
    for(i=0;i<inngs;i++)
    {
        for(j=0;j<inngs-1;j++)
        {
            if(wkts[j]>wkts[j+1])
            {
                sp(&wkts[j],&wkts[j+1]);
            }
        }
    }
    a=("%d",wkts[inngs-1]); 
    return a;
}    
int total_wkts(int inngs,int wkts[])
{
    int tw =0;
    for(int i=0;i<inngs;i++)
    {
        tw = tw+wkts[i];

    }
    return tw;
}
int no_of_5wkts(int inngs,int wkts[])
{
    int count =0 ;
    for(int i=0;i<inngs;i++)
    {
        if(wkts[i]>=5)
        {
            count++;
        }

    }
    return count;
}

int no_of_3wkts(int inngs,int wkts[])
{
    int count =0;
    for(int i=0;i<inngs;i++)
    {
        if(wkts[i]>=3 && wkts[i]<5)
        {
            count++;
        }
    }
    return count;

}

int no_of_maidens(int inngs,int maidens[])
{
    int count =0;
    for(int i=0;i<inngs;i++)
    {
        count = count + maidens[i];

    }
    return count;
}
