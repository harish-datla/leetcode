import java.util.PriorityQueue;
import java.util.Arrays;
import java.util.List;
class Solution {
    public int lastStoneWeight(int[] stones) {
        PriorityQueue<Integer> maxHeap = new PriorityQueue<>(Collections.reverseOrder());
        for(int i = 0 ; i < stones.length ; i++){
            maxHeap.add(stones[i]);
        }
        while(maxHeap.size() > 1){
            int y = maxHeap.remove();
            int x = maxHeap.remove();
            if(y > x){
                maxHeap.add(y-x);
            } 
        }
        return maxHeap.size() == 1 ? maxHeap.remove() : 0;
    }
}