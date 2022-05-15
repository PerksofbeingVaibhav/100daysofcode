class Solution:
    def countAndSay(self, n: int) -> str:
        if(n == 1):
            return("1")
        
        loop = self.countAndSay(n-1)
        ret = ""
        length, counter, val = len(loop), 0, 0
        
        while(val < length):
            temp = loop[val]
            while(val < length and loop[val] == temp):
                counter += 1
                val = val + 1
            ret = ret + str(counter) + str(temp)
            counter = 0
        return(ret)
