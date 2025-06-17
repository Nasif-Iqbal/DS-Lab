#include<bits/stdc++.h>
using namespace std;
int main()
{
 cout << "Enter number of classes ";
 int n; // Number of classes
 cin >> n;
 vector<pair<int,int>>v; // Class time
 cout << "Enter time:\n";
 // Step-1 (O(N))
 for(int i=0 ; i<n ;i++)
 {
 int x,y;
 cin >> x >> y;
 v.push_back({y,x});
 }
 // Step-2 (O(Nlog(N))
 sort(v.begin(),v.end());
int end = -1;
 int ans = 0;
 // Step-3 (O(N))
 for(int i=0 ; i<n ;i++)
 {
 if(end<=v[i].second)
 {
 end= v[i].first;
 ans++;
 }
 }
 cout << ans << endl;
}
𝑇𝑜𝑡𝑎𝑙 𝑇𝑖𝑚𝑒 𝐶𝑜𝑚𝑝𝑙𝑒𝑥𝑖𝑡𝑦 = 𝑂(𝑁) + 𝑂(𝑁 log 𝑁) + 𝑂(𝑁)
= 2𝑁 + 𝑁 log 𝑁
∴ Time Complexity = O(𝑵 𝐥𝐨𝐠 𝑵)
