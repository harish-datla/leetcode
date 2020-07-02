 
const static auto ioSpeedUp = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return NULL;
}();
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        if (strs.size() == 0)
		return "";

	if (strs.size() <= 1)
		return strs[0];

	int index = 0;
	bool valid = true;
	while (valid)
	{
		for (int i = 1; i < strs.size(); ++i)
		{
			bool valid_length = (index < strs[0].length() && index < strs[i].length());
			if (!valid_length || strs[0][index] != strs[i][index])
			{
				valid = false;
				break;
			}
		}
		if (valid)
			++index;
	}

	return strs[0].substr(0, index);
    }
};