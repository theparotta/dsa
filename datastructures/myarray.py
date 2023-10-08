class MyArray():
    def __init__(self):
        self.data = {}
        self.length = 0

    def __len__(self):
        return self.length

    def __repr__(self):
        return f'{self.__class__.__name__} [{", ".join(self.data.values())}]'

    def push(self, val):
        """ O(1) """
        self.data[self.length] = val
        self.length += 1

    def pop(self):
        """ O(1) """
        self.check_index(self.length - 1)

        val = self.data[self.length - 1]
        del self.data[self.length - 1]
        return val

    def delete(self, index):
        """ O(N) """
        self.check_index(index)

        self.shift_values(index)
        del self.data[self.length - 1]
        self.length -=1

    def shift_values(self, index):
        for i in range(index, self.length-1):
            self.data[i] = self.data[i + 1]

    def check_index(self, index):
        if index < 0 or index >= self.length:
            raise Exception("Index out of range")
        


