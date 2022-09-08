#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
bool contains(unordered_set<int> const &set, int x) {
	return set.find(x) != set.end();
}
bool hasDuplicate(vector<int> &input, int k)
{
	unordered_set<int> window;
	for (int i = 0; i < input.size(); i++)
	{
    	if (contains(window, input[i]))
        	return true;
    	window.insert(input[i]);
    	if (i >= k)
     	   window.erase(input[i - k]);
	}
	return false;
}
 
int main()
{
	int t;
	cin>>t;
	while(t--){
    	vector<int> in;
    	int n;
    	cin>>n;
    	for(int i=0;i<n;i++)
    	{
        	int a;
        	cin>>a;
        	in.push_back(a);
    	}
    	int k ;
    	cin>>k;
	
    	if (hasDuplicate(in, k))
        	cout << "\nDuplicates found";
    	else
        	cout << "\nNo duplicates were found";
	}
	return 0;
}

