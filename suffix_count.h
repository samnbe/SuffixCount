#include <iostream>
#include <string>
using namespace std;

int suffixCount(std::string S, int L) {
	
	string temp;
	int count = 0;
	
	//store the suffix string into temp variable 
	for(int i=S.length() - L; i < S.length(); i++){
		temp += S[i];
	}

	for(int j=0; j < S.length(); j++){
		//check if a letter in the larger string has the same first letter as the suffix
		if(S[j] == temp[0]){
			//if the first letter matches, start going through the next letters to see if the full suffix is present in the string at this position
			for(int k=0; k < temp.length(); k++){
				//if full suffix is present at this position
				if(k == temp.length() - 1){
					//check last character 
					if(S[j+k] == temp[k]){
						//add to count 
						count++;
					}
					else{
						break;
					}
				}
				//if the loops are going for more charcters than the larger string has, break out of inner loop 
				else if((j+k) >= S.length() -1){
					break;
				}
				//if the character in the larger string does not match the suffix at any point, break out of inner loop 
				else if(S[j+k] != temp[k]){
					break;
				}	
			}
		}
	}
	return count;
}
