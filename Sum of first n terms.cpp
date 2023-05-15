Link:- https://practice.geeksforgeeks.org/problems/sum-of-first-n-terms5843/1
class Solution {
  public:
   inline long long cube(long long n){
    return n*n*n;
    }
    long long sumOfSeries(long long N) {
    if(N==0||N==1){
        return N;
    }
    else{
        return cube(N)+sumOfSeries(N-1);
     }
    }
};
