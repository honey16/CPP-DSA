/*
https://www.codingninjas.com/codestudio/problems/aggressive-cows_1082559?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2
Intuiton to know BS is applicable;
1. Search space is monotonous
2. Portion of search space can be discarded

Stalls at positions given by array elements
Find minimum distance between stalls arranging K cows is maximum possible
This statement hints us about search space reduction 

let say if they fight at 4 then 3 cannot be dist so move right
eg 4 2 1 3 6
search space  min : 0  max : arr[max]- arr[min]


*/

bool isPossible(vector<int> &stalls, int k, int mid, int n) {
    
    int cowCount = 1;
    int lastPos = stalls[0];  // sorted array is passed
    
    for(int i=0; i<n; i++ ){
        
        if(stalls[i]-lastPos >= mid){
            //ie checking distance>=mid
            cowCount++;
            if(cowCount==k)
            {
                return true;
            }
            lastPos = stalls[i];
        }
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(), stalls.end());
   	int s = 0;
    int n = stalls.size(); 
    int e=stalls[n-1];
    int ans = -1;
    int mid = s + (e-s)/2;
    
    while(s<=e) {
        if(isPossible(stalls, k, mid, n)) {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}