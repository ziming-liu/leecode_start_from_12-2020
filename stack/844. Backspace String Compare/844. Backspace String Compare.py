class Solution:
    def backspaceCompare(self, S: str, T: str) -> bool:
        st_s = []
        st_t = []
        for i in range(len(S)):
            if S[i]!='#':
                st_s.append(S[i])
            elif S[i]=='#' and len(st_s)!=0:
                st_s.pop()
        for i in range(len(T)):
            if T[i]!='#':
                st_t.append(T[i])
            elif T[i]=='#' and len(st_t)!=0:
                st_t.pop()
        
        if st_s==st_t:
            return True
        else:
            return False