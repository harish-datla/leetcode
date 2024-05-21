class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& t) {
       int g = 0;
       int p = 0;
       int m = 0;
       t.insert(t.begin(),0);
       for(int i = 1 ; i < t.size() ; i++){
            t[i]+=t[i-1];
       }
       int gIdx = -1;
       int pIdx = -1;
       int mIdx = -1;
       for(int i = 0 ; i < garbage.size() ; i++){
        for(int j = 0 ; j < garbage[i].size() ; j++){
            switch(garbage[i][j]){
                case 'G':
                    g+=1;
                    gIdx = i;
                    break;
                case 'P':
                    pIdx = i;
                    p+=1;
                    break;
                case 'M':
                    m+=1;
                    mIdx=i;
                    break;

                default:
                    break;
            }
        }
       }
       cout << pIdx << mIdx << gIdx << endl;
       if(pIdx >= 0)p+=t[pIdx];
       if(gIdx >= 0)g+=t[gIdx];
       if(mIdx >= 0)m+=t[mIdx];

       
       return p+g+m;
    }
};