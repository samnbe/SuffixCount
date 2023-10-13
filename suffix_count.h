#include <iostream>
#include <string>
using namespace std;

int suffixCount(std::string S, int L) {
	
	string temp;
	int count = 0;

	for(int i=S.length() - L; i < S.length(); i++){
		temp += S[i];
	}

	for(int j=0; j < S.length(); j++){
		if(S[j] == temp[0]){
			for(int k=0; k < temp.length(); k++){

				if(k == temp.length() - 1){
					if(S[j+k] == temp[k]){
						count++;
					}
					else{
						break;
					}
				}
				else if((j+k) >= S.length() -1){
					break;
				}
				else if(S[j+k] != temp[k]){
					break;
				}	
			}
		}
	}
	return count;
}
