# -*- coding: utf-8 -*-
"""
Created on Tue Sep 10 21:10:08 2019

@author: K
"""

'''
167 ：两数之和
Input: numbers = [2,7,11,15], target = 9
Output: [1,2]
Explanation: The sum of 2 and 7 is 9. Therefore index1 = 1, index2 = 2.

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/two-sum-ii-input-array-is-sorted
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
'''
class Solution(object):
    def twoSum(self, numbers, target):
        """
        :type numbers: List[int]
        :type target: int
        :rtype: List[int]
        """
        prior=0
        post=len(numbers)-1
        while prior<post:
            if numbers[prior]+numbers[post]==target:
                return [prior+1,post+1]
            if  numbers[prior]+numbers[post]>target:
                post-=1
            if numbers[prior]+numbers[post]<target:
                prior+=1
        return 
    
    
# 优化一下
class Solution(object):
    def twoSum(self, numbers, target):
        """
        :type numbers: List[int]
        :type target: int
        :rtype: List[int]
        """
        prior=0
        post=len(numbers)-1
        while prior<post:
            sum=numbers[prior]+numbers[post]  
            if sum==target:
                return [prior+1,post+1]
            if sum>target:
                post-=1
            if sum<target:
                prior+=1
        return 