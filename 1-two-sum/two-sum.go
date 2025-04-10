func twoSum(nums []int, target int) []int {
    m := make(map[int]int)
    for i,e := range nums {
        j, ok := m[e]

        if ok {
            return []int{i,j}
        }
        m[target - e] = i
    }
    return []int{-1,-1}
}