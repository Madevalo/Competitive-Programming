class Solution {
public:
    vector<string> fizzBuzz(int n){
         vector<string> example;
         for (int i = 1; i <= n; i++) {
             
            if (i%15 == 0)
                example.push_back("FizzBuzz");
             
            else if (i%3 == 0)
                example.push_back("Fizz");
             
            else if (i%5 == 0)
                example.push_back("Buzz");
             
            else
                example.push_back(to_string(i));
        }
        return example;
    }
};