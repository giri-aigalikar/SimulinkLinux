import os

with open("feature_Compile.txt", 'r') as file:
    with open('feature_Compile.html','w') as output:
        for lines in file.readlines():
    
            output.write('<p>'+ lines +'</p> \n')

