#include <stdio.h>
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 


int best_score(int inngs,int runs[])
{
    int i,j,a;
    for(i=0;i<inngs;i++)
    {
        for(j=0;j<inngs-1;j++)
        {
            if(runs[j]>runs[j+1])
            {
                swap(&runs[j],&runs[j+1]);
            }
        }
    }
    a=("%d",runs[inngs-1]); 
    return a;
}

int total_runs(int runs[],int inngs)
{
    int r =0;
    for(int i=0;i<inngs;i++)
    {
        r =r+runs[i];
    }

    return r;
}

int no_of_fifty(int runs[],int inngs)
{
    int half=0;

    for(int i=0;i<inngs;i++)
    {
        if(runs[i]>=50 && runs[i]<100)
        {
            half++;
        }
        
    }
    return half;
}

int no_of_century(int runs[],int inngs)
{
    int full=0;
    for(int i=0;i<inngs;i++)
    {
        if(runs[i]>=100 )
        {
            full++;
        }
    }
    return full;

}

long double average(int runs[],int inngs,int no)
{
    long double avg = 0;
    float tr,a;
    for(int i=0;i<inngs;i++)
    {
        tr=tr+runs[i];
    }

    a = inngs - no;

    avg = tr/a;

    //return avg;
    printf("Average of the batsmen is :%3.2Lf\n",avg);
}
