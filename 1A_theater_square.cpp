
// Theatre Square in the capital city of Berland has a rectangular shape with the size n × m meters.
// On the occasion of the city's anniversary, a decision was taken to pave the Square with square granite flagstones. 
// Each flagstone is of the size a × a.
// What is the least number of flagstones needed to pave the Square? It's allowed to cover 
// the surface larger than the Theatre Square, but the Square has to be covered. 
// It's not allowed to break the flagstones. The sides of flagstones should be parallel to the sides of the Square.

// Input
// The input contains three positive integer numbers in the first line: n,  m and a (1 ≤  n, m, a ≤ 109).

// Output
// Write the needed number of flagstones.


#include <iostream>
using namespace std;


class Solution {
public:
    void flagstones_needed(int&m, int&n, int&a){
        int row = (m / a) + (m % a > 0);
        int col = (n / a) + (n % a > 0);
        cout << row * col << endl;
    }
};


int main(){
    int m;
    int n;
    int a;
    cin >> n >> m >> a;
    Solution solution;
    int result; 
    solution.flagstones_needed(m, n, a);
   
}



