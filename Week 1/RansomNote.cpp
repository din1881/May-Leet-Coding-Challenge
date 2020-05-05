class Solution {
public:
bool canConstruct(string ransomNote, string magazine)
{
        unordered_map<char, int> magazineLetterFreq;
        for( auto k : magazine )  magazineLetterFreq[k]++;
        for( auto k : ransomNote )  if( --magazineLetterFreq[k] < 0 ) return false;
        return true;
}
};