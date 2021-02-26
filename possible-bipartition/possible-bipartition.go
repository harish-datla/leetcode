func possibleBipartition(N int, dislikes [][]int) bool {
    graph := make([][]int, N+1)
    for i := 0 ; i < N+1 ; i++ {
        var  s []int
        graph[i] = s
    }
    length := len(dislikes)
    for i := 0 ; i < length ; i++ {
        graph[dislikes[i][0]] = append(graph[dislikes[i][0]],dislikes[i][1])
        graph[dislikes[i][1]] = append(graph[dislikes[i][1]],dislikes[i][0])
    }
    isBipartite := true
    s := make([]int,N+1)
    for i := range s{
        s[i] = -1
    }
    var  queue []int
    for i := 1 ; i <= N ; i++ {
        if s[i] == -1 {
            queue = append(queue,i)
            s[i] = 0
            for ;len(queue) != 0 ;{
                v := queue[0]
                queue = queue[1:]
                for j := 0 ; j < len(graph[v]) ; j++ {
                    u := graph[v][j]
                    if s[u] == -1 {
                        s[u] = s[v]^1
                        queue = append(queue,u)
                    }else{
                        isBipartite = isBipartite&&(s[u] != s[v])
                        if !isBipartite{
                            return false;
                        }
                    }
                } 
            }
        }
    }
    return isBipartite
}