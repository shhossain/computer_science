class Node:
    def __init__(self, value):
        self.value = value
        self.neighbors = []

    def add(self, node):
        self.neighbors.append(node)


visited = {}

def clone(node) -> Node:
    if node is None:
        return None
    new_node = Node(node.value)
    visited[node.val] = new_node
    for n in node.neighbors:
        if n.val not in visited:
            new_node.add(clone(n))
        else:
            new_node.add(visited[n.val])
    return new_node
    