#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> subset(vector<int>& nums)
{
    if(nums.empty()) return {{}};
    int n = nums.back();
    nums.pop_back();
    vector<vector<int>> res = subset(nums);
    int size = res.size();
    for(int i = 0; i < size; i++)
    {
        res.push_back(res[i]);
        res.back().push_back(n);
    }
    return res;
}

void displayPowerset(vector<vector<int>> ps)
{
    for(int i = 0; i < ps.size(); i++)
    {
        for(int j = 0; j < ps[i].size(); j++)
        {
            cout << ps[i][j] << '\t';
        }
        cout << endl;
    }
}

int main(){
    vector<int> set = {1, 2, 3};
    vector<vector<int>> powerSet = subset(set);
    displayPowerset(powerSet);
    return 0;
}
