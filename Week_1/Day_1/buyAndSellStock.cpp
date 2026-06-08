#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int n = prices.size();
    //    int min = INT_MAX;
    //    int minindex = 0;
    //    int max = INT_MIN;
    //    int maxindex = 0;
        int maxprofit = 0;
        int profit =0;
        int cp = prices[0];
        int sp;
        if (n==1) return 0;
        for(int i=1; i<n; i++){
            sp = prices[i];
            profit = sp-cp;
            if(profit > maxprofit) maxprofit = profit;
            if(cp > sp) cp = sp;
        }
     return maxprofit;
    }
};

int main(){
    int numsSize = 0;
    printf("Enter  the size of the array: ");
    scanf("%d", &numsSize);
    vector<int> prices(numsSize);
    printf("Enter elements of the array: ");
    for(int i = 0; i < numsSize; i++){
        scanf("%d", &prices[i]);
    }
    Solution sol;
    int maxProfit = sol.maxProfit(prices);
    printf("The maximum profit is: %d\n", maxProfit);
    return 0;
}