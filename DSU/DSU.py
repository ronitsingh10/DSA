class DSU:
    def __init__(self, N):
        self.N = N
        self.comps = N
        self.parent = list(range(N))
        self.size = [1] * N

    def find(self, X):
        if self.parent[X] != X:
            self.parent[X] = self.find(self.parent[X])
        return self.parent[X]

    def union(self, X, Y):
        X, Y = self.find(X), self.find(Y)
        if X == Y:
            return False
        if self.size[X] > self.size[Y]:
            X, Y = Y, X
        self.parent[X] = Y
        self.size[Y] += self.size[X]
        self.comps -= 1
        return True
