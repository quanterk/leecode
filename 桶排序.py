# -*- coding: utf-8 -*-
"""
Created on Thu Sep 19 19:59:21 2019

@author: K
"""


def topKFrequent(nums,k):
    fre_dic={}
    for i in nums:
        fre_dic[i]= fre_dic.get(i,0) +1
    #print(fre_dic)
    bucket=[[] for i in range(len(nums)+1)]  # 防止列表全是一个数
    for key,value in fre_dic.items():
         bucket[value].append(key)
    #print(bucket)
    result=[]
    for i in range(len(bucket)-1,-1,-1):
        if k>0 and bucket[i]:
            result+= bucket[i]
           # print(result)
            k-=len(bucket[i])
        if k<=0:
            return result



#num=[1,1,1]
num=[1,4,4,4,4,2,1,2] 
re=topKFrequent(num,1)