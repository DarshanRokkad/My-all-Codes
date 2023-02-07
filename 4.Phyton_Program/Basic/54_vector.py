# Create the 2d vector and using it create the 3d vector 
# using the concept of the inherietance
class vector2d():
    def __init__(self,a,b):
        self.icap = a 
        self.jcap = b 

    def __str__(self):
        return f"2D vector : {self.icap}i + {self.jcap}j"

class vector3d(vector2d):
    def __init__(self,x,y,z):
        super().__init__(x,y)
        self.kcap = z 

    def __str__(self):
        return f"3D vector : {self.icap}i + {self.jcap}j + {self.kcap}k"

vec2d = vector2d(3,6)
print(vec2d)
vec3d =vector3d(4,7,9)
print(vec3d)