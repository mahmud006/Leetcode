class Solution {
public:
    string checkIPv4(string s){
        int currNum = 0;
        int flg = 0, cnt = 0;
        if((s[0]=='0' && s[1]!='.') || (s[0]=='.' || s[s.size()-1]=='.')){
            flg++;
        }
        for(int i=0; i<s.size(); i++){
            if(s[i]=='.'){
                cnt++;
                if(cnt>3 || s[i+1]=='.') flg++;
                if(s[i+1]=='0' && s[i+2]!='.'){
                    flg++;
                }
                if(currNum>255){
                    flg++;
                }
                //cout << currNum <<endl;
                currNum = 0;
                continue;
            }
            if(isdigit(s[i])){
                currNum = currNum * 10 + (s[i] - '0');
            }
            else{
                flg++;
            }
        }
        cout << currNum <<endl;
        if(currNum>255 || cnt<3) flg++;
        
        if(flg==0) return "IPv4";
        return "Neither";
    }
    string checkIPv6(string s){
        string str;
        int flg = 0, cnt=0;
        if(s[0]==':' || s[s.size()-1]==':') flg++;
        for(int i=0; i<s.size(); i++){
            if(s[i]==':'){
                cnt++;
                if(cnt>7 || s[i+1]==':') flg++;
                if(str.size()<=4){
                    for(int j=0; j<str.size(); j++){
                        if(!isxdigit(str[j])){
                            flg++;
                        }
                    }
                }else{
                    flg++;
                }
                cout << str <<endl;
                str = "";
                continue;
            }
            str += s[i];
        }
        if(str.size()<=4){
        for(int j=0; j<str.size(); j++){
            if(!isxdigit(str[j])){
                    flg++;
                }
            }
        }
        else{
            flg++;
        }
        if(cnt<7) flg++;
        if(flg==0) return "IPv6";
        return "Neither";
    }
    string validIPAddress(string queryIP) {
        string str = "Neither";
        if(queryIP.size()<40){
        for(int i=0; i<queryIP.size(); i++){
            if(queryIP[i]=='.'){
                str = checkIPv4(queryIP);
                break;
            }
            if(queryIP[i]==':'){
                str = checkIPv6(queryIP);
                break;
            }
        }
        }
        return str;
    }
};