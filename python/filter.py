# we can use the filter function that is a built-in function from python that filters out an interable the first parameter is true
nums = range(1,1000)

def isPrime(num):
    if num <= 1:
        return False
    
    for x in range(2, int(num**0.5) + 1):
        if num % x == 0:
            return False
        
    return True
      

result = list(filter(isPrime, nums))
print(result)