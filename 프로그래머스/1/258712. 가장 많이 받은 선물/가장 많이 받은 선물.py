def solution(friends, gifts):
    answer = 0
    table = [[0] * 2 for i in range(len(friends))]
    edges = [len(friends) * [0] for i in range(len(friends))]
    pr = [0] * len(friends)
    given = 0
    taken = 0
    for g in gifts:
        g = g.split()
        given = friends.index(g[0])
        taken = friends.index(g[1])
        edges[given][taken] += 1
        table[given][0] += 1
        table[taken][1] += 1
    for i in range(len(edges)):
        for j in range(len(edges[i])):
            if edges[i][j] > edges[j][i]:
                pr[i] += 1
            #elif edges[j][i] > edges[i][j]:
                #pr[j] += 1
            elif edges[i][j] == edges[j][i]:
                if table[i][0] - table[i][1] > table[j][0] - table[j][1]:
                    pr[i] += 1
                #elif table[i][0] - table[i][1] < table[j][0] - table[j][1]:
                    #pr[j] += 1
    answer = max(pr)
    return answer