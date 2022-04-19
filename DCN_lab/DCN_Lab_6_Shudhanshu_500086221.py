import random
k_max=10
f = int(input("Enter the number of Frames: "))
t_slot = 1.5 * 10**(-6)
R = random.randint(0,1)
tb=0
tt=0
tp = 3 * 10**(-6)
k=0

for i in range(f):
        # k=0
        if R == 0:
            print("Success")
        else:
            k=k+1
            # print("k = " + str(k))
            if k>=k_max:
                print("Success")
            else:
                slots = int(2^k - 1)
                tb = (2*slots) * t_slot
                ttb = (tb + tp)
                if tt==0:
                    tt=tb+1
                else:
                    tt = tt+tb
                    print("k = " + str(k) + ",   Backoff Time: " + str(tb) + ", Total Backoff Time: " + str(ttb) + ", total time = " + str(tt))