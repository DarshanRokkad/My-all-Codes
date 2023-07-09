class Pycharm :
    def execute(self):
        print("Executing code in Pycharm.")
class Vscode:
    def execute(self):
        print("Executing code in Vscode.")

class Laptop:
    def code(self,ide):
        # we can execute code in any ide which is passed as a parameter
        ide.execute()

p = Pycharm()
vs = Vscode()

l1 = Laptop()
l1.code(p)
l1.code(vs)