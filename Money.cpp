#include<bits/stdc++.h>
using namespace std;
int main()
{
 cout << "Enter array size: ";
 int n; // Array size
 cin >> n;
 vector<int> v;
 // Step-1 (O(N))
 cout << "Enter coins:\n";
 for(int i=0; i<n; i++)
 {
 int x;
 cin >> x;
 v.push_back(x);
 }
 cout << "Enter money: ";
int money;
 cin >> money;
 // Step-2 (Selection sort) (O(N*N))
 for(int i=0; i<n; i++)
 {
 for(int j=i+1 ; j<n; j++)
 {
 if(v[i]>v[j]) swap(v[i],v[j]);
 }
 }
 // Step-3 (Greedy Algorithm) (O(N))
 int ans = 0;
 for(int i=n-1 ; i>=0 ; i--)
 {
 ans+=(money/v[i]);
 money -= (money/v[i])*v[i];
 }
 cout << ans << endl;
}
𝑇𝑜𝑡𝑎𝑙 𝑇𝑖𝑚𝑒 𝐶𝑜𝑚𝑝𝑙𝑒𝑥𝑖𝑡𝑦 = 𝑂(𝑁) + 𝑂(𝑁 ∗ 𝑁) + 𝑂(𝑁)
= 2𝑁 + 𝑁
2
∴ Time Complexity = O(N2
)
