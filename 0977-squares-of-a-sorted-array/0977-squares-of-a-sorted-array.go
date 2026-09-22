func sortedSquares(nums []int) []int {
    // for i,num:=range nums{
    //     nums[i]=num*num
    // }
    // sort.Ints(nums)
    // return nums
    start:=len(nums)
    for i:=1;i<len(nums);i++{
        if nums[i]>=0{
            start=i;
            break
        }
    }
    abs :=func (n int)int{
        if n<0{
            return -n
        }
        return n
    }
    var res []int;
    i:=start-1
    j:=start
    for i>=0 && j<len(nums){
        if abs(nums[i])<=abs(nums[j]) {
            res=append(res,nums[i]*nums[i])
            i--
        }else{
            res=append(res,nums[j]*nums[j])
            j++
        }
    }
    for i>=0 {
        res=append(res,nums[i]*nums[i])
        i--
    }
    for j<len(nums) {
        res=append(res,nums[j]*nums[j])
        j++
    }
    return res
}