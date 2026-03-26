#include <iostream>
#include <vector>
using namespace std;

class QuickSort {
public:
    void quicksort(int l, int h, vector<int>& nums) {
        if (l < h) {
            int j = partition(l, h, nums);
            quicksort(l, j, nums);
            quicksort(j + 1, h, nums);
        }
    }

    int partition(int l, int h, vector<int>& nums) {
        int pivot = nums[l];  // Select leftmost as pivot
        int i = l - 1;
        int j = h + 1;

        while (true) {
            do {
                i++;
            } while (nums[i] < pivot);

            do {
                j--;
            } while (nums[j] > pivot);

            if (i >= j)
                return j;

            swap(nums[i], nums[j]);
        }
    }
};

int main() {
    QuickSort q1;
    vector<int> nums = {10, 16, 8, 12, 15, 6, 3, 9, 5};
    int low = 0, high = nums.size() - 1;
    q1.quicksort(low, high, nums);

    cout << "Sorted vector = ";
    for (int n : nums)
        cout << n << " ";
    cout << endl;

    return 0;
}
