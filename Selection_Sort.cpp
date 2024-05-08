#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int i = 0, j, min_index, temp;
    vector<int> selection_sort(vector<int> &array)
    {
        for (i = 0; i < array.size() - 1; i++)
        {
            min_index = i;
            for (j = i + 1; j < array.size(); j++)
            {
                if (array[min_index] > array[j])
                {
                    min_index = j;
                }
            }
            swap(array[min_index], array[i]);
        }
        return array;
    }
};

int main()
{
    vector<int> arr = {90, 50, 4, 10, 20, 3, 0, 408, 9, 78, 40};
    Solution s;
    s.selection_sort(arr);
    cout << "Sorted array is " << endl;
    for (int num : s.selection_sort(arr))
    {
        cout << num << " ";
    }
    return 0;
}
