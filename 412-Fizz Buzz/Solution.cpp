class Solution {
public:
    vector<string> fizzBuzz(int n) {
        
        vector<string> ret;
        string str;
        char* num = (char*)(malloc(1024*sizeof(char)));
        for(int i = 1 ; i <=n ; i++ )
        {
            str.clear();
            if(i%3 == 0)
            {
                str.append("Fizz");
            }
            
            if(i%5 == 0)
            {
                str.append("Buzz");
            }
            
            if(str.empty())
            {
                sprintf(num,"%d",i);
                str = string(num);
            }
            
            ret.push_back(str);
            
            
        }
        
        free(num);
        return ret;
        
    }
};

