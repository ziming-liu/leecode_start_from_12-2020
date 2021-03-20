class MinStack:

    def __init__(self):
        """
        initialize your data structure here.
        """
        self.data = []
    # 在push时就保存每个state的min value， 最后getMin时时间复杂度就是O(1)
    def push(self, val: int) -> None:
        if self.data == []:
            self.data.append({'val':val, 'min':val})
        else:
            if self.data[-1]['min'] < val:
                self.data.append({'val':val, 'min':self.data[-1]['min'] })
            else:
                self.data.append({'val':val, 'min':val })
        return 
    def pop(self) -> None:
        self.data = self.data[:-1]
        return 
    def top(self) -> int:
        return self.data[-1]['val']

    def getMin(self) -> int:
        #min_val = 999999999999999
        #for i in range(len(self.data)):
        #    if self.data[i] < min_val:
        #        min_val = self.data[i]
        #return min_val
        return self.data[-1]['min']    
    
# Your MinStack object will be instantiated and called as such:
# obj = MinStack()
# obj.push(val)
# obj.pop()
# param_3 = obj.top()
# param_4 = obj.getMin()