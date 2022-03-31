/**
 * @file batsmen.h
 * @author v.sharath
 * @brief Header file for batsmen stats calculations
 * @version 0.1
 * @date 2022-03-31
 * 
 */

#ifndef __BATSMEN_H__
#define __BATSMEN_H__

#include <stdio.h>

/**
 * @brief swaps the xp and yp variables
 * 
 * @param xp 
 * @param yp 
 * @return results swap of two variables
 */
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

/**
 * @brief it finds the best score of the batsmen
 * 
 * @param[in] inngs 
 * @param[in] runs 
 * @return best scores of batsmen 
 */


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
/**
 * @brief adds the runs and returns total runs
 * 
 * @param[in] runs 
 * @param[in] inngs 
 * @return  results the total runs 
 */
int total_runs(int runs[],int inngs)
{
    int r =0;
    for(int i=0;i<inngs;i++)
    {
        r =r+runs[i];
    }

    return r;
}
/**
 * @brief it finds number of fifties scored by batsmen
 * 
 * @param[in] runs 
 * @param[in] inngs 
 * @return returns the number of fiftes scored by batsmen 
 */
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
/**
 * @brief it finds number of hundreds scored by batsmen
 * 
 * @param[in] runs 
 * @param[in] inngs 
 * @return returns the number of hundreds scored by batsmen 
 */

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
/**
 * @brief calculates the average of the batsmen
 * 
 * @param[in] runs 
 * @param[in] inngs 
 * @param[in] no no means number of not outs
 * @return returns the average of batsmen 
 */

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

#endif  /*#define __BATSMEN_H__ */
