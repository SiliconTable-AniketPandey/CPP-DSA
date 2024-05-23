#include<iostream>
#include <vector>
using namespace std;

class solution
{
    public:
        int i,j,temp,min_index;
        vector<double> ascending(vector<double> &numbers)
        {
            for(i = 0;i< numbers.size() -1; i++)
            {
                min_index = i;
                for(j = i+1; j<numbers.size(); j++)
                {
                    if(numbers[min_index]>numbers[j]){
                        min_index = j;
                    }
                }
                swap(numbers[min_index],numbers[i]);
            }
            return numbers;
        }

        vector<double> descending(vector<double> &numbers)
        {
            for(i = 0;i< numbers.size() -1; i++)
            {
                min_index = i;
                for(j = i+1; j<numbers.size(); j++)
                {
                    if(numbers[min_index]<numbers[j]){
                        min_index = j;
                    }
                }
                swap(numbers[min_index],numbers[i]);
            }
            return numbers;
        }
};

int main()
{
    solution s; 
    vector<double> arr;
    double n;
    int ch,digit;
    cout<<"Enter the number of elements you want to have"<<endl;
    cin>>n;
    arr.resize(n);
    cout<<"Now enter the elements"<<endl;
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
        
    }
    cout<<"Enter 1 for ascending or 2 for descending sort "<<endl;
    cin>>ch;
    switch(ch)
    {
        case 1:
            s.ascending(arr);
            break;
        case 2:
            s.descending(arr);
            break;

        default:
            cout<<"Wrong Input"<<endl;
            return 1;
    }   

    cout << "Sorted elements: ";
    for (double num : arr)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}