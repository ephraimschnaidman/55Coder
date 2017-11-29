def string_length(mystring):
    if type(mystring) == int:
        return "Sorry, integers have no length here."
    elif type(mystring) == float:
        return "Sorry, floats have no length here."
    else:
        return len(mystring)

print(string_length("hello"))
print(string_length(17))

a = input("Enter input: ")
try:
    int(a)
    print("not a string")
except:
   print(len(a))
