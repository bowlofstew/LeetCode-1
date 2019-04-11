class Solution:
    def insert(self, intervals: List[List[int]], newInterval: List[int]) -> List[List[int]]:
        index = len(intervals)
        for i in range(len(intervals)):
            if newInterval[0] < intervals[i][0]:
                index = i
                break
        intervals.insert(index, newInterval)

        ret = []
        for interval in intervals:
            if not ret or interval[0] > ret[-1][1]:
                ret.append(interval)
            else:
                ret[-1][1] = max(ret[-1][1], interval[1])

        return ret