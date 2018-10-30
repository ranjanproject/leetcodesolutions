class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int i;
        char mn='.';
        for(i=0;i<letters.size();i++){
            if(target<letters[i]){
                mn = letters[i];
                break;
            }
        }
        if(mn=='.')return letters[0];
        else return mn;
    }
};