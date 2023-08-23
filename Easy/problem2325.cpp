class Solution {
public:
    string decodeMessage(string key, string message) {
        string al = "abcdefghijklmnopqrstuvwxyz";
        map<char,char> m;
        set<char> s;
        int x =0;
        m[' '] = ' ';
        for (int i = 0; i < key.length(); i++) {
            if (key[i] != ' ' && s.count(key[i])==0) {
                m[key[i]] = al[x];
                s.insert(key[i]);
                x++;
                if(x==26) {
                    break;
                }
            }
        }
        string out = "";
        for (int i = 0; i< message.length(); i++) {
            out += m[message[i]];
        }
        return out;
    }
};
