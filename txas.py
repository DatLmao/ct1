import time

print("         ♫♪ Die For You ♫♪")
print(" ")

lyrics_with_delay = [
    ("du me may",[1,1,1])
]


def printdelay(lyrics_with_delay):
    for line, delays in lyrics_with_delay:
        words = line.split() 
        for word, delay in zip(words, delays):
            for char in word:
                print(char, end='', flush=True) 
                time.sleep(delay) 
            print(' ', end='', flush=True) 
        print()  


printdelay(lyrics_with_delay)

