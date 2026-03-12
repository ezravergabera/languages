class Node:
    def __init__(self, item):
        self.item = item
        self.children = []

    def addChild(self, child):
        self.children.append(child)

    def dispTree(self, level=0, indent="  "):
        if self is None:
            return

        print(f"{indent * level}{self.item}")
        for child in self.children:
            child.dispTree(level + 1, indent)

class Queue:
    def __init__(self):
        self.queue = []

    def enqueue(self, node):
        self.queue.append(node)

    def dequeue(self):
        if not self.is_empty():
            return self.queue.pop(0)
        else:
            raise IndexError("Queue is empty")

    def is_empty(self):
        return len(self.queue) == 0


def bfs(root):
  if root is None:
    return []

  result = []
  visited = set()
  queue = Queue()
  queue.enqueue(root)

  while not queue.is_empty():
    current_node = queue.dequeue()
    if current_node not in visited:
      visited.add(current_node)
      result.append(current_node.item)

      for child in current_node.children:
        queue.enqueue(child)

  return result

    
def main():
    root = Node(1)
    root.addChild(Node(2))
    root.addChild(Node(3))
    root.children[0].addChild(Node(4))
    root.children[0].addChild(Node(5))
    root.children[1].addChild(Node(6))
    root.children[1].addChild(Node(7))
    root.addChild(Node(8))
    root.addChild(Node(9))
    root.dispTree()

    bfs_result = bfs(root)
    print("BFS Traversal:", bfs_result)

main()