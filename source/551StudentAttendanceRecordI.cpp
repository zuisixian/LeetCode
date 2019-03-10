class Solution {
public:
	bool checkRecord(string s) {
		if (s.size() <= 1) {
			return true;
		}
		int len = s.size();
		bool AbsentFlag = false;
		for (int i = 0; i < len; i++) {
			if(s[i] == 'A') {
                //两个A
				if (AbsentFlag) {
					return false;
				}
				else {
					AbsentFlag = true;
				}
			}
            //连续3个L
			if ( i< len -2 && s[i] == 'L' &&  s[i+1] == 'L' && s[i+2] == 'L') {
				return false;
			}
		}

		return true;
	}
};