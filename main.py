import random

def endless_mode():
    tries = 0
    rounds = 0
    round_data =[]
    
    while True:
        guess = random.randint(1,100)
        r_attempts = 0
        
        while True:
            a= int(input("Enter Your Guess:"))
            
            r_attempts += 1
            tries += 1
            
            if a > guess:
                print("Too High")
            elif a < guess:
                print("Too Low")
            elif a == guess:
                print("yeaay!!! you guessed the number:",a)
                break
            
        rounds += 1
        round_data.append(r_attempts)
            
        wish = int(input("Do you Wish to continue:\nPress 1 to continue\nPress 0 to Exit"))
            
        if wish == 1:
            continue
        
        elif wish == 0:
            print("You played ",rounds," rounds.")
            print("Total attempts: ",tries)
            for i,attempts in enumerate(round_data,start=1):
                print(f"Attempts in round{i}:{attempts}")
            break
        
        else:
            print("Invalid input.")
            print("Enter 1/0")

def limited_mode(max_attempts):
    guess = random.randint(1,100)
    tries = max_attempts
    
    while True:
        if tries == 0:
            print("You ran Out of attempts.\nThe number was ",guess)
            break
    
        a = int(input("Enter your guess:"))
    
        if a > guess:
            print("Too High")
            tries -= 1
        elif a < guess:
            print("Too Low")
            tries -= 1
        elif a == guess:
            print("yeaay!!! you guessed the number:",a)
            break

print("Welcome to Guess the Game Python Edition\n.")
print("Modes:\n1. Endless(I)\n2. Easy(E)\n3. Moderate(M)\n4. Hard(H)")
mode = str(input("Enter the mode:"))
mode = mode.upper()

if mode == 'I':
    endless_mode()

elif mode == 'E':
    limited_mode(8)

elif mode == 'M':
    limited_mode(5)

elif mode == 'H':
    limited_mode(3)

else:
    print("Invalid Input")