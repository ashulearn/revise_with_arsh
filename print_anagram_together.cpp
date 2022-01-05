class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        //code here
        vector<vector<string>> ans;
        unordered_map<string,vector<string>> mp;
        for(int i=0;i<string_list.size();i++)
        {
            string t = string_list[i];
            sort(t.begin(),t.end());
            mp[t].push_back(string_list[i]);
        }
        for(auto x:mp)
        {
            ans.push_back(x.second);
        }
        return ans;
    }
};