#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void print2DVector(vector<vector<ll>> vec){
    ll i, j;
    if(vec.size() == 0){
        cout << "None" << endl;
    }
    for(i = 0; i < vec.size(); i ++){
        for(j = 0; j < vec[i].size(); j ++){
            cout << vec[i][j] << ", ";
        }
        cout << endl;
    }
}


void printVector(vector<ll> vec){
    for(ll i = 0; i < vec.size(); i ++){
        cout << vec[i] << " ";
    }
    cout << "\n";
}


vector<vector<ll> > fourSum(vector<ll> &arr, ll sumTo) {
    vector<ll> vec = arr, temp, myIndex[sumTo + 1];
    // vector<ll>::iterator itr;
    sort(vec.begin(), vec.end());
    

    vector<vector<ll>> ans[sumTo + 1];

    ll i = 0, j, k;

    temp.clear();
    temp.push_back(vec[0]);
    ans[i + vec[0]].push_back(temp);
    myIndex[i + vec[0]].push_back(0);

    for(j = 1; j < vec.size(); j ++){
        if(i + vec[j] <= sumTo && vec[j-1] != vec[j]){
            temp.clear();
            temp.push_back(vec[j]);
            ans[i + vec[j]].push_back(temp);
            myIndex[i + vec[j]].push_back(j);
        }
    }

    // cout << "\n";
    // for(i = 0; i <= sumTo ; i ++){
    //     printVector(myIndex[i]);
    //     print2DVector(ans[i]);
    //     cout << "------------\n";
    // }
    // cout << "\n";

    for(i = 0; i < sumTo; i ++){
        if(ans[i].size() > 0){
            
            for(j = 0; j < ans[i].size(); j ++){
                if(ans[i][j].size() + 1 <= 4){
                    
                    for(k = myIndex[i][j] + 1; k < vec.size(); k ++){
                        if(i + vec[k] <= sumTo){
                            temp.clear();
                            temp = ans[i][j];
                            temp.push_back(vec[k]);
                            ans[i + vec[k]].push_back(temp);
                            myIndex[i + vec[k]].push_back(k);
                        }
                    }
                }
            }
        }
    }

    vector<vector<ll>> toReturn;

    // cout << "\n---------------------------------------------------------------\n";
    // for(i = 0; i <= sumTo ; i ++){
    //     printVector(myIndex[i]);
    //     print2DVector(ans[i]);
    //     cout << "------------\n";
    // }
    // cout << "\n";
    
    if(ans[sumTo].size() > 0){
        if(ans[sumTo][0].size() == 4){
            toReturn.push_back(ans[sumTo][0]);
        }
    }
    for(i = 1; i < ans[sumTo].size(); i ++){
        
        if(ans[sumTo][i].size() == 4 && ans[sumTo][i] != ans[sumTo][i-1] ){
            toReturn.push_back(ans[sumTo][i]);
        }
    }

    return toReturn;
}




int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    ll cases, i, temp, len, sumTo;
    
    cout << "cases : ";
    cin >> cases;
    
    vector<ll> vec;
    vector<vector<ll>> ans;

    while (cases --){
        vec.clear();
        cout << "len : ";
        cin >> len;
        
        cout << "arr : ";
        for(i = 0; i < len; i ++){
            cin >> temp;
            vec.push_back(temp);
        }

        cout << "sumTo : ";
        cin >> sumTo;

        print2DVector(fourSum(vec, sumTo));

    }

}
