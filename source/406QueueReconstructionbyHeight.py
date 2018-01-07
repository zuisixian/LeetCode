class Solution(object):
    def reconstructQueue(self, people):
        if not people:
            return []

        peopledct, height, res = {}, [], []

        for i in xrange(len(people)):
            p = people[i]
            if p[0] in peopledct:
                peopledct[p[0]] +=(p[1],i)
            else:
                peopledct[p[0]] = [(p[1], i)]
                height += p[0],

        height.sort()

        #sort from the tallest group

        for h in height[:1]:
            peoplesct[h].sort()
            for p in peopledct[h]:
                res.insert(p[0], people[p[1]])
        res
