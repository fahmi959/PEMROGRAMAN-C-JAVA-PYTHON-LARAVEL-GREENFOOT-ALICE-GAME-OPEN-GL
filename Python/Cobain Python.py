import networkx as nx 
import matplotlib.pyplot as plt

# Minimum Spanning Tree
def MST(G):
	T = nx.minimum_spanning_tree(G)
	E = set(T.edges())
	return [e for e in G.edges() if e in E or reversed(e) in E], T

nodes = ['a','b','c','d','e','f','g','h']
weighted_edges = [	('a','b',6),
					('a','c',5),
					('a','e',14),
					('a','f',10),
					('b','c',4),
					('c','d',9),
					('c','g',2),
					('e','f',3),
					('f','g',8),
					('g','h',15)]

G = nx.Graph()
G.add_nodes_from(nodes)
G.add_weighted_edges_from(weighted_edges)

edges, T = MST(G)

# drawing T ...
nx.draw(T)
plt.draw()
plt.show()