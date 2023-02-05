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
            for(int j=0;j<jewels.length();j++){
                char a=jewels.at(j);
             while(it!=map.end()){
                 if(it->first==a){
                     ans=it->second;
                     finalans=finalans+ans;
                      }
                     it++;
             }      
                
            }
            return finalans;
            }
        
};