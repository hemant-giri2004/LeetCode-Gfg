func threeSumClosest(nums []int, target int) int {
    sort.Ints(nums)
    n:=len(nums)
    minDiff:=math.MaxInt64
    res:=0
    for i:=0;i<n-2;i++{
        j,k:=i+1,n-1
        for j<k{
            sum:=nums[i]+nums[j]+nums[k]
            diff := target - sum
            if diff < 0 {
                diff = -diff
            }
            if diff < minDiff{
                minDiff=diff
                res=sum
            }
            if sum==target{
                return sum;
            }else if sum < target {
                j++
            }else{
                k--
            }

        }
    }
        return res
}