// #include <bits/stdc++.h> 
// int sum(stack<int> st){
// 	int s = 0;
// 	while(!st.empty()){
// 		s += st.top();
// 		st.pop();
// 	}
// 	return s;
// }
// int sumThreeStacks(vector<int>& vectorA, vector<int>& vectorB, vector<int>& vectorC, 
// 					int lenA, int lenB, int lenC)
// {
// 	// Write your code here
// 	stack<int> st1,st2,st3;
// 	for(int i = vectorA.size() - 1; i >= 0; i--){
// 		st1.push(vectorA[i]);
// 	}
// 	for(int i = vectorB.size() - 1; i >= 0; i--){
// 		st2.push(vectorB[i]);
// 	}
// 	for(int i = vectorC.size() - 1; i >= 0; i--){
// 		st3.push(vectorC[i]);
// 	}
// 	int sum1 = sum(st1), sum2 = sum(st2), sum3 = sum(st3);

// 	while(true){
// 		if(sum1 == sum2 && sum1 == sum3){
// 			break;
// 		}
// 		if(sum1 >= sum2 && sum1 >= sum3){
// 			sum1 = sum1 - st1.top();
// 			st1.pop();
// 		}
// 		else if(sum2 >= sum1 && sum2 >= sum3){
// 			sum2 = sum2 -st2.top();
// 			st2.pop();
// 		}
// 		else if(sum3 >= sum1 && sum3 >= sum2){
// 			sum3 = sum3 -st3.top();
// 			st3.pop();
// 		}
// 	}
// 	return sum1;
// }