string printMinIndexChar(string str, string patt)
{
	
	// your code here
	
	// you don't need to print anything
	
	for(int i =0; i<str.length(); i++) {
		for(int j =0; j < patt.length(); j++) {
			if(patt[j] == str[i]) {
			  std::string s(1, patt[j]);
			  return s;
			}
		}
	}
	
	return "$";
}
