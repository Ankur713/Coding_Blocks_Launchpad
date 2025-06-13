
class Solution {
  public:
    bool findPair(vector<int> &arr, int x) {
        // code here
        // [5,10,15]   x = 10;
         //   i  i  i
        
        // i = 5
        // mp:  15 ? no  5-15 -10 ?  == mp.end();
        // mp : 5
        
        // i= 10
        // mp = 5
        // mp 10 +10 ?   10-10 ?
        
        // mp 5,10 
        
        // i =15
        // mp 5, 10
        // mp  15-10  5 ?

        
        map<int,int> mp;
        
        for(auto i:arr){
            
            if(mp.find(i+x) != mp.end() or mp.find(i-x) != mp.end()) {
                return true;
            }
            mp[i]++;
    
        }
        
        // N* log N
        //10^6 * 6 ~ 10^6 < 10^7
        
        return false;
    }
};
