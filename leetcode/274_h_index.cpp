class Solution {
public:
    int hIndex(vector<int>& citations) {
        int h = 0;
        sort(citations.begin(), citations.end(), greater<int>());
        for(int i=0;i<citations.size();i++){
            if(citations[i] >= i+1){
                h = i + 1;
            }
            else{
                break;
            }
        }
        return h;
    }
};

// [3, 0, 6, 1, 5]

// citations[i] >= i + 1

// sort - [6, 5, 3, 1, 0]
// h = 0
// i = 0

// citations[0] = 6
// 	6 >= 0 + 1
// 	h = 1
// citations[1] = 5
// 	5 >= 1 + 1
// 	h = 2
// citations[2] = 3
// 	3 >= 2 + 1
// 	h = 3
// citations[3] = 1
// 	1 >= 3 + 1 false
// 	break;
// 	retrun h;
