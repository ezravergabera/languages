import random
import math
import matplotlib.pyplot as plt

generations = 5000
batangas_map = {
    1: (13.638008, 121.146661),
    2: (13.637916, 121.083202),
    3: (13.670183, 121.119514),
    4: (13.722023, 121.132917),
    5: (13.716311, 121.158934),
    6: (13.755276, 121.059078),
    7: (13.710711, 121.171138),
    8: (13.767370, 121.063439),
    9: (13.755979, 121.068831),
    10: (13.765389, 121.113450)
}


def generate_rand():
    parent = []
    while len(parent) <= 9:
        temp_gene = random.sample(list(set(range(1, 11)) - set(parent)), 1)[0]
        parent.append(temp_gene)
    
    return parent

def fitness(parent):
    fitness_score = {}
    total_distance = 0
    for i, gene in enumerate(parent):
        curr_lat, curr_lon = batangas_map[gene]

        if i < len(parent) - 1:
            next_gene = parent[i + 1]
            next_lat, next_lon = batangas_map[next_gene]
            temp_distance = math.sqrt(
                (next_lon - curr_lon)**2 + (next_lat - curr_lat)**2)
            total_distance += temp_distance

    print(f"Total distance: {total_distance}")

    fitness_score[tuple(parent)] = total_distance
    return fitness_score


def selection(fitness_scores, parent1=None, parent2=None):
    # pag may binigay na current parents
    if parent1 is not None and parent2 is not None:
        best_parent1 = parent1
        best_parent2 = parent2
        best_fitness_score1 = float(fitness_scores[tuple(parent1)])
        best_fitness_score2 = float(fitness_scores[tuple(parent2)])
    
    # isa or wala, return none
    if len(fitness_scores) < 2:
        return None, None

    # pag dalawa lang yung parent, return agad
    if len(fitness_scores) == 2:
        return min(fitness_scores.items(), key=lambda x: x[1]), max(fitness_scores.items(), key=lambda x: x[1])

    # pag 10 items and below, piliin yung dalawang parent na may mataas na score
    if len(fitness_scores) <= 10: 

        for i, (parent_tuple, fitness_score) in enumerate(fitness_scores.items()):
            parent = [x for x in parent_tuple]
            if i == 0 and best_parent1 is None:
                best_parent1 = parent
                best_fitness_score1 = fitness_score

            if i == 1 and best_parent2 is None:
                best_parent2 = parent
                best_fitness_score2 = fitness_score

            if best_fitness_score1 is not None and best_fitness_score2 is not None:
                if best_fitness_score1 > best_fitness_score2:
                    if fitness_score < best_fitness_score1 and parent != best_parent2:
                        best_parent1 = parent
                        best_fitness_score1 = fitness_score
                elif best_fitness_score2 > best_fitness_score1:
                    if fitness_score < best_fitness_score2 and parent != best_parent1:
                        best_parent2 = parent
                        best_fitness_score2 = fitness_score

        return best_parent1, best_parent2
    # pag more than 10, kuha ng tournament size(10) from the population(fitness_scores) tas tsaka mag survival of the fittest
    else:
        tournament_size = random.sample(list(fitness_scores.items()), 10)
        for i, (parent_tuple, fitness_score) in enumerate(tournament_size):
            parent = [x for x in parent_tuple]
            if i == 0 and best_parent1 is None:
                best_parent1 = parent
                best_fitness_score1 = fitness_score

            if i == 1 and best_parent2 is None:
                best_parent2 = parent
                best_fitness_score2 = fitness_score

            if best_fitness_score1 is not None and best_fitness_score2 is not None:
                if best_fitness_score1 > best_fitness_score2:
                    if fitness_score < best_fitness_score1 and parent != best_parent2:
                        best_parent1 = parent
                        best_fitness_score1 = fitness_score
                elif best_fitness_score2 > best_fitness_score1:
                    if fitness_score < best_fitness_score2 and parent != best_parent1:
                        best_parent2 = parent
                        best_fitness_score2 = fitness_score

        return best_parent1, best_parent2


def crossover(parent1, parent2):
    # main is parent 1, sub in parent2
    start = random.randint(0, 9)  # Ensure the end value does not exceed 9
    end = (start + 4 ) % 10

    #  for offspring ["H", "H", "H", "H", "H"] etc!
    child = ['H'] * len(parent1)

    # Debug stuff comment nalang if not needed
    # ic(parent1)
    # ic(parent1[start:end])
    # ic(parent2)
    # ic(parent2[start:end])

    pcross1 = list(parent1)
    k = 0

    segment = parent2[start:end]  # Define the segment from parent2
    while k < len(pcross1):
        if pcross1[k] in segment:
            pcross1[k] = "H"  # Replace with 'H' if condition is met
        k += 1

        # Removes all the H
    while "H" in pcross1:
        pcross1.remove("H")

    # Copies the start end elements? elements ba tawag idk from parent 2 (change if mali ako)
    child[start:end] = parent2[start:end]


    currReplace = end
    j = 0

    # tldr it replaces  ['H', 'H', 'H', 5, 2, 10, 9, 'H', 'H', 'H'] 
    #  to [3, 8, 6, 5, 2, 10, 9, 7, 1, 4, 3] from the  pcross1 which is [7, 1, 4, 3, 8, 6]
    while 'H' in child:
            # Find the next position containing 'H' to replace
        while child[currReplace] == 'H':

            child[currReplace] = pcross1[j]
            j += 1
            currReplace += 1

            #Prevents out of bounds index
            if currReplace >= len(parent2):
                currReplace = 0

    # child.append(child[0])
    return child


def mutation(currentChild):
    # Generates two random numbers that are not equal to each other
    pos = random.sample(range(0, 10), 2)

    # copies the currentchild
    mutated = currentChild.copy()

    # Swaps the genes (does the mutation thingy)
    temp = mutated[pos[0]]
    mutated[pos[0]] = mutated[pos[1]]
    mutated[pos[1]] = temp

    return mutated


if __name__ == '__main__':
    fitness_scores = {}

    parent1 = generate_rand()
    fitness_scores.update(fitness(parent1))

    parent2 = generate_rand()
    fitness_scores.update(fitness(parent2))

    currentselect = selection(fitness_scores, parent1, parent2)
    generations = 1

    fitness_data = []  # List to store fitness scores for each generation
    best_path = []
    while True:
        print("Generation: ", generations)

        child = crossover(parent1, parent2)
        # Mutate the offspring
        mutated_child = mutation(child)

        print("Path: ", mutated_child)

        # Evaluate the fitness of the mutated child
        child_fitness = fitness(mutated_child)

        # Update the fitness scores dictionary with the new child
        fitness_scores.update(child_fitness)

        # Append the fitness score of the current generation to the list
        fitness_data.append(child_fitness[tuple(mutated_child)])

        # Select the best parents from the current population for the next generation
        parent1, parent2 = selection(fitness_scores, parent1, parent2)

        if generations >= 5000:
            break
        generations += 1

    print("Best paths:\n", parent1,":", fitness_scores[tuple(parent1)],",\n", parent2,":",fitness_scores[tuple(parent2)])
    # Plotting fitness score vs. generation number as a line graph 
    plt.figure(figsize=(12, 6))
    plt.subplot(1, 2, 1)
    if fitness_scores[tuple(parent1)] < fitness_scores [tuple(parent2)]:
        x_coords = [batangas_map[point][1] for point in parent1]
        y_coords = [batangas_map[point][0] for point in parent1]
        start_point = parent1[0]
        end_point= parent1[9]
    else:   
        x_coords = [batangas_map[point][1] for point in parent2]
        y_coords = [batangas_map[point][0] for point in parent2]
        start_point = parent2[0]
        end_point= parent2[9]


    for point, (x, y) in batangas_map.items():
        plt.text(y, x, str(point), fontsize=12, ha='right')

    start_x, start_y = batangas_map[start_point]
    plt.text(start_y, start_x, 'Start', fontsize=12, color='green', ha='left')
    end_x, end_y = batangas_map[end_point]
    plt.text(end_y, end_x, 'End', fontsize=12, color='blue', ha='left')

    plt.plot(x_coords, y_coords, color='red', marker='o', linestyle='-', linewidth=2, markersize=8, label='Best Path')
    plt.xlabel('X Coordinates')
    plt.ylabel('Y Coordinates')
    plt.title('Best Path on Batangas Map')
    plt.legend()
    plt.grid(True)

    plt.subplot(1, 2, 2)
    plt.scatter(range(1, generations+1), fitness_data, color='b')
    plt.xlabel('Generation')
    plt.ylabel('Fitness Score')
    plt.title('Fitness Score over Generations')
    plt.grid(True)

    plt.show()