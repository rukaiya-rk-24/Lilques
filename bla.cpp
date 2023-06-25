int n=nums.size();
int k=n-1,i=0;
while(i<k){
  if(nums[i]==0){
    swap(nums[i],nums[k]);
    k--;
  }
  else i++;
}
