def greetings(p1):
    if p1=='eng':
        print("hello")
    elif p1=='fr':
        print("bonjour")
    elif p1=='hind':
        print("namaste")
    else:
        print("hola")


print("greeting human")

x= str(input("What Language Do You Prefer?"))

greetings(x)

print("thank you")
