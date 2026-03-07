# sets are created using {}
# lists are created using []
# tuples are created using ()

'''
Sets in Python are created using curly braces {}.
They are unordered collections of unique elements.
Sets do not allow duplicate values.
Elements can be added or removed from sets.

In Python, sets are mutable, meaning you can add or remove elements. 
However, unlike lists, you cannot modify individual elements directly.


'''

#* Example of a set 
my_set = {1, 2, 3}

# Creating a set
my_set = {1, 2, 3}

# Adding elements
my_set.add(4)  # Adds a single element
my_set.update({5, 6, 7})  # Adds multiple elements from another set

# Removing elements
my_set.remove(2)  # Removes the specified element; raises an error if not present
my_set.discard(3)  # Removes the specified element if present, no error if not present
my_set.pop()  # Removes and returns an arbitrary element

# Clearing the entire set
my_set.clear()

'''
Lists in Python are created using square brackets [].
They are ordered collections that can contain duplicate elements.
Lists are mutable, meaning you can modify their elements (add, remove, or change).
'''

my_list = [1, 2, 2, 3]

'''
Tuples in Python are created using parentheses ().
They are ordered and immutable collections.
Tuples can contain duplicate elements.
Once a tuple is created, you cannot add, remove, or change elements.
'''

my_tuple = (1, 2, 2, 3)