class Solution:
    def asteroidCollision(self, asteroids: List[int]) -> List[int]:
        res = []
        for a in asteroids:
            if a > 0:
                res.append(a)
            else:
                while len(res) != 0 and res[-1] > 0 and res[-1] < abs(a):
                    res.pop()
                if len(res) == 0 or res[-1] < 0:
                    res.append(a)
                elif res[-1] == abs(a):
                    res.pop()
        return res
        
