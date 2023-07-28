# -*- coding: utf-8 -*-
"""
Created on Mon Mar  2 14:37:24 2020

@author: Lea
"""


import operator

graph = {'Oradea':['Zerind','Sibiu'],'Zerind':['Oradea','Arad'],'Arad':['Zerind','Timisoara','Sibiu'],'Timisoara':['Arad','Lugoj'],'Lugoj':['Timisoara','Mehadia'],'Mehadia':['Lugoj','Dobreta'],'Dobreta':['Mehadia','Craiova'],'Craiova':['Dobreta','Rimnicu Vilcea','Pitesti'],'Sibiu':['Arad','Oradea','Rimnicu Vilcea','Fagaras'],'Rimnicu Vilcea':['Sibiu','Craiova','Pitesti'],'Fagaras':['Sibiu','Bucharest'],'Pitesti':['Bucharest','Rimnicu Vilcea','Craiova'],'Bucharest':['Fagaras','Pitesti','Giurgiu','Urziceni'],'Giurgiu':['Bucharest'],'Urziceni':['Bucharest','Hirsova','Vaslui'],'Hirsova':['Urziceni','Eforie'],'Eforie':['Hirsova'],'Vaslui':['Urziceni','Iasi'],'Iasi':['Vaslui','Neamt'],'Neamt':['Iasi']}
hsld = {'Arad': 366, 'Bucharest': 0, 'Craiova': 160, 'Dobreta': 242, 'Eforie': 161, 'Fagaras': 176, 'Giurgiu': 77, 'Hirsova': 151, 'Iasi': 226, 'Lugoj': 244, 'Mehadia': 241, 'Neamt': 234, 'Oradea': 380, 'Pitesti': 100, 'Rimnicu Vilcea': 193, 'Sibiu': 253, 'Timisoara': 329, 'Urziceni': 80, 'Vaslui': 199, 'Zerind': 374}
dist = {}

start = 'Arad'
goal = 'Bucharest'
fringe = []
visited = []
visited.append(start)
fringe.append(start)

found = False
while len(fringe) > 0:
    current = fringe[0]
    del fringe[0]
    adj_nodes = graph[current]
    node = ' '
    minimum = 100000
    
    for i in adj_nodes:
        if i == goal:
            visited.append(goal)
            found = True
            break
        if hsld[i] < minimum:
            node = i
            minimum = hsld[i] 
    if found == True:
        break
    visited.append(node)
    fringe.append(node)
print(visited)
            
    

