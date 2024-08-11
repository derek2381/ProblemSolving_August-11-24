// problem link
// https://leetcode.com/contest/weekly-contest-410/problems/snake-in-matrix/


class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        int i = 0, j = 0,res = 0;
        for(string str : commands){
            // cout << str << " " << "before :- " << (i*n)+j << endl;
            if(str == "UP"){
                i--;
            }else if(str == "DOWN"){
                i++;
            }else if(str == "RIGHT"){
                j++;
            }else if(str == "LEFT"){
                j--;
            }
            
            // cout << str << " " << "after :- " << (i*n)+j << endl;
            
        }
        res = (i*n)+j;
        
        return res;
        
    }
};