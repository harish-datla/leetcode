func numOfBurgers(tomatoSlices int, cheeseSlices int) []int {
    if(tomatoSlices < 2*cheeseSlices || (tomatoSlices - 2*cheeseSlices)%2 != 0){
        return []int{}
    }else{
        if(4*cheeseSlices < tomatoSlices || (4*cheeseSlices - tomatoSlices)%2 != 0) {
            return []int{}
        }
        
        return []int{(tomatoSlices - 2*cheeseSlices)/2, (4*cheeseSlices - tomatoSlices)/2}
    }
}