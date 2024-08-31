#include <iostream>
#include <vector>
using namespace std;

// Contestant who earns a score equal to or greater than the k-th place finisher's
// score will advance to the next round

class Solution{
public:
    void count_next_round(int& n, int&k, vector<int>& scores){
        int count = 0;
        // kth place finisher has index k-1 in score vector
        for(int i = 0; i < n; i++){
           if(scores[i] >= scores[k-1] && scores[i]>0){
                count++; 
           }
        }
        cout << count << endl;
    }
};

int main(){
    Solution solution;
    int n, k;
    cin >> n >> k;
    vector<int> scores(n);
    for(int i = 0; i < n; i++){
        cin >> scores[i];
    }
    solution.count_next_round(n, k, scores);
    return 0;
}