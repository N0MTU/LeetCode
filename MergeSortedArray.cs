public class Solution {
    public void Merge(int[] nums1, int m, int[] nums2, int n)
    { 
    //nums1
    //nums2
    //m + n= length of nums1
    //n == length of nums2
int[] mergedA = new int[nums1.Length + nums2.Length];
int a=0;
int b=0;
int c=0;

while (a < m && b <  n)
{
    if (nums1[a] < nums2[b])
{
    mergedA[c] = nums1[a];
    a++;    
}
  else
{
            mergedA[c] = nums2[b];
        b++;
    
   

} 
c++; 
}

    while (a < m){
    mergedA[c] = nums1[a];
    a++;
    c++;
    }
    


    while (b < n){
    mergedA[c] = nums2[b];
    b++;
    c++;
    }
    

for (int i = 0; i < nums1.Length; i++){
    nums1[i] = mergedA[i];
    
}


}
}
