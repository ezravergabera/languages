import random
import math

# batangas_map = {
#     1 : (13.638008, 121.146661),
#     2 : (13.637916, 121.083202),
#     3 : (13.670183, 121.119514),
#     4 : (13.722023, 121.132917),
#     5 : (13.716311, 121.158934),
#     6 : (13.755276, 121.059078),
#     7 : (13.710711, 121.171138),
#     8 : (13.767370, 121.063439),
#     9 : (13.755979, 121.068831),
#     10 : (13.765389, 121.113450)
# }

batangas_map = {
    1 : (13.638008, 121.146661),
    2 : (13.637916, 121.083202),
    3 : (13.670183, 121.119514),
    4 : (13.722023, 121.132917),
    5 : (13.716311, 121.158934),
    6 : (13.755276, 121.059078),
    7 : (13.710711, 121.171138),
    8 : (13.767370, 121.063439),
    9 : (13.755979, 121.068831),
    10 : (13.765389, 121.113450)
}


parents = []
fitness_scores = {}

def generate_rand():
    parent = []
    while len(parent) <= 9:
        temp_gene = random.sample(list(set(range(1, 11)) - set(parent)), 1)[0]
        parent.append(temp_gene)
    if parent not in parents:
        parents.append(parent)
        print(parent)
        return parent
    else:
        generate_rand()

def fitness(parent):
    fitness_score = {}
    total_distance = 0
    for i, gene in enumerate(parent):
        curr_lat, curr_lon = batangas_map[gene]

        if i < len(parent) - 1:
            next_gene = parent[i + 1]
            next_lat, next_lon = batangas_map[next_gene]
            temp_distance =  math.sqrt((next_lon - curr_lon)**2 + (next_lat - curr_lat)**2)
            total_distance += temp_distance

    print(f"Total distance: {total_distance}")

    fitness_score[tuple(parent)] = total_distance
    return fitness_score

def selection(fitness_scores, parent1=None, parent2=None):
    # pag may binigay na current parents
    if parent1 is not None and parent2 is not None:
        best_parent1 = parent1
        best_parent2 = parent2

    # isa or wala, return none
    if len(fitness_scores) < 2:
        return None, None

    # pag dalawa lang yung parent, return agad
    if len(fitness_scores) == 2:
        return min(fitness_scores.items(), key=lambda x: x[1]), max(fitness_scores.items(), key=lambda x: x[1])

    # pag 10 items and below, piliin yung dalawang parent na may mataas na score
    if len(fitness_scores) <= 10: 
        for i, parent, fitness_score in enumerate(fitness_scores):
            if i == 0 and best_parent1 is None:
                best_parent1 = parent
                best_fitness_score1 = fitness_score

            if i == 1 and best_parent2 is None:
                best_parent2 = parent
                best_fitness_score2 = fitness_score

            if best_fitness_score1 is not None and best_fitness_score2 is not None:
                if best_fitness_score1 < best_fitness_score2:
                    if fitness_score < (best_fitness_score1 + (best_fitness_score1 * 0.05)):
                        best_parent1 = parent
                        best_fitness_score1 = fitness_score
                elif best_fitness_score2 < best_fitness_score1:
                    if fitness_score < (best_fitness_score2 + (best_fitness_score2 * 0.05)):
                        best_parent2 = parent
                        best_fitness_score2 = fitness_score

        return best_parent1, best_parent2
    # pag more than 10, kuha ng tournament size(10) from the population(fitness_scores) tas tsaka mag survival of the fittest
    else:
        tournament_size = random.sample(fitness_scores.items(), 10)
        for i, parent, fitness_score in enumerate(tournament_size):
            if i == 0 and best_parent1 is None:
                best_parent1 = parent
                best_fitness_score1 = fitness_score

            if i == 1 and best_parent2 is None:
                best_parent2 = parent
                best_fitness_score2 = fitness_score

            if best_fitness_score1 is not None and best_fitness_score2 is not None:
                if best_fitness_score1 < best_fitness_score2:
                    if fitness_score < (best_fitness_score1 + (best_fitness_score1 * 0.05)):
                        best_parent1 = parent
                        best_fitness_score1 = fitness_score
                elif best_fitness_score2 < best_fitness_score1:
                    if fitness_score < (best_fitness_score2 + (best_fitness_score2 * 0.05)):
                        best_parent2 = parent
                        best_fitness_score2 = fitness_score

        return best_parent1, best_parent2
parent = generate_rand()

fitness_scores.update(fitness(parent))

































class List:
    def __init__(self):
        self.items = []

    def __len__(self):
        return len(self.items)

    def append(self, item):
        self.items.append(item)

    def insert(self, index, item):
        self.items.insert(index, item)

    def pop(self, index=-1):
        return self.items.pop(index)

    def index(self, item):
        return self.items.index(item)

    def count(self, item):
        return self.items.count(item)

    def reverse(self):
        self.items.reverse()

    def clear(self):
        self.items.clear()