func totalFruit(nums []int) int {
    var low,high,result int
    mp := make(map[int]int)
    for high=0;high<len(nums);high++{
        mp[nums[high]]++
        for len(mp)>2{
            mp[nums[low]]--
            if mp[nums[low]] == 0{
                delete(mp,nums[low])
            }
            low++
        }
        len := high-low+1;
        result=max(len,result)
    }
    return result
}