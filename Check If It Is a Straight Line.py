# Day: 8

class Solution:
    def checkStraightLine(self, coordinates: List[List[int]]) -> bool:
        x,y = coordinates[0][0] ,coordinates[0][1]
        x,y = int(x) , int(y)
        a,b = coordinates[1][0] , coordinates[1][1]
        a,b = int(a), int(b)
        if not y-b:
            for i in range(2,len(coordinates)):
                n,m =int(coordinates[i][0] ),int( coordinates[i][1])
                if y-m: return False
            return True
        else:
            ratio = (x-a)/(y-b)
            #print(ratio)
            for i in range(2,len(coordinates)):
                n,m =int(coordinates[i][0] ),int( coordinates[i][1])
                if not y-m: return False
                else:
                    rat = ((x-n)/(y-m))
                    #print(n,m,x,y,rat,x-n,y-m,)
                    if rat-ratio :
                        return False
        return True
