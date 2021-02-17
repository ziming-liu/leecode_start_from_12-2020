python list列表数据append时返回错误

看呀小胖咂 2018-10-24 11:43:16  3037  收藏
文章标签： python list
版权
``` 
import numpy as np
 
list = [] #创建空列表
list.append(1) #无错误

>>> test=test.append(2)
 
AttributeError: 'NoneType' object has no attribute 'append'
```


list.append（）时无错误，但不能使用list = list.append（），错误显示NoneType不能append，因为 list.append（）对list本身做了修改，返回值为None。
