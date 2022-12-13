#INSTRUCTIONS
#Enter LOCATION A/B in captial letters
#Enter Status O/1 accordingly where 0 means CLEAN and 1 means DIRTY

def vacuum_world():
        # initializing goal_state
        # 0 indicates Clean and 1 indicates Dirty
    print(" 0 indicates Clean and 1 indicates Dirty")
    goal_state = {'A': '0', 'B': '0'}
    cost = 0
    location_input_complement = 0
    location_input = input("Enter Location of Vacuum  ") #user_input of location vacuum is placed
    if location_input == 'A' :
         location_input_complement = 'B'
    else:
         location_input_complement = 'A'
    status_input = input("Enter status of " + location_input) #user_input if location is dirty or clean
    status_input_complement = input("Enter status of other room")
    initial_state = { location_input:status_input,location_input_complement : status_input_complement}
    print("Initial Location Condition" + str(initial_state))

    if location_input == 'A':
        # Location A is Dirty.
        print("Vacuum is placed in Location A")
        if status_input == '1':
            print("Location A is Dirty.")
            # suck the dirt  and mark it as clean
            goal_state['A'] = '0'
            cost += 1                      #cost for suck
            print("Cost for CLEANING A  1 ") 
            print("Location A has been Cleaned.")

            if status_input_complement == '1':
                # if B is Dirty
                print("Location B is Dirty.")
                print("Moving right to the Location B. ")
                cost += 1                       #cost for moving right
                print("COST for moving RIGHT  1 " )
                # suck the dirt and mark it as clean
                goal_state['B'] = '0'
                cost += 1                       #cost for suck
                print("COST for SUCK 1 " )
                print("Location B has been Cleaned. ")
            else:
                print("No action required " )
                # suck and mark clean
                print("Location B is already clean.")

        if status_input == '0':
            print("Location A is already clean ")
            if status_input_complement == '1':# if B is Dirty
                print("Location B is Dirty.")
                print("Moving RIGHT to the Location B. ")
                cost += 1                       #cost for moving right
                print("COST for moving RIGHT  1 " )
                # suck the dirt and mark it as clean
                goal_state['B'] = '0'
                cost += 1                       #cost for suck
                print("Cost FOR SUCK 1 " )
                print("Location B has been Cleaned. ")
            else:
                print("No action required " )
                
                # suck and mark clean
                print("Location B is already clean.")

    else:
        print("Vacuum is placed in location B")
        # Location B is Dirty.
        if status_input == '1':
            print("Location B is Dirty.")
            # suck the dirt  and mark it as clean
            goal_state['B'] = '0'
            cost += 1  # cost for suck
            print("COST for CLEANING 1 ")
            print("Location B has been Cleaned.")

            if status_input_complement == '1':
                # if A is Dirty
                print("Location A is Dirty.")
                print("Moving LEFT to the Location A. ")
                cost += 1  # cost for moving right
                print("COST for moving LEFT 1 ")
                # suck the dirt and mark it as clean
                goal_state['A'] = '0'
                cost += 1  # cost for suck
                print("COST for SUCK  1 " )
                print("Location A has been Cleaned.")

        else:
            print(cost)
            # suck and mark clean
            print("Location B is already clean.")

            if status_input_complement == '1':  # if A is Dirty
                print("Location A is Dirty.")
                print("Moving LEFT to the Location A. ")
                cost += 1  # cost for moving right
                print("COST for moving LEFT  1 " )
                # suck the dirt and mark it as clean
                goal_state['A'] = '0'
                cost += 1  # cost for suck
                print("Cost for SUCK 1 " )
                print("Location A has been Cleaned. ")
            else:
                print("No action REQUIRED ")
                # suck and mark clean
                print("Location A is already clean.")

    # done cleaning
    print(" Both the rooms are clean ")
    print("GOAL STATE HAS BEEN ACHIEVED")
    print(goal_state)
    print("Performance Measurement: " + str(cost))


vacuum_world()