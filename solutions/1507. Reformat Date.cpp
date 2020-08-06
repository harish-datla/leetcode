        }
        map<string,string> mp;
        mp["Jan"]="01";
        mp["Feb"]="02";
        mp["Mar"]="03";
        mp["Apr"]="04";
        mp["May"]="05";
        mp["Jun"]="06";
        mp["Jul"]="07";
        mp["Aug"]="08";
        mp["Sep"]="09";
        mp["Oct"]="10";
        mp["Nov"]="11";
        mp["Dec"]="12";
        int idx=date.find(' ');
        string temp=date.substr(idx+1);
        int idx2=temp.find(' ');
        string month=temp.substr(0,idx2);
        string left=temp.substr(idx2+1);
        
        cout<<month<<endl;
        while(left.size()<4){
            left="0"+left;
        }
        string result=left+"-"+mp[month]+"-"+day;
        return result;
    }
};
