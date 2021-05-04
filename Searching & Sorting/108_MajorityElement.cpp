// Moores voting algorithm

// Approach: This is a two-step process. 
    // The first step gives the element that maybe the majority element in the array. If there is a majority element in an array, then this step will definitely return majority element, otherwise, it will return candidate for majority element.
    // Check if the element obtained from the above step is majority element. This step is necessary as there might be no majority element.
 
// Algorithm: 
    // Loop through each element and maintains a count of majority element, and a majority index, maj_index
    // If the next element is same then increment the count if the next element is not same then decrement the count.
    // if the count reaches 0 then changes the maj_index to the current element and set the count again to 1.
    // Now again traverse through the array and find the count of majority element found.
    // If the count is greater than half the size of the array, print the element
    // Else print that there is no majority element


// #### This method is only useful when u need elemen which occurs strictly more than len/2 times;


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


ll findCandidate(ll arr[], ll len){
    ll i, majIndex = 0, cnt = 1;
    for (i = 1; i < len; i++){
        if(arr[i] == arr[majIndex]){
            cnt ++;
        }
        else{
            cnt --;
        }

        if(cnt == 0){
            majIndex = i;
            cnt = 1;
        }
    }
    
    return arr[majIndex];
}


ll majorityElement(ll arr[], ll len){
    ll i, cnt = 0, candidate = findCandidate(arr, len);

    for(i = 0; i < len; i ++){
        if(arr[i] == candidate){
            cnt ++;
        }
    }

    if(cnt > len/2){
        return candidate;
    }
    else{
        return -1;
    }
}


int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    ll cases, i, j, len;
    cin >> cases;
    
    while (cases --){
        cin >> len;
        ll arr[len];
        
        for(i = 0; i < len; i ++){
            cin >> arr[i];
        }

        cout << majorityElement(arr, len) << "\n";   
    }
    
}
