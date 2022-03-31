/**
 * @file bowler.h
 * @author v.sharath ()
 * @brief Header file for bowler calculations
 * @version 0.1
 * @date 2022-03-31
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef __BOWLER_H__
#define __BOWLER_H__

#include <stdio.h>

/**
 * @brief it calculates the bowler average
 * 
 * @param[in] runs 
 * @param[in] inngs 
 * @param[in] wkts 
 * @return returns the average of bowler 
 */
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

/**
 * @brief counts the number of overs bowled by bowler
 * 
 * @param[in] inngs 
 * @param[in] overs 
 * @return number of overs bowled by bowler 
 */

float no_of_overs(int inngs,float overs[])
{
    float count=0;
    for(int i=0;i<inngs;i++)
    {
        count = count+overs[i];
    }
    return count;
}

/**
 * @brief calculates the economy of the bowler
 * 
 * @param[in] runs 
 * @param[in] inngs 
 * @param[in] overs 
 * @return economy of the bowler 
 */

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

/**
 * @brief swaps the variables
 * 
 * @param xp 
 * @param yp 
 */

void sp(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

/**
 * @brief finds the best wickets taken in an innings by bowler
 * 
 * @param[in] inngs 
 * @param[in] wkts 
 * @return best wickets taken in an innings by bowler 
 */
 


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

/**
 * @brief calculates total wickets taken by bowler
 * 
 * @param[in] inngs 
 * @param[in] wkts 
 * @return total wickets 
 */
int total_wkts(int inngs,int wkts[])
{
    int tw =0;
    for(int i=0;i<inngs;i++)
    {
        tw = tw+wkts[i];

    }
    return tw;
}

/**
 * @brief finds number fo 5 wicket hauls taken by bowler
 * 
 * @param[in] inngs 
 * @param[in] wkts 
 * @return  number fo 5 wicket hauls taken by bowler
 */
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

/**
 * @brief finds number fo 3 wicket hauls taken by bowler
 * 
 * @param[in] inngs 
 * @param[in] wkts 
 * @return number fo 3 wicket hauls taken by bowler 
 */

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

/**
 * @brief finds the number of maidens bowled by bowler
 * 
 * @param[in] inngs 
 * @param[in] maidens 
 * @return  number of maidens bowled by bowler
 */

int no_of_maidens(int inngs,int maidens[])
{
    int count =0;
    for(int i=0;i<inngs;i++)
    {
        count = count + maidens[i];

    }
    return count;
}

#endif  /*#define __BOWLER_H__*/
