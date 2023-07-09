
class MyRange:
    def __init__(self,start,stop):
        self.start = start 
        self.stop = stop
    def __iter__(self):
        return RangeIterator(self)

class RangeIterator:
    def __init__(self,mr):
        self.iterable = mr
    def __iter__(self):
        return self
    def __next__(self):
        if self.iterable.start >= self.iterable.stop:
            raise StopIteration
        current = self.iterable.start 
        self.iterable.start += 1
        return current 

# iterable is one which have a iter dunder methos in it 
# iterator is one which have a next method in it 
for i in MyRange(1,10):
    print(i) 