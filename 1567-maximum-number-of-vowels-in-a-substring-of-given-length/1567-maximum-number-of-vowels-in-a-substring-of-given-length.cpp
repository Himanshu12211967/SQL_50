class Solution {
public:

    int a=0,e=0,i=0,o=0,u=0;

    void update(char ch){

        switch(ch){

            case 'a':
                a++;
                break; 

            case 'e':
                e++;
                break;

            case 'i':
                i++;
                break;

            case 'o':
                o++;
                break;

            case 'u':
                u++;
                break; 
        }
    }

    void remove(char ch){

        switch(ch){

            case 'a':
                --a;
                break; 

            case 'e':
                --e;
                break;

            case 'i':
                --i;
                break;

            case 'o':
                --o;
                break;

            case 'u':
                --u;
                break; 
        }
    }

    int maxVowels(string s, int k) {
        
        int max_len = 0;

        for(int i=0; i<k; i++){
            update(s[i]);
        }

        max_len = max(max_len,a+e+i+o+u);
        int removing_index = 0;

        for(int j=k; j<s.length(); j++){

            update(s[j]);
            remove(s[removing_index]);
            max_len = max(max_len,a+e+i+o+u);
            removing_index++;
        }

        return max_len;
    }
};