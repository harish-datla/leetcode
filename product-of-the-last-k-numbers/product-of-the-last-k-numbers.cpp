class ProductOfNumbers {
public:
    vector<int> prefix;
    int lastZero ;
    int counter ;
    ProductOfNumbers() {
        lastZero = 0;
        counter = 0;
    }
    
    void add(int num) {
        if(num == 0){
              lastZero = counter+1;     
        }
        if(prefix.size()){
            if(prefix[prefix.size() - 1]){
               prefix.push_back(num*prefix[prefix.size() - 1]); 
            }else{
               prefix.push_back(num);    
            }
            
        }else{
            prefix.push_back(num);
        }
        counter++;
    }
    
    int getProduct(int k) {
        if(prefix.size() == k){
            if(lastZero != 0){
                return 0;
            }else{
                return prefix[prefix.size() - 1];
            }
        }
        
        if(lastZero && prefix.size() -1 - k <= lastZero - 1){
            if(prefix.size() -1 - k == lastZero - 1){
                return prefix[prefix.size() - 1];
            }else{
                return 0;
            }
        }else{
            return prefix[prefix.size() - 1]/prefix[prefix.size() - 1-k];
        }
        
        cout << endl;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */
