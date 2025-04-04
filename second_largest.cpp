// Given an array of positive integers arr[], return the second largest element from the array. If the second largest element doesn't exist then return -1.

class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        int largest=INT_MIN;
        int second_largest=INT_MIN;
        for(int num:arr)
        {
            if(num > largest)
            {
                second_largest=largest;
                largest=num;
            }
            else if(num>second_largest && num!=largest)
            {
                second_largest=num;
            }
        }
        return (second_largest==INT_MIN) ? -1 : second_largest;
    }
};
