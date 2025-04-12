#include <iostream>
#include  <vector> 
using namespace std;

// Time Complexity: O(n)= (n)


int maxProfit(vector<int>& prices) {
    int bestBuy =prices[0];
    int maxProfit = 0;
    for(int i=1; i <prices.size(); i++ ){
        if(prices[i] < bestBuy){
            bestBuy = prices[i];
        }
        if(bestBuy < prices[i]){
            maxProfit = max(maxProfit, prices[i]-bestBuy);
        }
    }
    return maxProfit;
}

int main(){
    vector<int> prices= {7,1,5,3,6,4};
    int ans= maxProfit(prices);
    cout<<ans<< endl;
    return 0;
}
 