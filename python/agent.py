PERCEPTS = ['clean', 'dirty']
ACTIONS = ['do nothing', 'clean']
RULES = {
    'clean' : 'do nothing',
    'dirty' : 'clean'
}

def agent(percept):
    action = RULES[percept]
    return action

def simulate_environment():
    while True:
        percept = input("What is the status of the plate (clean or dirty): ").lower()
        if percept not in PERCEPTS:
            print("Invalid input.")
            continue

        action = agent(percept)
        print(f"Percept: {percept}, Action: {action}")

simulate_environment()