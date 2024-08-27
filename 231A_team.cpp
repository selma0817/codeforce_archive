
#include <iostream>
using namespace std;

class Solution{
    public:
    bool can_solve(int& a, int& b, int& c){
        return (a + b + c) >=2;
    }
};

int main(){
    Solution solution;
    int n;
    cin >> n;
    int count = 0;
    for(int i = 0; i < n; i++){
        int a, b, c;
        cin >> a >> b >> c;
        if (solution.can_solve(a, b, c)){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}