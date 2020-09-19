class Solution {
public:
	bool wordPattern(string pattern, string str) {
		if (pattern.empty())
			return false;
		unordered_map<char, string> index1;
		unordered_map<string, char> index2;
		int count = 1;
		for (int i = 0; i < str.length(); i++)
			if (str[i] == ' ')
				count++;
		if (pattern.length() != count)
			return false;
        count = 0;
		for (int i = 0; i < pattern.length(); i++) {
			string str1;
			while (str[count] != ' ' && str[count] != '\0')
				str1 += str[count++];
			count++;
			if (index1.count(pattern[i]) || index2.count(str1)) {
				if (index1[pattern[i]] != str1 || index2[str1] != pattern[i])
					return false;
			}
			else {
				index1[pattern[i]] = str1;
				index2[str1] = pattern[i];
			}
		}
		return true;
	}
};
