#include "batsmen.h"
#include "bowler.h"
#include "unity.h"

void setUp(void)
    {

    }

    void tearDown(void)
    {

    }




void test_player()
{
    int runs[]={50,100,50},wkts[] = {3,4,5},maidens[]={1,0,2};
    int inngs = 3,no = 0;
    float overs[]={4,4,4};


    
    TEST_ASSERT_EQUAL(100,best_score(inngs,runs));
    TEST_ASSERT_EQUAL(200,total_runs(runs,inngs));
    TEST_ASSERT_EQUAL(2,no_of_fifty(runs,inngs));
    TEST_ASSERT_EQUAL(1,no_of_century(runs,inngs));
    TEST_ASSERT_EQUAL(12,no_of_overs(inngs,overs));
    TEST_ASSERT_EQUAL(12,total_wkts(inngs,wkts));
    TEST_ASSERT_EQUAL(16.67,bowler_avg(runs,inngs,wkts));
    TEST_ASSERT_EQUAL(16.67,bowler_economy(runs,inngs,overs));
    TEST_ASSERT_EQUAL(2,no_of_3wkts(inngs,wkts));
    TEST_ASSERT_EQUAL(1,no_of_5wkts(inngs,wkts));
    TEST_ASSERT_EQUAL(5,best_wkts(inngs,wkts));
    TEST_ASSERT_EQUAL(3,no_of_maidens(inngs,maidens));


}


int main()
{
    UnityBegin(NULL);

    RUN_TEST(test_player);

    return(UnityEnd());
}
