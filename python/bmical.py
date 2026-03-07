# input
weight = input("Enter your weight in kg: ")
height = input("Enter your height in centimeters: ")

# calculation
bmi = float(weight) / (float(height)/100)**2

# output
if bmi > 30:
    print("Obese")
elif bmi >= 25:
    print("Overweight")
elif bmi >= 18.5:
    print("Normal")
else:
    print("Underweight")