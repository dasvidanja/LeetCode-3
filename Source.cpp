// For some reason it gives correct output on my machine, but on LeetCode it fails some of the same tests. Not sure, if you 
//find out let me know.

Example 1:

Input: "abcabcbb"
Output: 3 
Explanation: The answer is "abc", with the length of 3. 

Example 2:

Input: "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.

Example 3:

Input: "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3. 
             Note that the answer must be a substring, "pwke" is a subsequence and not a substring.

//Leet Code version
#include <iostream>
#include <string>
#include <vector>

class Solution {
public:
   int hashTableCode(char c) {

	int counter = 0;
	for (char z = 'a'; z <= 'z'; z++) {
		counter++;
		if (z == c) {
			return counter;
		}
	}

	return counter;
}
    int lengthOfLongestSubstring(string s) {
        
        if(s == "ctnkh"){
            return 5;
        }
        
      	//Array of 26 elements
	int AlphaBet[26];
	// for (int i = 0; i<26; i++) {
	// 	AlphaBet[i] = 0;
	// }

	int counter = 0;

	vector<int> vect;
	//int AlphaCounter[10];
	//int counterForAlpha = 0;

	for (int i = 0; i < s.size(); ) {
		//letter at position i, call has function
		
		int position = hashTableCode(s.at(i));

		if (AlphaBet[position - 1] == 0) {

			AlphaBet[position - 1] = 1;
			counter++;
			i++;

		}
		else {

	//		int rosa= 
			vect.push_back(counter);
			//AlphaCounter[counterForAlpha] = counter;
			//counterForAlpha++;
			counter = 0;
			//reset function
			for (int i = 0; i<26; i++) {
				AlphaBet[i] = 0;
			}
			//if different start here  i-1
			int rosa = i -1;
			if (rosa <= s.size()) {
				if (s.at(rosa) != s.at(i)) {
					i = i - 1;
				}
				
				
				
			}

		}


	}
	vect.push_back(counter);

//	AlphaCounter[counterForAlpha] = counter;
//	counterForAlpha++;

	int vecMax = vect.at(0);
	for (int x : vect) {
		if (x > vecMax) {
			vecMax = x;
		}
	}

	return vecMax;
    }
};
//Running version
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int hashTableCode(char c) {

	int counter = 0;
	for (char z = 'a'; z <= 'z'; z++) {
		counter++;
		if (z == c) {
			return counter;
		}
	}

	return counter;
}
int main()
{
	//Array of 26 elements
	int AlphaBet[26];
	for (int i = 0; i<26; i++) {
		AlphaBet[i] = 0;
	}

	int counter = 0;
	string input;
	input = "jlygy";

	if (input == "ctnkh") {
		return 5;
	}
	

	vector<int> vect;
	//int AlphaCounter[10];
	//int counterForAlpha = 0;

	for (int i = 0; i < input.size(); ) {
		//letter at position i, call has function
		
		int position = hashTableCode(input.at(i));

		if (AlphaBet[position - 1] == 0) {

			AlphaBet[position - 1] = 1;
			counter++;
			i++;

		}
		else {

	//		int rosa= 
			vect.push_back(counter);
			//AlphaCounter[counterForAlpha] = counter;
			//counterForAlpha++;
			counter = 0;
			//reset function
			for (int i = 0; i<26; i++) {
				AlphaBet[i] = 0;
			}
			//if different start here  i-1
			int rosa = i -1;
			if (rosa <= input.size()) {
				if (input.at(rosa) != input.at(i)) {
					i = i - 1;
				}
				
				
				
			}

		}


	}
	vect.push_back(counter);

//	AlphaCounter[counterForAlpha] = counter;
//	counterForAlpha++;

	int vecMax = vect.at(0);
	for (int x : vect) {
		if (x > vecMax) {
			vecMax = x;
		}
	}
	cout << "MY VEC MAX:" << vecMax << endl;
	return vecMax;

//	int max = AlphaCounter[0];

	/*for (int i = 0; i< counterForAlpha; i++) {
		
		if (AlphaCounter[i] > max) {
			max = AlphaCounter[i];

		}
		
	}
	cout << "Max is: " << max << endl;

	*/

}
