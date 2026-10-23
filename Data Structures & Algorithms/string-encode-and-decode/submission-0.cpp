class Solution {
public:

    string encode(vector<string>& strs) {
        string encoding_string ={};
        for(auto& a : strs)
        {
            encoding_string += to_string(a.length());
            encoding_string += '#';
            encoding_string += a;
        }
        return encoding_string;
    }

    vector<string> decode(string s) {
        vector<string> str;
        while(1)
        {
            int pos = s.find('#');
            if(pos == string::npos)
                break;
            int len = stoi(s.substr(0,pos)); 
            str.push_back(s.substr(pos + 1, len));
            s.erase(0, pos + len + 1);
        }
        return str;
    }
};
