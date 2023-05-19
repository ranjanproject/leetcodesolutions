class Solution {
public:
    string removeOccurrences(string s, string part) {

        stack<char> s1, s2;
        reverse(part.begin(), part.end());

        for(int i = 0; i<s.length(); i++){

          s1.push(s[i]);  

          if(s1.top() == part[0]){
          int j = 0;
          for(j = 0; j<part.length(); j++){

            if(part[j] != s1.top()){

              while(!s2.empty()){
                  s1.push(s2.top());
                  s2.pop();
              }
              break;

            }else{
                s2.push(s1.top());
                s1.pop();
                if(s1.empty()){
                    break;
                }
            }
            // cout<<s2.top()<<" "<<s1.top()<<endl;
          }

          // cout<<endl;
          while(!s2.empty()){
            if(j<part.length() - 1){
              s1.push(s2.top());
            }
            s2.pop();
          }
        }

        }

        s = "";
        while(!s1.empty()){
            s += s1.top();
            s1.pop();
        }

        reverse(s.begin(), s.end());

        return s;
    }
};