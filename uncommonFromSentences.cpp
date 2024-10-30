 unordered_map<string, int> mp;

    void fillMap(string s){
        int i=0, j=0;
        while(j<s.size()){
            if(s[j]==' '|| s[j]=='\n'){
                int len = j-i;
                string temp = s.substr(i, len);
                cout<<temp<<" ";
                mp[temp]++;
                i = j+1;
            }
            j++;
        }
        int len = j-i;
        string temp = s.substr(i, len);
        mp[temp]++;
    }

    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string> ans;
        fillMap(s1);
        fillMap(s2);
        for(auto it = mp.begin(); it!=mp.end(); it++){
            if(it->second == 1) ans.push_back(it->first);
        }
        return ans;
    }
