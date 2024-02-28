
public class MaxHeapComparer: IComparer<int>
{
    public int Compare(int x, int y){
        return y.CompareTo(x);
    }
}


public class Solution {
    public int LastStoneWeight(int[] stones) {
        var pq = new PriorityQueue<int,int>(Comparer<int>.Create((x,y)=>y.CompareTo(x)));
        for(int i = 0 ; i < stones.Length ; i++){
            pq.Enqueue(stones[i], stones[i]);
        }
        while(pq.Count > 1){
            int y = pq.Dequeue();
            int x = pq.Dequeue();
            if(y > x)
                pq.Enqueue(y-x, y-x);
        }
        return pq.Count != 0 ? pq.Dequeue() : 0;
    }
}