bool isIsomorphic(string s, string t) {
        unordered_map<char, char> u;
        unordered_map<char, char> v;
        
        string s1 = s;
        string t1 = t;
        
        for(int i=0; i<s.size(); i++){
            u[s[i]] = t[i];
            v[t[i]] = s[i];
        }
        
        for(int i=0; i<s.size();i++){
            s1[i] = u[s1[i]];
            t1[i] = v[t1[i]];
        }
        
        if(s1 == t && t1 == s){
            return true;
        }
        else{
            return false;
        }
    }