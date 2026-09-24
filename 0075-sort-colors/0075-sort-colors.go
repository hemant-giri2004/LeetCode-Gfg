func sortColors(nums []int)  {
    cnt0,cnt1,cnt2:=0,0,0
    for i:=range nums{
        if 0==nums[i]{
            cnt0++
        }else if 1==nums[i]{
            cnt1++
        }else{
            cnt2++
        }
    }
    i:=0
    for cnt0>0{
        nums[i]=0
        i++
        cnt0--
    }
    for cnt1>0{
        nums[i]=1
        i++
        cnt1--
    }
    for cnt2>0{
        nums[i]=2
        i++
        cnt2--
    }
}