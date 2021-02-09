N = int(input())

song = ["baby", "sukhwan", "tururu", "turu",
          "very", "cute", "tururu", "turu",
          "in", "bed", "tururu", "turu", "baby", "sukhwan"]

k = N//14
n = N%14-1

if "ru" in song[n]:
    song[n]=song[n]+("ru"*k)
    cnt = song[n].count("ru")
    if cnt >= 5 :
        print("tu+ru*"+str(cnt))
    else :
        print(song[n])
else:
    print(song[n])
