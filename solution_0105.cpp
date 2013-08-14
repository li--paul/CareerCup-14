#include <iostream>
#include <string>

void replaceSpace(string &str) {
	for (int i=0;i<str.length();i++) {
		if (str[i]==' ') {
			str.erase(str.begin()+i);
            		str.insert(str.begin()+i,'0');
            		str.insert(str.begin()+i,'2');
            		str.insert(str.begin()+i,'%');
        	}
    	}
}

int main() {
	string str = "Good morning and hello world!";
	replaceSpace(str);
	cout << str << endl;
	return 0;
}

