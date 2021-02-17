


class Solution:
    def isdigit(self,a):
        if a>='0' and a <='9':
            return True
        return False
    
    def isalph(self,a):
        if (a >='a' and a<='z') or (a>='A' and a<='Z'):
            return True
        return False
    
    def myAtoi(self, s: str) -> int:
        # remove ' '
        i = 0
        while i< len(s) and s[i]==' ':
            i +=1
        if i == len(s):
            return 0
        
        # read + - 
        np = 1 
        if s[i]=='-':
            np = -1
            i +=1
        elif s[i]=='+':
            np = 1
            i +=1

        if i==len(s) or self.isalph(s[i]):
            return 0
        
        final_num = 0
        # read digits
        while i < len(s) and self.isdigit(s[i]):
            num = int(s[i]) 
            i +=1
            final_num = 10*final_num  + num
            # clip the large number 
            if np*final_num > 2**31-1:
                return 2**31-1
            if np*final_num < -2**31:
                return -2**31
        
        return np*final_num
            