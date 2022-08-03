class Solution {
public:
    string checkIPv4(string s){
        int currNum = 0, dot = 0;
        if((s[0]=='0' && s[1]!='.') || (s[0]=='.' || s[s.size()-1]=='.')){
            return "Neither";
        }
        for(int i=0; i<s.size(); i++){
            if(s[i]=='.'){
                dot++;
                if((dot>3 || s[i+1]=='.') || (s[i+1]=='0' && s[i+2]!='.') || (currNum>255)) return "Neither";
                currNum = 0;
                continue;
            }
            else if(isdigit(s[i])){
                currNum = currNum * 10 + (s[i] - '0');
            }
            else{
                return "Neither";
            }
        }
        if(currNum>255 || dot<3) return "Neither";
        return "IPv4";
    }
    string checkIPv6(string s){
        string str, res;
        int colon=0;
        if(s[0]==':' || s[s.size()-1]==':') return "Neither";
        for(int i=0; i<s.size(); i++){
            if(s[i]==':'){
                colon++;
                if(colon>7 || s[i+1]==':' || str.size()>4) return "Neither";
                res = check(str);
                if(res=="Neither") return "Neither";
                str = "";
                continue;
            }
            str += s[i];
        }
        res = check(str);
        if((str.size()>4) || colon<7){
            return "Neither";
        }
        return res;
    }
    string check(string str){
        if(str.size()<=4){
            for(int j=0; j<str.size(); j++){
                if(!isxdigit(str[j])){
                    return "Neither";
                }
            }
        }
        return "IPv6";
    }
    string validIPAddress(string queryIP) {
        if(queryIP.size()<40){
            for(int i=0; i<queryIP.size(); i++){
                if(queryIP[i]=='.'){
                    return checkIPv4(queryIP);
                }
                if(queryIP[i]==':'){
                    return checkIPv6(queryIP);
                }
            }
        }
        return "Neither";
    }
};