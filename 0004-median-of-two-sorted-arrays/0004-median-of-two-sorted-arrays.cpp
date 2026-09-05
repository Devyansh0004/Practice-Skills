class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();

        bool odd=(m+n)%2;

        int i=0,j=0;
        int curr=0,prev=0;
        int count=0;
        while(count-1!=(m+n)/2){
            prev=curr;
            if(i<m &&j<n){
                if(nums2[j]<nums1[i]){
                    curr=nums2[j];
                    j++;
                }else{
                    curr=nums1[i];
                    i++;
                }
            }else if(i<m){
                curr=nums1[i];
                i++;
            }else{
                curr=nums2[j];
                j++;
            }
            count++;
        }
        double median;
        if(odd){
            median=(double)curr;
        }else{
            median=(curr+prev)/2.0;
        }
        return median;
    }
};