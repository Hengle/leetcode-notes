class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        
        vector<string> ret = vector<string>();
        for(auto str : words)
        {
            int row = 0;
            for(int i = 1 ; i <=3 ; i++)
            {
                if(rowContainsChar( i , str.at(0)))
                {
                    row = i;
                    break;
                }
            }
            int index = 0;
            while(index < str.length() && rowContainsChar( row , str.at(index)))
            {
                index ++ ;
            }
            if(index == str.length())
            {
                ret.push_back(str);
            }
        }
        
        return ret;
    }
    
    
    bool rowContainsChar(int rowIndex , const char& c){
        
        
        switch(rowIndex)
        {
            case 1:
                return string("QWERTYUIOPqwertyuiop").find_first_of(c) != string::npos;
            case 2:
                return string("ASDFGHJKLasdfghjkl").find_first_of(c) != string::npos;
            case 3:
                return string("ZXCVBNMzxcvbnm").find_first_of(c) != string::npos;
            default:
                return false;
                
        }
        
        return false;
    }
    
    
};

