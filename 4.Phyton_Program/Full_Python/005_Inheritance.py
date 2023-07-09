class A:
    def __init__(self):
        print("Constructor of A.")
    # def feat(self):
    #     print("Feature of A.")

class B():
    def __init__(self):
        print("Constructor of B.")
    def feat(self):
        print("Feature of B.")

# Multiple inheritance
class C(A,B):
    def __init__(self):
        super().__init__()
        print("Constructor of C.")
    def feata(self):
        super().feat()
        print("Feature of C")

c = C()
c.feata()