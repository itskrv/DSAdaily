// using recursion 
class Solution {
public:
    int fib(int n) {
        //Base condition
        if(n==0)
        return 0;

        if(n==1)
        return 1;

        return fib(n-1)+fib(n-2);
    }
};
// By using for loop
class Solution {
public:
    int fib(int n) {
        //Base condition
        if(n==0)
        return 0;

        if(n==1)
        return 1;

         int a = 0, b = 1, ans = 0;

         for(int i=1; i<n; i++){

             ans = a+b;
             a = b;
             b = ans;
         }

         return ans;

    }
};
