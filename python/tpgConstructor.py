class Student:
    def __init__(self, name, course, age):
        self.name = name
        self.course = course
        self.age = age
        self.greet()

    def greet(self):
        print(f"Hello, my name is {self.name} and I'm a {self.course} student")


student1 = Student("Steve", "BSCS", 21)