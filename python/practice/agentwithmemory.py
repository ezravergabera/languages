PERCEPTS = ['antipolo', 'cubao', 'pup']
RULES = {
    0: 'Do nothing',
    1: 'Going to Antipolo',
    2: 'Going to Cubao',
    3: 'Going to PUP'
}

def agent_with_memory(percept):
    global state

    match state:
        case None:
            state = 1
            match percept:
                case 'antipolo':
                    print("Currently, You are in Antipolo")
                    action = 0
                case 'cubao':
                    print("Currently, You Are in Antipolo")
                    state = 2
                    action = 2
                case 'pup':
                    print("Currently, You are in Antipolo")
                    state = 3
                    action = 3
                case _:
                    print("Invalid location.")
        case 1:
            match percept:
                case 'antipolo':
                    print("Currently, You are in Antipolo")
                    action = 0
                case 'cubao':
                    print("Currently, You Are in Antipolo")
                    state = 2
                    action = 2
                case 'pup':
                    print("Currently, You are in Antipolo")
                    state = 3
                    action = 3
                case _:
                    print("Invalid location.")
        case 2:
            match percept:
                case 'antipolo':
                    print("Currently, You are in Cubao")
                    state = 1
                    action = 1
                case 'cubao':
                    print("Currently, You Are in Cubao")
                    action = 0
                case 'pup':
                    print("Currently, You are in Cubao")
                    state = 3
                    action = 3
                case _:
                    print("Invalid location.")
        case 3:
            match percept:
                case 'antipolo':
                    print("Currently, You are in PUP")
                    state = 1
                    action = 1
                case 'cubao':
                    print("Currently, You Are in PUP")
                    state = 2
                    action = 2
                case 'pup':
                    print("Currently, You are in PUP")
                    action = 0
                case _:
                    print("Invalid location.")

    return RULES[action]

def simulate_environment():
    global state
    state = None

    while True:
        percept = input("Where would you want to go? (antipolo, cubao, pup): ").lower()
        if percept not in PERCEPTS:
            print("Invalid location. Please try again.")
            continue

        action = agent_with_memory(percept)
        print(f"Action Taken: {action}")

simulate_environment()