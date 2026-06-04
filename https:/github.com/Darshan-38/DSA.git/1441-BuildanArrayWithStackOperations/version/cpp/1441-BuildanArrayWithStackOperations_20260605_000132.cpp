// Last updated: 6/5/2026, 12:01:32 AM
1class Solution {
2public:
3    vector<string> buildArray(vector<int>& target, int n) {
4        int stream=1;
5        vector<string> result;
6        int i=0;
7
8        while(i<target.size() && stream<=n){
9            result.push_back("Push");
10            if(target[i]==stream){
11                i++;
12            }
13            else{
14                result.push_back("Pop");   
15            }
16            stream++;
17        } 
18        return result;
19    }
20};