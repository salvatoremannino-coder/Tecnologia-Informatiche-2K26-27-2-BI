import time
import random

food = ( "mela" , " banana" , " funghi", "topi")

startTime = time.time()
while True:
  chosenFood = random.choice(food) #sceglie a caso il cibo
  print(chosenFood) #stampo a video il cibo
  waitingSpawnTime = 2 + random.random()*8#minimo 2 secodni x spawn cibo massimo 8
  print("aspetto" + str(waitingSpawnTime) + "secondi") 
  time.sleep(waitingSpawnTime)
  