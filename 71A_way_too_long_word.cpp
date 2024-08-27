
#include <iostream>
using namespace std;


class Solution {
public:
    void auto_abbreviation(string s){
        int size = s.size();
        if(size<=10){
            cout << s << endl;
        }else{
            cout << string(1, s[0]) + to_string(size-2) + s.back() << endl;
        }
    }
};

int main(){
    Solution solution;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        string s;
        cin >> s;
        solution.auto_abbreviation(s);
    }
    return 0;
}