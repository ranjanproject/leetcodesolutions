class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.length()<needle.length())return -1;
        if(needle.length()==0) return 0;
        int p[needle.length()];
        memset(p,0,sizeof(p));
        int i,j;
        j = 0;
        i = 1;
        while(i<needle.length()){
            if(needle[j]==needle[i]){
                p[i]=j+1;
                j++;
                i++;
            }
            else{
                if(j==0){
                    p[i]=0;
                    i++;
                }
                else{
                    j = p[j-1];
                }
            }
        }
        i = 0;
        j = 0;
        while(i<haystack.length()){
            if(haystack[i]==needle[j]){
                if(j==needle.length()-1)
                    return (i-j);
                i++;
                j++;
            }
            else{
                if(j==0)i++;
                else j = p[j-1];
            }
        }
       return -1;
    }
};