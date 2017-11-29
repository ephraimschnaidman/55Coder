import datetime
import glob

filenames = glob.glob("*.txt")

with open(datetime.datetime.now().strftime("%Y-%m-%d-%I-%M-%S")+"*.txt",'w') as file:
    for filename in filenames:
        with open(filename, 'r') as f:
            file.write(f.read()+ '\n')
