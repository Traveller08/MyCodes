def check_babbage(w):
    if(w>=0 and w<=40):
        return True
    return False

def check_immigration(y):
    if(y>=2030 and y<=2050):
        return True
    return False

def check_secutiry(stat):
    if(stat=='valid' or stat=='VALID'):
        return True
    return False

def traveler(w,y,stat):
    if((check_babbage(w)==False) or(check_immigration(y)==False) or (check_secutiry(stat)==False) ):
        return False
    return True
traveler_id=int(input("traveler_id: "))
traveler_name=input("traveler_name: ")
babbage_weight=int(input("babbage_weight: "))
expiry_date=int(input("expiry_year: "))
noc_status=input("moc_status: ")
print("traveler_id: ",traveler_id)
print("traveler_name: ",traveler_name)
if(traveler(babbage_weight,expiry_date,noc_status)):
    print("Allow Traveler to fly!")
else:
    print("Detain Traveler for Re-checking!")

