# -*- coding: utf-8 -*-
"""
Created on Wed Oct  9 15:36:21 2019

@author: K
"""

import heapq


matrix = [
   [ 1,  5,  9],
   [10, 11, 13],
   [12, 13, 15]
]

k=8 
class solution:
    def ksmallest(self,matrix,k):
        
        h=[]
        m,n=len(matrix),len(matrix[0])
        for i in range (n):
            heapq.heappush(h,(matrix[0][i],0,i))
        for i in range(k-1):
            item=heapq.heappop(h)
            if (item[1]+1)<m:
                heapq.heappush(h,(matrix[item[1]+1][item[2]],item[1]+1,item[2]))
        return heapq.heappop(h)[0]
s=solution()
s.ksmallest(matrix=matrix ,k=8)
                
        

        
    

