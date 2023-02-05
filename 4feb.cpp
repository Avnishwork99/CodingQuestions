#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int>map;
        unordered_map<char,int>::iterator it=map.begin();
            int ans =0;
           int finalans=0;
        for(int i=0;i<stones.length();i++){
            char c=stones.at(i);
            if(map.find(c)!=map.end()){
                map[c]+=1;
            }
            else{
                map[c]=1;
            }
        }

        //tyou have to check weather jewels is in stones or not and add the values you don't need to iterate
        for(int j=0;j<jewels.length();j++){
            char a=jewels.at(j);
            if(map.find(a)!=map.end()){
                finalans += map[a];
            }
        }
        return finalans;
    }    
};

int main(){
    Solution sln;
    string jel = "aA";
    string stone = "aAAbbxx";
    int x = sln.numJewelsInStones(jel,stone);
    cout<<x;
    return 0;
}