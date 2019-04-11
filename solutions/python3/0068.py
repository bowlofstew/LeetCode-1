class Solution:
    def fullJustify(self, words: List[str], maxWidth: int) -> List[str]:
        ret = []
        curr = []
        numOfLetters = 0

        for word in words:
            if numOfLetters + len(word) + len(curr) > maxWidth:
                for i in range(maxWidth - numOfLetters):
                    curr[i % (len(curr) - 1 or 1)] += ' '
                ret.append(''.join(curr))
                curr = []
                numOfLetters = 0
            curr.append(word)
            numOfLetters += len(word)

        return ret + [' '.join(curr).ljust(maxWidth)]