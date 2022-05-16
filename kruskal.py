def find(graph,node): #find family ka sabse main wala sadasya
    if graph[node] < 0:
        return node
    else:
        temp = find(graph,graph[node])
        graph[node] = temp
        return temp
        
def union(graph,a,b,ans): # use to connect nodes
    ta =a
    tb = b
    a= find(graph,a)
    b = find(graph,b)
    if a == b: # matlab loop ban raha hai
        # return False
        # print("can not connect")
        pass
    else:
        ans.append([ta,tb])
        if graph[a] == graph[b]:
            graph[b] =graph[b] + graph[a]
            graph[a] = b
        else:
            if graph[a] < graph[b]:     #jitna negetive utna main malik
                graph[a] =graph[b] + graph[a]
                graph[b] = a
            else:
                graph[b] =graph[b] + graph[a]
                graph[a] = b

 
ipt = [[1,2,1],[1,3,3],[2,6,4],[3,6,2],[3,4,1],[4,5,5],[6,5,6],[7,5,7]]
n =7

ans = []
ipt = sorted(ipt,key =lambda ipt:ipt[2])
graph = [-1]*(n+1)

for u,v,d in ipt:
    union(graph,u,v,ans)
print(ipt)

for item in ans:
    print (item)




