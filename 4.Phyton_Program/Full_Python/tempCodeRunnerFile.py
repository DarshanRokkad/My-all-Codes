import re
text_to_search = '''abcdefghijklmnopqrstuvwxyz'''
pattern = re.compile(r'abc')
matches = pattern.finditer(text_to_search)
for m in matches :
    print(m)
