const static auto ioSpeedUp = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return NULL;
}();
class Solution {
public:
    int threeSumClosest(vector<int>& A, int B) {
    sort(A.begin(),A.end());
    int N=A.size();
    int j,k,s;
    
    int best=INT_MAX;
    int sum=0;
    
    for(int i=0;i<N-2;++i){
        j=i+1;
        k=N-1;
        
        while(j<k){
            
            if(A[i]+A[j]+A[k] >=B){
                s=A[i]+A[j]+A[k];
                if((s-B) <best) {
                    sum=s;
                    best= sum-B;
                }
                if(best==0) return sum;
                k--;
            }
            else{
                s=A[i]+A[j]+A[k];
                 if ((B-s) <best) {
                    sum=s;
                    best= B-sum;
                }
                j++;
                
            }
        }
    }
    return sum;
}

    
};