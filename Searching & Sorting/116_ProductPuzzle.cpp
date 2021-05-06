#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void printVector(vector<ll> vec){
    for(ll i = 0; i < vec.size(); i ++){
        cout << vec[i] << " ";
    }
    cout << "\n";
}


vector<ll> productExceptSelf(vector<ll> &nums, ll len){
    ll product = 1, i;
    int cnt0s = 0;
    for(i = 0; i < len; i ++){
        if(nums[i] != 0){
            product = product*nums[i];
        }
        else{
            cnt0s ++;
            // Optimization
            if(cnt0s > 1){
                break;
            }
        }
    }

    vector<ll> ans;
    for(i = 0; i < len; i ++){
        if(cnt0s > 1){
            ans.push_back(0);
        }
        else{
            if(nums[i] == 0){
                ans.push_back(product);
            }
            else{
                if(cnt0s == 1){
                    ans.push_back(0);
                }
                else{
                    ans.push_back(product/nums[i]);
                }
            }
        }
    }

    return ans;
}


int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    ll cases, i, temp, len;
    vector<ll> nums;
    
    cout << "cases : ";
    cin >> cases;
    
    while (cases --){
        cout << "len : ";
        cin >> len;
        
        cout << "arr : ";
        nums.clear();
        for(i = 0; i < len; i ++){
            cin >> temp;
            nums.push_back(temp);
        }

        printVector(productExceptSelf(nums, len));

    }

}
