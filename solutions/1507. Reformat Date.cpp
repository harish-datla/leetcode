            }
            else
            {
                ans.push_back(ch);
                ch = "";
            }
        }
        ans.push_back(ch);
        string out = "";
        ans[0].pop_back();
        ans[0].pop_back();
        out+=ans[2];
        out+="-";
        out+=(mp[ans[1]]);
        out+="-";
        if(stoi(ans[0]) < 10){
            out+="0";
        }
        out+=ans[0];
        
        return out;
        
    }
};
