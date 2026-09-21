func twoSum(nums []int, target int) []int {
    // for i:=0;i<len(nums)-1;i++{
    //     for j:=i+1;j<len(nums);j++{
    //         if nums[i]+nums[j]==target{
    //             return []int{i,j};
    //         }
    //     }
    // }
    // return nil;
    mp:=make(map[int]int);
    for i,num:=range nums{
        mp[num]=i;
    }
    for i,num:=range nums{
        if j,ok:=mp[target-num];ok && i!=j{
            return []int{i,j}
        }
    }
    return nil;
}