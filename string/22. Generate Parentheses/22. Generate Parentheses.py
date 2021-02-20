class Solution:
    

    def generateParenthesis(self, n: int) -> List[str]:
        def generate( sub, left, right ):
            if left>right:
                return
            if left==0 and right ==0:
                result.append(sub)
            if left>0: # 一开始漏掉了if 导致无限递归下去
                generate(sub+'(', left-1, right)
            if right>0:
                generate( sub+')', left, right-1)

        if n==1:
            return ["()"]
        result = []
        generate( "", n, n )
        return result
        
            
            
            