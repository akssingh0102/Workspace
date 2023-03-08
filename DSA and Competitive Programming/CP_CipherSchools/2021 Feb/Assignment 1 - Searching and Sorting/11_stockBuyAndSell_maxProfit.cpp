//********************************************  Stock Buy Sell to Maximize Profit (Medium)
// https://www.geeksforgeeks.org/stock-buy-sell/

#include <bits/stdc++.h>

using namespace std;

int stockMax(vector<int> & stockPrice) {
    int maxProfit=0;
    int minVal = stockPrice[0], profit = 0;
    for (int i = 1;  i < stockPrice.size(); i++) {
        if (minVal <= stockPrice[i]) {
            int tempProfit = stockPrice[i] - minVal;
            profit = max(profit, tempProfit);
        } else {
            maxProfit+=profit;
            minVal = stockPrice[i];
            // cout<<"DAy :"<<i+1;
        }
        if(i==stockPrice.size()-1){
            maxProfit+=profit;
        }
    }

    return maxProfit;
}


int main(){

    vector <int> stock = {100, 180, 260, 310, 40, 535, 695};
    int res=stockMax(stock);
    cout<<res;
    return 0;
}