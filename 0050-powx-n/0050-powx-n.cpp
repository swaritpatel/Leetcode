class Solution {
public:
    double myPow(double x, int n) {
    
        if(n < 0) {
            x = 1 / x;
        } 
        
        long num = labs(n);
        
        double pow = 1;
        
        while(num){ // equivalent to while(num != 0)
            if(num & 1) { // equivalent to if((num & 1) != 0)
                pow *= x;
                num--;
            }
            else{
                num>>=1;
                x=x*x;
            }
            

        }
        
        return pow;
    }
};