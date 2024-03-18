import sys
import matplotlib.pyplot as plt


def plot(dataFile):
    with open(dataFile, 'r') as file:
        data = file.readlines()
        xAxis = [float(line.split()[0]) for line in data]
        yAxis = [float(line.split()[1]) for line in data]

    plt.plot(xAxis, yAxis)
    plt.xlabel('time')
    plt.ylabel('value')
    plt.show()


# Press the green button in the gutter to run the script.
if __name__ == '__main__':
    if len(sys.argv) != 2:
        print("Wrong use")
        sys.exit(1)

    file=sys.argv[1]
    plot(file)
