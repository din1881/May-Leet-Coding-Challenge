class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int i=0,j=0;
        int counter=0;
    for(i=0; i<J.length();i++)
    {
        for(j=0;j<S.length();j++)
        {
            if(S[j]==J[i]){counter++; continue;}
        }
        
    }
        return counter;
    }
};