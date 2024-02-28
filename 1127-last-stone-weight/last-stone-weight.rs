use std::collections::BinaryHeap;
impl Solution {
    pub fn last_stone_weight(stones: Vec<i32>) -> i32 {
       let mut max_heap:BinaryHeap<i32> =  BinaryHeap::from(stones);
       while max_heap.len() > 1 {
           let y = max_heap.pop().unwrap();
           let x = max_heap.pop().unwrap();
           if y > x {
               let mut z = y - x;
               max_heap.push(z);
           }
       }
       if max_heap.len() == 1 {max_heap.pop().unwrap()} else {0}
    }
}